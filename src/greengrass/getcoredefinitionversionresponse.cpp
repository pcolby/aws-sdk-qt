/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getcoredefinitionversionresponse.h"
#include "getcoredefinitionversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::GetCoreDefinitionVersionResponse
 * \brief The GetCoreDefinitionVersionResponse class provides an interace for Greengrass GetCoreDefinitionVersion responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS Greengrass ensures your devices can respond
 *  quickly to local events and operate with intermittent connectivity. AWS Greengrass minimizes the cost of transmitting
 *
 * \sa GreengrassClient::getCoreDefinitionVersion
 */

/*!
 * Constructs a GetCoreDefinitionVersionResponse object for \a reply to \a request, with parent \a parent.
 */
GetCoreDefinitionVersionResponse::GetCoreDefinitionVersionResponse(
        const GetCoreDefinitionVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new GetCoreDefinitionVersionResponsePrivate(this), parent)
{
    setRequest(new GetCoreDefinitionVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetCoreDefinitionVersionRequest * GetCoreDefinitionVersionResponse::request() const
{
    Q_D(const GetCoreDefinitionVersionResponse);
    return static_cast<const GetCoreDefinitionVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass GetCoreDefinitionVersion \a response.
 */
void GetCoreDefinitionVersionResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetCoreDefinitionVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::GetCoreDefinitionVersionResponsePrivate
 * \brief The GetCoreDefinitionVersionResponsePrivate class provides private implementation for GetCoreDefinitionVersionResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a GetCoreDefinitionVersionResponsePrivate object with public implementation \a q.
 */
GetCoreDefinitionVersionResponsePrivate::GetCoreDefinitionVersionResponsePrivate(
    GetCoreDefinitionVersionResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass GetCoreDefinitionVersion response element from \a xml.
 */
void GetCoreDefinitionVersionResponsePrivate::parseGetCoreDefinitionVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetCoreDefinitionVersionResponse"));
    /// @todo
}

} // namespace Greengrass
} // namespace QtAws
