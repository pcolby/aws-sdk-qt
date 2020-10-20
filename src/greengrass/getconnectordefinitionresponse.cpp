/*
    Copyright 2013-2020 Paul Colby

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

#include "getconnectordefinitionresponse.h"
#include "getconnectordefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::GetConnectorDefinitionResponse
 * \brief The GetConnectorDefinitionResponse class provides an interace for Greengrass GetConnectorDefinition responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::getConnectorDefinition
 */

/*!
 * Constructs a GetConnectorDefinitionResponse object for \a reply to \a request, with parent \a parent.
 */
GetConnectorDefinitionResponse::GetConnectorDefinitionResponse(
        const GetConnectorDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new GetConnectorDefinitionResponsePrivate(this), parent)
{
    setRequest(new GetConnectorDefinitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetConnectorDefinitionRequest * GetConnectorDefinitionResponse::request() const
{
    Q_D(const GetConnectorDefinitionResponse);
    return static_cast<const GetConnectorDefinitionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass GetConnectorDefinition \a response.
 */
void GetConnectorDefinitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetConnectorDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::GetConnectorDefinitionResponsePrivate
 * \brief The GetConnectorDefinitionResponsePrivate class provides private implementation for GetConnectorDefinitionResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a GetConnectorDefinitionResponsePrivate object with public implementation \a q.
 */
GetConnectorDefinitionResponsePrivate::GetConnectorDefinitionResponsePrivate(
    GetConnectorDefinitionResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass GetConnectorDefinition response element from \a xml.
 */
void GetConnectorDefinitionResponsePrivate::parseGetConnectorDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetConnectorDefinitionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws
