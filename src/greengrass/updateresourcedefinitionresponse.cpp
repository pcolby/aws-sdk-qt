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

#include "updateresourcedefinitionresponse.h"
#include "updateresourcedefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::UpdateResourceDefinitionResponse
 * \brief The UpdateResourceDefinitionResponse class provides an interace for Greengrass UpdateResourceDefinition responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::updateResourceDefinition
 */

/*!
 * Constructs a UpdateResourceDefinitionResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateResourceDefinitionResponse::UpdateResourceDefinitionResponse(
        const UpdateResourceDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new UpdateResourceDefinitionResponsePrivate(this), parent)
{
    setRequest(new UpdateResourceDefinitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateResourceDefinitionRequest * UpdateResourceDefinitionResponse::request() const
{
    Q_D(const UpdateResourceDefinitionResponse);
    return static_cast<const UpdateResourceDefinitionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass UpdateResourceDefinition \a response.
 */
void UpdateResourceDefinitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateResourceDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::UpdateResourceDefinitionResponsePrivate
 * \brief The UpdateResourceDefinitionResponsePrivate class provides private implementation for UpdateResourceDefinitionResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a UpdateResourceDefinitionResponsePrivate object with public implementation \a q.
 */
UpdateResourceDefinitionResponsePrivate::UpdateResourceDefinitionResponsePrivate(
    UpdateResourceDefinitionResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass UpdateResourceDefinition response element from \a xml.
 */
void UpdateResourceDefinitionResponsePrivate::parseUpdateResourceDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateResourceDefinitionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws
