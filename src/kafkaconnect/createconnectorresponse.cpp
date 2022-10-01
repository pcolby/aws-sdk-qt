// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createconnectorresponse.h"
#include "createconnectorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KafkaConnect {

/*!
 * \class QtAws::KafkaConnect::CreateConnectorResponse
 * \brief The CreateConnectorResponse class provides an interace for KafkaConnect CreateConnector responses.
 *
 * \inmodule QtAwsKafkaConnect
 *
 *
 * \sa KafkaConnectClient::createConnector
 */

/*!
 * Constructs a CreateConnectorResponse object for \a reply to \a request, with parent \a parent.
 */
CreateConnectorResponse::CreateConnectorResponse(
        const CreateConnectorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KafkaConnectResponse(new CreateConnectorResponsePrivate(this), parent)
{
    setRequest(new CreateConnectorRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateConnectorRequest * CreateConnectorResponse::request() const
{
    Q_D(const CreateConnectorResponse);
    return static_cast<const CreateConnectorRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful KafkaConnect CreateConnector \a response.
 */
void CreateConnectorResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateConnectorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::KafkaConnect::CreateConnectorResponsePrivate
 * \brief The CreateConnectorResponsePrivate class provides private implementation for CreateConnectorResponse.
 * \internal
 *
 * \inmodule QtAwsKafkaConnect
 */

/*!
 * Constructs a CreateConnectorResponsePrivate object with public implementation \a q.
 */
CreateConnectorResponsePrivate::CreateConnectorResponsePrivate(
    CreateConnectorResponse * const q) : KafkaConnectResponsePrivate(q)
{

}

/*!
 * Parses a KafkaConnect CreateConnector response element from \a xml.
 */
void CreateConnectorResponsePrivate::parseCreateConnectorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateConnectorResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace KafkaConnect
} // namespace QtAws
