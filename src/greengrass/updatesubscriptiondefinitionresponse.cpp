/*
    Copyright 2013-2019 Paul Colby

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

#include "updatesubscriptiondefinitionresponse.h"
#include "updatesubscriptiondefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::UpdateSubscriptionDefinitionResponse
 * \brief The UpdateSubscriptionDefinitionResponse class provides an interace for Greengrass UpdateSubscriptionDefinition responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::updateSubscriptionDefinition
 */

/*!
 * Constructs a UpdateSubscriptionDefinitionResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateSubscriptionDefinitionResponse::UpdateSubscriptionDefinitionResponse(
        const UpdateSubscriptionDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new UpdateSubscriptionDefinitionResponsePrivate(this), parent)
{
    setRequest(new UpdateSubscriptionDefinitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateSubscriptionDefinitionRequest * UpdateSubscriptionDefinitionResponse::request() const
{
    Q_D(const UpdateSubscriptionDefinitionResponse);
    return static_cast<const UpdateSubscriptionDefinitionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass UpdateSubscriptionDefinition \a response.
 */
void UpdateSubscriptionDefinitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateSubscriptionDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::UpdateSubscriptionDefinitionResponsePrivate
 * \brief The UpdateSubscriptionDefinitionResponsePrivate class provides private implementation for UpdateSubscriptionDefinitionResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a UpdateSubscriptionDefinitionResponsePrivate object with public implementation \a q.
 */
UpdateSubscriptionDefinitionResponsePrivate::UpdateSubscriptionDefinitionResponsePrivate(
    UpdateSubscriptionDefinitionResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass UpdateSubscriptionDefinition response element from \a xml.
 */
void UpdateSubscriptionDefinitionResponsePrivate::parseUpdateSubscriptionDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateSubscriptionDefinitionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws
