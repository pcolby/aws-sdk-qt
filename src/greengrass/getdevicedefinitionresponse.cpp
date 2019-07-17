/*
    Copyright 2013-2019 Paul Colby

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

#include "getdevicedefinitionresponse.h"
#include "getdevicedefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::GetDeviceDefinitionResponse
 * \brief The GetDeviceDefinitionResponse class provides an interace for Greengrass GetDeviceDefinition responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::getDeviceDefinition
 */

/*!
 * Constructs a GetDeviceDefinitionResponse object for \a reply to \a request, with parent \a parent.
 */
GetDeviceDefinitionResponse::GetDeviceDefinitionResponse(
        const GetDeviceDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new GetDeviceDefinitionResponsePrivate(this), parent)
{
    setRequest(new GetDeviceDefinitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDeviceDefinitionRequest * GetDeviceDefinitionResponse::request() const
{
    Q_D(const GetDeviceDefinitionResponse);
    return static_cast<const GetDeviceDefinitionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass GetDeviceDefinition \a response.
 */
void GetDeviceDefinitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDeviceDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::GetDeviceDefinitionResponsePrivate
 * \brief The GetDeviceDefinitionResponsePrivate class provides private implementation for GetDeviceDefinitionResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a GetDeviceDefinitionResponsePrivate object with public implementation \a q.
 */
GetDeviceDefinitionResponsePrivate::GetDeviceDefinitionResponsePrivate(
    GetDeviceDefinitionResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass GetDeviceDefinition response element from \a xml.
 */
void GetDeviceDefinitionResponsePrivate::parseGetDeviceDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDeviceDefinitionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws
