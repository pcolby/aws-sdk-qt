// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
