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

#include "getloggerdefinitionversionresponse.h"
#include "getloggerdefinitionversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::GetLoggerDefinitionVersionResponse
 * \brief The GetLoggerDefinitionVersionResponse class provides an interace for Greengrass GetLoggerDefinitionVersion responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS Greengrass ensures your devices can respond
 *  quickly to local events and operate with intermittent connectivity. AWS Greengrass minimizes the cost of transmitting
 *
 * \sa GreengrassClient::getLoggerDefinitionVersion
 */

/*!
 * Constructs a GetLoggerDefinitionVersionResponse object for \a reply to \a request, with parent \a parent.
 */
GetLoggerDefinitionVersionResponse::GetLoggerDefinitionVersionResponse(
        const GetLoggerDefinitionVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new GetLoggerDefinitionVersionResponsePrivate(this), parent)
{
    setRequest(new GetLoggerDefinitionVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetLoggerDefinitionVersionRequest * GetLoggerDefinitionVersionResponse::request() const
{
    Q_D(const GetLoggerDefinitionVersionResponse);
    return static_cast<const GetLoggerDefinitionVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass GetLoggerDefinitionVersion \a response.
 */
void GetLoggerDefinitionVersionResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetLoggerDefinitionVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::GetLoggerDefinitionVersionResponsePrivate
 * \brief The GetLoggerDefinitionVersionResponsePrivate class provides private implementation for GetLoggerDefinitionVersionResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a GetLoggerDefinitionVersionResponsePrivate object with public implementation \a q.
 */
GetLoggerDefinitionVersionResponsePrivate::GetLoggerDefinitionVersionResponsePrivate(
    GetLoggerDefinitionVersionResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass GetLoggerDefinitionVersion response element from \a xml.
 */
void GetLoggerDefinitionVersionResponsePrivate::parseGetLoggerDefinitionVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetLoggerDefinitionVersionResponse"));
    /// @todo
}

} // namespace Greengrass
} // namespace QtAws
