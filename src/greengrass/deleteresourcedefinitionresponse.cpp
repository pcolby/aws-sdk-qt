/*
    Copyright 2013-2020 Paul Colby

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

#include "deleteresourcedefinitionresponse.h"
#include "deleteresourcedefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::DeleteResourceDefinitionResponse
 * \brief The DeleteResourceDefinitionResponse class provides an interace for Greengrass DeleteResourceDefinition responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::deleteResourceDefinition
 */

/*!
 * Constructs a DeleteResourceDefinitionResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteResourceDefinitionResponse::DeleteResourceDefinitionResponse(
        const DeleteResourceDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new DeleteResourceDefinitionResponsePrivate(this), parent)
{
    setRequest(new DeleteResourceDefinitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteResourceDefinitionRequest * DeleteResourceDefinitionResponse::request() const
{
    Q_D(const DeleteResourceDefinitionResponse);
    return static_cast<const DeleteResourceDefinitionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass DeleteResourceDefinition \a response.
 */
void DeleteResourceDefinitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteResourceDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::DeleteResourceDefinitionResponsePrivate
 * \brief The DeleteResourceDefinitionResponsePrivate class provides private implementation for DeleteResourceDefinitionResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a DeleteResourceDefinitionResponsePrivate object with public implementation \a q.
 */
DeleteResourceDefinitionResponsePrivate::DeleteResourceDefinitionResponsePrivate(
    DeleteResourceDefinitionResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass DeleteResourceDefinition response element from \a xml.
 */
void DeleteResourceDefinitionResponsePrivate::parseDeleteResourceDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteResourceDefinitionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws
