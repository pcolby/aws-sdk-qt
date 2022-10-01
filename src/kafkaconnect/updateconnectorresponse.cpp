/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
