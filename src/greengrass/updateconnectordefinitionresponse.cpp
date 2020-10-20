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

#include "updateconnectordefinitionresponse.h"
#include "updateconnectordefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::UpdateConnectorDefinitionResponse
 * \brief The UpdateConnectorDefinitionResponse class provides an interace for Greengrass UpdateConnectorDefinition responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::updateConnectorDefinition
 */

/*!
 * Constructs a UpdateConnectorDefinitionResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateConnectorDefinitionResponse::UpdateConnectorDefinitionResponse(
        const UpdateConnectorDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new UpdateConnectorDefinitionResponsePrivate(this), parent)
{
    setRequest(new UpdateConnectorDefinitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateConnectorDefinitionRequest * UpdateConnectorDefinitionResponse::request() const
{
    Q_D(const UpdateConnectorDefinitionResponse);
    return static_cast<const UpdateConnectorDefinitionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass UpdateConnectorDefinition \a response.
 */
void UpdateConnectorDefinitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateConnectorDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::UpdateConnectorDefinitionResponsePrivate
 * \brief The UpdateConnectorDefinitionResponsePrivate class provides private implementation for UpdateConnectorDefinitionResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a UpdateConnectorDefinitionResponsePrivate object with public implementation \a q.
 */
UpdateConnectorDefinitionResponsePrivate::UpdateConnectorDefinitionResponsePrivate(
    UpdateConnectorDefinitionResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass UpdateConnectorDefinition response element from \a xml.
 */
void UpdateConnectorDefinitionResponsePrivate::parseUpdateConnectorDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateConnectorDefinitionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws
