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

#include "getfunctiondefinitionversionresponse.h"
#include "getfunctiondefinitionversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::GetFunctionDefinitionVersionResponse
 * \brief The GetFunctionDefinitionVersionResponse class provides an interace for Greengrass GetFunctionDefinitionVersion responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::getFunctionDefinitionVersion
 */

/*!
 * Constructs a GetFunctionDefinitionVersionResponse object for \a reply to \a request, with parent \a parent.
 */
GetFunctionDefinitionVersionResponse::GetFunctionDefinitionVersionResponse(
        const GetFunctionDefinitionVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new GetFunctionDefinitionVersionResponsePrivate(this), parent)
{
    setRequest(new GetFunctionDefinitionVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetFunctionDefinitionVersionRequest * GetFunctionDefinitionVersionResponse::request() const
{
    Q_D(const GetFunctionDefinitionVersionResponse);
    return static_cast<const GetFunctionDefinitionVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass GetFunctionDefinitionVersion \a response.
 */
void GetFunctionDefinitionVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetFunctionDefinitionVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::GetFunctionDefinitionVersionResponsePrivate
 * \brief The GetFunctionDefinitionVersionResponsePrivate class provides private implementation for GetFunctionDefinitionVersionResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a GetFunctionDefinitionVersionResponsePrivate object with public implementation \a q.
 */
GetFunctionDefinitionVersionResponsePrivate::GetFunctionDefinitionVersionResponsePrivate(
    GetFunctionDefinitionVersionResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass GetFunctionDefinitionVersion response element from \a xml.
 */
void GetFunctionDefinitionVersionResponsePrivate::parseGetFunctionDefinitionVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetFunctionDefinitionVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws
