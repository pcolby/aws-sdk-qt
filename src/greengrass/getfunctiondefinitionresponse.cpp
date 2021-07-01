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

#include "getfunctiondefinitionresponse.h"
#include "getfunctiondefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::GetFunctionDefinitionResponse
 * \brief The GetFunctionDefinitionResponse class provides an interace for Greengrass GetFunctionDefinition responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::getFunctionDefinition
 */

/*!
 * Constructs a GetFunctionDefinitionResponse object for \a reply to \a request, with parent \a parent.
 */
GetFunctionDefinitionResponse::GetFunctionDefinitionResponse(
        const GetFunctionDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new GetFunctionDefinitionResponsePrivate(this), parent)
{
    setRequest(new GetFunctionDefinitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetFunctionDefinitionRequest * GetFunctionDefinitionResponse::request() const
{
    Q_D(const GetFunctionDefinitionResponse);
    return static_cast<const GetFunctionDefinitionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass GetFunctionDefinition \a response.
 */
void GetFunctionDefinitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetFunctionDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::GetFunctionDefinitionResponsePrivate
 * \brief The GetFunctionDefinitionResponsePrivate class provides private implementation for GetFunctionDefinitionResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a GetFunctionDefinitionResponsePrivate object with public implementation \a q.
 */
GetFunctionDefinitionResponsePrivate::GetFunctionDefinitionResponsePrivate(
    GetFunctionDefinitionResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass GetFunctionDefinition response element from \a xml.
 */
void GetFunctionDefinitionResponsePrivate::parseGetFunctionDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetFunctionDefinitionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws
