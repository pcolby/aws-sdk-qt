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

#include "getloggerdefinitionresponse.h"
#include "getloggerdefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::GetLoggerDefinitionResponse
 * \brief The GetLoggerDefinitionResponse class provides an interace for Greengrass GetLoggerDefinition responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS Greengrass ensures your devices can respond
 *  quickly to local events and operate with intermittent connectivity. AWS Greengrass minimizes the cost of transmitting
 *
 * \sa GreengrassClient::getLoggerDefinition
 */

/*!
 * Constructs a GetLoggerDefinitionResponse object for \a reply to \a request, with parent \a parent.
 */
GetLoggerDefinitionResponse::GetLoggerDefinitionResponse(
        const GetLoggerDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new GetLoggerDefinitionResponsePrivate(this), parent)
{
    setRequest(new GetLoggerDefinitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetLoggerDefinitionRequest * GetLoggerDefinitionResponse::request() const
{
    Q_D(const GetLoggerDefinitionResponse);
    return static_cast<const GetLoggerDefinitionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass GetLoggerDefinition \a response.
 */
void GetLoggerDefinitionResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetLoggerDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::GetLoggerDefinitionResponsePrivate
 * \brief The GetLoggerDefinitionResponsePrivate class provides private implementation for GetLoggerDefinitionResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a GetLoggerDefinitionResponsePrivate object with public implementation \a q.
 */
GetLoggerDefinitionResponsePrivate::GetLoggerDefinitionResponsePrivate(
    GetLoggerDefinitionResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass GetLoggerDefinition response element from \a xml.
 */
void GetLoggerDefinitionResponsePrivate::parseGetLoggerDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetLoggerDefinitionResponse"));
    /// @todo
}

} // namespace Greengrass
} // namespace QtAws
