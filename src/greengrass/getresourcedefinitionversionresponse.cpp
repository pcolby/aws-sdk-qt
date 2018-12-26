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

#include "getresourcedefinitionversionresponse.h"
#include "getresourcedefinitionversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::GetResourceDefinitionVersionResponse
 * \brief The GetResourceDefinitionVersionResponse class provides an interace for Greengrass GetResourceDefinitionVersion responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::getResourceDefinitionVersion
 */

/*!
 * Constructs a GetResourceDefinitionVersionResponse object for \a reply to \a request, with parent \a parent.
 */
GetResourceDefinitionVersionResponse::GetResourceDefinitionVersionResponse(
        const GetResourceDefinitionVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new GetResourceDefinitionVersionResponsePrivate(this), parent)
{
    setRequest(new GetResourceDefinitionVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetResourceDefinitionVersionRequest * GetResourceDefinitionVersionResponse::request() const
{
    Q_D(const GetResourceDefinitionVersionResponse);
    return static_cast<const GetResourceDefinitionVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass GetResourceDefinitionVersion \a response.
 */
void GetResourceDefinitionVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetResourceDefinitionVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::GetResourceDefinitionVersionResponsePrivate
 * \brief The GetResourceDefinitionVersionResponsePrivate class provides private implementation for GetResourceDefinitionVersionResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a GetResourceDefinitionVersionResponsePrivate object with public implementation \a q.
 */
GetResourceDefinitionVersionResponsePrivate::GetResourceDefinitionVersionResponsePrivate(
    GetResourceDefinitionVersionResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass GetResourceDefinitionVersion response element from \a xml.
 */
void GetResourceDefinitionVersionResponsePrivate::parseGetResourceDefinitionVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetResourceDefinitionVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws
