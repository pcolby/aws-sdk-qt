// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteconnectorresponse.h"
#include "deleteconnectorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KafkaConnect {

/*!
 * \class QtAws::KafkaConnect::DeleteConnectorResponse
 * \brief The DeleteConnectorResponse class provides an interace for KafkaConnect DeleteConnector responses.
 *
 * \inmodule QtAwsKafkaConnect
 *
 *
 * \sa KafkaConnectClient::deleteConnector
 */

/*!
 * Constructs a DeleteConnectorResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteConnectorResponse::DeleteConnectorResponse(
        const DeleteConnectorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KafkaConnectResponse(new DeleteConnectorResponsePrivate(this), parent)
{
    setRequest(new DeleteConnectorRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteConnectorRequest * DeleteConnectorResponse::request() const
{
    Q_D(const DeleteConnectorResponse);
    return static_cast<const DeleteConnectorRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful KafkaConnect DeleteConnector \a response.
 */
void DeleteConnectorResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteConnectorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::KafkaConnect::DeleteConnectorResponsePrivate
 * \brief The DeleteConnectorResponsePrivate class provides private implementation for DeleteConnectorResponse.
 * \internal
 *
 * \inmodule QtAwsKafkaConnect
 */

/*!
 * Constructs a DeleteConnectorResponsePrivate object with public implementation \a q.
 */
DeleteConnectorResponsePrivate::DeleteConnectorResponsePrivate(
    DeleteConnectorResponse * const q) : KafkaConnectResponsePrivate(q)
{

}

/*!
 * Parses a KafkaConnect DeleteConnector response element from \a xml.
 */
void DeleteConnectorResponsePrivate::parseDeleteConnectorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteConnectorResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace KafkaConnect
} // namespace QtAws
