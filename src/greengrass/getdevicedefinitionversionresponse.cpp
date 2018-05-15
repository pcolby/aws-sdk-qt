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

#include "getdevicedefinitionversionresponse.h"
#include "getdevicedefinitionversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::GetDeviceDefinitionVersionResponse
 * \brief The GetDeviceDefinitionVersionResponse class provides an interace for Greengrass GetDeviceDefinitionVersion responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS Greengrass ensures your devices can respond
 *  quickly to local events and operate with intermittent connectivity. AWS Greengrass minimizes the cost of transmitting
 *
 * \sa GreengrassClient::getDeviceDefinitionVersion
 */

/*!
 * Constructs a GetDeviceDefinitionVersionResponse object for \a reply to \a request, with parent \a parent.
 */
GetDeviceDefinitionVersionResponse::GetDeviceDefinitionVersionResponse(
        const GetDeviceDefinitionVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new GetDeviceDefinitionVersionResponsePrivate(this), parent)
{
    setRequest(new GetDeviceDefinitionVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDeviceDefinitionVersionRequest * GetDeviceDefinitionVersionResponse::request() const
{
    Q_D(const GetDeviceDefinitionVersionResponse);
    return static_cast<const GetDeviceDefinitionVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass GetDeviceDefinitionVersion \a response.
 */
void GetDeviceDefinitionVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDeviceDefinitionVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::GetDeviceDefinitionVersionResponsePrivate
 * \brief The GetDeviceDefinitionVersionResponsePrivate class provides private implementation for GetDeviceDefinitionVersionResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a GetDeviceDefinitionVersionResponsePrivate object with public implementation \a q.
 */
GetDeviceDefinitionVersionResponsePrivate::GetDeviceDefinitionVersionResponsePrivate(
    GetDeviceDefinitionVersionResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass GetDeviceDefinitionVersion response element from \a xml.
 */
void GetDeviceDefinitionVersionResponsePrivate::parseGetDeviceDefinitionVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDeviceDefinitionVersionResponse"));
    /// @todo
}

} // namespace Greengrass
} // namespace QtAws
