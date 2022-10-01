// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
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
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws
