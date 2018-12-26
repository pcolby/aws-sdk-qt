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

#include "deletefunctiondefinitionresponse.h"
#include "deletefunctiondefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::DeleteFunctionDefinitionResponse
 * \brief The DeleteFunctionDefinitionResponse class provides an interace for Greengrass DeleteFunctionDefinition responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::deleteFunctionDefinition
 */

/*!
 * Constructs a DeleteFunctionDefinitionResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteFunctionDefinitionResponse::DeleteFunctionDefinitionResponse(
        const DeleteFunctionDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new DeleteFunctionDefinitionResponsePrivate(this), parent)
{
    setRequest(new DeleteFunctionDefinitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteFunctionDefinitionRequest * DeleteFunctionDefinitionResponse::request() const
{
    Q_D(const DeleteFunctionDefinitionResponse);
    return static_cast<const DeleteFunctionDefinitionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass DeleteFunctionDefinition \a response.
 */
void DeleteFunctionDefinitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteFunctionDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::DeleteFunctionDefinitionResponsePrivate
 * \brief The DeleteFunctionDefinitionResponsePrivate class provides private implementation for DeleteFunctionDefinitionResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a DeleteFunctionDefinitionResponsePrivate object with public implementation \a q.
 */
DeleteFunctionDefinitionResponsePrivate::DeleteFunctionDefinitionResponsePrivate(
    DeleteFunctionDefinitionResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass DeleteFunctionDefinition response element from \a xml.
 */
void DeleteFunctionDefinitionResponsePrivate::parseDeleteFunctionDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteFunctionDefinitionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws
