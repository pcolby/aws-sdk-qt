/*
    Copyright 2013-2018 Paul Colby

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

#include "getresourcedefinitionresponse.h"
#include "getresourcedefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::GetResourceDefinitionResponse
 * \brief The GetResourceDefinitionResponse class provides an interace for Greengrass GetResourceDefinition responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS Greengrass ensures your devices can respond
 *  quickly to local events and operate with intermittent connectivity. AWS Greengrass minimizes the cost of transmitting
 *
 * \sa GreengrassClient::getResourceDefinition
 */

/*!
 * Constructs a GetResourceDefinitionResponse object for \a reply to \a request, with parent \a parent.
 */
GetResourceDefinitionResponse::GetResourceDefinitionResponse(
        const GetResourceDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new GetResourceDefinitionResponsePrivate(this), parent)
{
    setRequest(new GetResourceDefinitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetResourceDefinitionRequest * GetResourceDefinitionResponse::request() const
{
    Q_D(const GetResourceDefinitionResponse);
    return static_cast<const GetResourceDefinitionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass GetResourceDefinition \a response.
 */
void GetResourceDefinitionResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetResourceDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::GetResourceDefinitionResponsePrivate
 * \brief The GetResourceDefinitionResponsePrivate class provides private implementation for GetResourceDefinitionResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a GetResourceDefinitionResponsePrivate object with public implementation \a q.
 */
GetResourceDefinitionResponsePrivate::GetResourceDefinitionResponsePrivate(
    GetResourceDefinitionResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass GetResourceDefinition response element from \a xml.
 */
void GetResourceDefinitionResponsePrivate::parseGetResourceDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetResourceDefinitionResponse"));
    /// @todo
}

} // namespace Greengrass
} // namespace QtAws
