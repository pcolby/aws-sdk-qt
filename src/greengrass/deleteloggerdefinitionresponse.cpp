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

#include "deleteloggerdefinitionresponse.h"
#include "deleteloggerdefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::DeleteLoggerDefinitionResponse
 * \brief The DeleteLoggerDefinitionResponse class provides an interace for Greengrass DeleteLoggerDefinition responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS Greengrass ensures your devices can respond
 *  quickly to local events and operate with intermittent connectivity. AWS Greengrass minimizes the cost of transmitting
 *
 * \sa GreengrassClient::deleteLoggerDefinition
 */

/*!
 * Constructs a DeleteLoggerDefinitionResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteLoggerDefinitionResponse::DeleteLoggerDefinitionResponse(
        const DeleteLoggerDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new DeleteLoggerDefinitionResponsePrivate(this), parent)
{
    setRequest(new DeleteLoggerDefinitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteLoggerDefinitionRequest * DeleteLoggerDefinitionResponse::request() const
{
    Q_D(const DeleteLoggerDefinitionResponse);
    return static_cast<const DeleteLoggerDefinitionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass DeleteLoggerDefinition \a response.
 */
void DeleteLoggerDefinitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteLoggerDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::DeleteLoggerDefinitionResponsePrivate
 * \brief The DeleteLoggerDefinitionResponsePrivate class provides private implementation for DeleteLoggerDefinitionResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a DeleteLoggerDefinitionResponsePrivate object with public implementation \a q.
 */
DeleteLoggerDefinitionResponsePrivate::DeleteLoggerDefinitionResponsePrivate(
    DeleteLoggerDefinitionResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass DeleteLoggerDefinition response element from \a xml.
 */
void DeleteLoggerDefinitionResponsePrivate::parseDeleteLoggerDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteLoggerDefinitionResponse"));
    /// @todo
}

} // namespace Greengrass
} // namespace QtAws
