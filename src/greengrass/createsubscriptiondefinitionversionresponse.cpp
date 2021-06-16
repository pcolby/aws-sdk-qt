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

#include "createsubscriptiondefinitionversionresponse.h"
#include "createsubscriptiondefinitionversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::CreateSubscriptionDefinitionVersionResponse
 * \brief The CreateSubscriptionDefinitionVersionResponse class provides an interace for Greengrass CreateSubscriptionDefinitionVersion responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::createSubscriptionDefinitionVersion
 */

/*!
 * Constructs a CreateSubscriptionDefinitionVersionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateSubscriptionDefinitionVersionResponse::CreateSubscriptionDefinitionVersionResponse(
        const CreateSubscriptionDefinitionVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new CreateSubscriptionDefinitionVersionResponsePrivate(this), parent)
{
    setRequest(new CreateSubscriptionDefinitionVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateSubscriptionDefinitionVersionRequest * CreateSubscriptionDefinitionVersionResponse::request() const
{
    Q_D(const CreateSubscriptionDefinitionVersionResponse);
    return static_cast<const CreateSubscriptionDefinitionVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass CreateSubscriptionDefinitionVersion \a response.
 */
void CreateSubscriptionDefinitionVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateSubscriptionDefinitionVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::CreateSubscriptionDefinitionVersionResponsePrivate
 * \brief The CreateSubscriptionDefinitionVersionResponsePrivate class provides private implementation for CreateSubscriptionDefinitionVersionResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a CreateSubscriptionDefinitionVersionResponsePrivate object with public implementation \a q.
 */
CreateSubscriptionDefinitionVersionResponsePrivate::CreateSubscriptionDefinitionVersionResponsePrivate(
    CreateSubscriptionDefinitionVersionResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass CreateSubscriptionDefinitionVersion response element from \a xml.
 */
void CreateSubscriptionDefinitionVersionResponsePrivate::parseCreateSubscriptionDefinitionVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateSubscriptionDefinitionVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws
