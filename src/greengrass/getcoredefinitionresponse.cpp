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

#include "getcoredefinitionresponse.h"
#include "getcoredefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::GetCoreDefinitionResponse
 * \brief The GetCoreDefinitionResponse class provides an interace for Greengrass GetCoreDefinition responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::getCoreDefinition
 */

/*!
 * Constructs a GetCoreDefinitionResponse object for \a reply to \a request, with parent \a parent.
 */
GetCoreDefinitionResponse::GetCoreDefinitionResponse(
        const GetCoreDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new GetCoreDefinitionResponsePrivate(this), parent)
{
    setRequest(new GetCoreDefinitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetCoreDefinitionRequest * GetCoreDefinitionResponse::request() const
{
    Q_D(const GetCoreDefinitionResponse);
    return static_cast<const GetCoreDefinitionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass GetCoreDefinition \a response.
 */
void GetCoreDefinitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetCoreDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::GetCoreDefinitionResponsePrivate
 * \brief The GetCoreDefinitionResponsePrivate class provides private implementation for GetCoreDefinitionResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a GetCoreDefinitionResponsePrivate object with public implementation \a q.
 */
GetCoreDefinitionResponsePrivate::GetCoreDefinitionResponsePrivate(
    GetCoreDefinitionResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass GetCoreDefinition response element from \a xml.
 */
void GetCoreDefinitionResponsePrivate::parseGetCoreDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetCoreDefinitionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws
