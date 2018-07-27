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

#include "updatecoredefinitionresponse.h"
#include "updatecoredefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::UpdateCoreDefinitionResponse
 * \brief The UpdateCoreDefinitionResponse class provides an interace for Greengrass UpdateCoreDefinition responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS Greengrass ensures your devices can respond
 *  quickly to local events and operate with intermittent connectivity. AWS Greengrass minimizes the cost of transmitting
 *
 * \sa GreengrassClient::updateCoreDefinition
 */

/*!
 * Constructs a UpdateCoreDefinitionResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateCoreDefinitionResponse::UpdateCoreDefinitionResponse(
        const UpdateCoreDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new UpdateCoreDefinitionResponsePrivate(this), parent)
{
    setRequest(new UpdateCoreDefinitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateCoreDefinitionRequest * UpdateCoreDefinitionResponse::request() const
{
    Q_D(const UpdateCoreDefinitionResponse);
    return static_cast<const UpdateCoreDefinitionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass UpdateCoreDefinition \a response.
 */
void UpdateCoreDefinitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateCoreDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::UpdateCoreDefinitionResponsePrivate
 * \brief The UpdateCoreDefinitionResponsePrivate class provides private implementation for UpdateCoreDefinitionResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a UpdateCoreDefinitionResponsePrivate object with public implementation \a q.
 */
UpdateCoreDefinitionResponsePrivate::UpdateCoreDefinitionResponsePrivate(
    UpdateCoreDefinitionResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass UpdateCoreDefinition response element from \a xml.
 */
void UpdateCoreDefinitionResponsePrivate::parseUpdateCoreDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateCoreDefinitionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws
