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
