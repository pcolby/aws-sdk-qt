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
