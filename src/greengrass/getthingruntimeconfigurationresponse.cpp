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

#include "getthingruntimeconfigurationresponse.h"
#include "getthingruntimeconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::GetThingRuntimeConfigurationResponse
 * \brief The GetThingRuntimeConfigurationResponse class provides an interace for Greengrass GetThingRuntimeConfiguration responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::getThingRuntimeConfiguration
 */

/*!
 * Constructs a GetThingRuntimeConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
GetThingRuntimeConfigurationResponse::GetThingRuntimeConfigurationResponse(
        const GetThingRuntimeConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new GetThingRuntimeConfigurationResponsePrivate(this), parent)
{
    setRequest(new GetThingRuntimeConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetThingRuntimeConfigurationRequest * GetThingRuntimeConfigurationResponse::request() const
{
    return static_cast<const GetThingRuntimeConfigurationRequest *>(GreengrassResponse::request());
}

/*!
 * \reimp
 * Parses a successful Greengrass GetThingRuntimeConfiguration \a response.
 */
void GetThingRuntimeConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetThingRuntimeConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::GetThingRuntimeConfigurationResponsePrivate
 * \brief The GetThingRuntimeConfigurationResponsePrivate class provides private implementation for GetThingRuntimeConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a GetThingRuntimeConfigurationResponsePrivate object with public implementation \a q.
 */
GetThingRuntimeConfigurationResponsePrivate::GetThingRuntimeConfigurationResponsePrivate(
    GetThingRuntimeConfigurationResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass GetThingRuntimeConfiguration response element from \a xml.
 */
void GetThingRuntimeConfigurationResponsePrivate::parseGetThingRuntimeConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetThingRuntimeConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws
