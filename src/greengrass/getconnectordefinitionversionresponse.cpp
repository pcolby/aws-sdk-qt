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

#include "getconnectordefinitionversionresponse.h"
#include "getconnectordefinitionversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::GetConnectorDefinitionVersionResponse
 * \brief The GetConnectorDefinitionVersionResponse class provides an interace for Greengrass GetConnectorDefinitionVersion responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::getConnectorDefinitionVersion
 */

/*!
 * Constructs a GetConnectorDefinitionVersionResponse object for \a reply to \a request, with parent \a parent.
 */
GetConnectorDefinitionVersionResponse::GetConnectorDefinitionVersionResponse(
        const GetConnectorDefinitionVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new GetConnectorDefinitionVersionResponsePrivate(this), parent)
{
    setRequest(new GetConnectorDefinitionVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetConnectorDefinitionVersionRequest * GetConnectorDefinitionVersionResponse::request() const
{
    Q_D(const GetConnectorDefinitionVersionResponse);
    return static_cast<const GetConnectorDefinitionVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass GetConnectorDefinitionVersion \a response.
 */
void GetConnectorDefinitionVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetConnectorDefinitionVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::GetConnectorDefinitionVersionResponsePrivate
 * \brief The GetConnectorDefinitionVersionResponsePrivate class provides private implementation for GetConnectorDefinitionVersionResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a GetConnectorDefinitionVersionResponsePrivate object with public implementation \a q.
 */
GetConnectorDefinitionVersionResponsePrivate::GetConnectorDefinitionVersionResponsePrivate(
    GetConnectorDefinitionVersionResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass GetConnectorDefinitionVersion response element from \a xml.
 */
void GetConnectorDefinitionVersionResponsePrivate::parseGetConnectorDefinitionVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetConnectorDefinitionVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws
