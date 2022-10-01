// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateconnectorresponse.h"
#include "updateconnectorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KafkaConnect {

/*!
 * \class QtAws::KafkaConnect::UpdateConnectorResponse
 * \brief The UpdateConnectorResponse class provides an interace for KafkaConnect UpdateConnector responses.
 *
 * \inmodule QtAwsKafkaConnect
 *
 *
 * \sa KafkaConnectClient::updateConnector
 */

/*!
 * Constructs a UpdateConnectorResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateConnectorResponse::UpdateConnectorResponse(
        const UpdateConnectorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KafkaConnectResponse(new UpdateConnectorResponsePrivate(this), parent)
{
    setRequest(new UpdateConnectorRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateConnectorRequest * UpdateConnectorResponse::request() const
{
    Q_D(const UpdateConnectorResponse);
    return static_cast<const UpdateConnectorRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful KafkaConnect UpdateConnector \a response.
 */
void UpdateConnectorResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateConnectorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::KafkaConnect::UpdateConnectorResponsePrivate
 * \brief The UpdateConnectorResponsePrivate class provides private implementation for UpdateConnectorResponse.
 * \internal
 *
 * \inmodule QtAwsKafkaConnect
 */

/*!
 * Constructs a UpdateConnectorResponsePrivate object with public implementation \a q.
 */
UpdateConnectorResponsePrivate::UpdateConnectorResponsePrivate(
    UpdateConnectorResponse * const q) : KafkaConnectResponsePrivate(q)
{

}

/*!
 * Parses a KafkaConnect UpdateConnector response element from \a xml.
 */
void UpdateConnectorResponsePrivate::parseUpdateConnectorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateConnectorResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace KafkaConnect
} // namespace QtAws
