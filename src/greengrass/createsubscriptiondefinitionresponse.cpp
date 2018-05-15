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

#include "createsubscriptiondefinitionresponse.h"
#include "createsubscriptiondefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::CreateSubscriptionDefinitionResponse
 * \brief The CreateSubscriptionDefinitionResponse class provides an interace for Greengrass CreateSubscriptionDefinition responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS Greengrass ensures your devices can respond
 *  quickly to local events and operate with intermittent connectivity. AWS Greengrass minimizes the cost of transmitting
 *
 * \sa GreengrassClient::createSubscriptionDefinition
 */

/*!
 * Constructs a CreateSubscriptionDefinitionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateSubscriptionDefinitionResponse::CreateSubscriptionDefinitionResponse(
        const CreateSubscriptionDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new CreateSubscriptionDefinitionResponsePrivate(this), parent)
{
    setRequest(new CreateSubscriptionDefinitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateSubscriptionDefinitionRequest * CreateSubscriptionDefinitionResponse::request() const
{
    Q_D(const CreateSubscriptionDefinitionResponse);
    return static_cast<const CreateSubscriptionDefinitionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass CreateSubscriptionDefinition \a response.
 */
void CreateSubscriptionDefinitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateSubscriptionDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::CreateSubscriptionDefinitionResponsePrivate
 * \brief The CreateSubscriptionDefinitionResponsePrivate class provides private implementation for CreateSubscriptionDefinitionResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a CreateSubscriptionDefinitionResponsePrivate object with public implementation \a q.
 */
CreateSubscriptionDefinitionResponsePrivate::CreateSubscriptionDefinitionResponsePrivate(
    CreateSubscriptionDefinitionResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass CreateSubscriptionDefinition response element from \a xml.
 */
void CreateSubscriptionDefinitionResponsePrivate::parseCreateSubscriptionDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateSubscriptionDefinitionResponse"));
    /// @todo
}

} // namespace Greengrass
} // namespace QtAws
