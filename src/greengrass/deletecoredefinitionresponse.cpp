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

#include "deletecoredefinitionresponse.h"
#include "deletecoredefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::DeleteCoreDefinitionResponse
 * \brief The DeleteCoreDefinitionResponse class provides an interace for Greengrass DeleteCoreDefinition responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS Greengrass ensures your devices can respond
 *  quickly to local events and operate with intermittent connectivity. AWS Greengrass minimizes the cost of transmitting
 *
 * \sa GreengrassClient::deleteCoreDefinition
 */

/*!
 * Constructs a DeleteCoreDefinitionResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteCoreDefinitionResponse::DeleteCoreDefinitionResponse(
        const DeleteCoreDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new DeleteCoreDefinitionResponsePrivate(this), parent)
{
    setRequest(new DeleteCoreDefinitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteCoreDefinitionRequest * DeleteCoreDefinitionResponse::request() const
{
    Q_D(const DeleteCoreDefinitionResponse);
    return static_cast<const DeleteCoreDefinitionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass DeleteCoreDefinition \a response.
 */
void DeleteCoreDefinitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteCoreDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::DeleteCoreDefinitionResponsePrivate
 * \brief The DeleteCoreDefinitionResponsePrivate class provides private implementation for DeleteCoreDefinitionResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a DeleteCoreDefinitionResponsePrivate object with public implementation \a q.
 */
DeleteCoreDefinitionResponsePrivate::DeleteCoreDefinitionResponsePrivate(
    DeleteCoreDefinitionResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass DeleteCoreDefinition response element from \a xml.
 */
void DeleteCoreDefinitionResponsePrivate::parseDeleteCoreDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteCoreDefinitionResponse"));
    /// @todo
}

} // namespace Greengrass
} // namespace QtAws
