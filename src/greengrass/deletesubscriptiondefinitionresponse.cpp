// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletesubscriptiondefinitionresponse.h"
#include "deletesubscriptiondefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::DeleteSubscriptionDefinitionResponse
 * \brief The DeleteSubscriptionDefinitionResponse class provides an interace for Greengrass DeleteSubscriptionDefinition responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::deleteSubscriptionDefinition
 */

/*!
 * Constructs a DeleteSubscriptionDefinitionResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteSubscriptionDefinitionResponse::DeleteSubscriptionDefinitionResponse(
        const DeleteSubscriptionDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new DeleteSubscriptionDefinitionResponsePrivate(this), parent)
{
    setRequest(new DeleteSubscriptionDefinitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteSubscriptionDefinitionRequest * DeleteSubscriptionDefinitionResponse::request() const
{
    Q_D(const DeleteSubscriptionDefinitionResponse);
    return static_cast<const DeleteSubscriptionDefinitionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass DeleteSubscriptionDefinition \a response.
 */
void DeleteSubscriptionDefinitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteSubscriptionDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::DeleteSubscriptionDefinitionResponsePrivate
 * \brief The DeleteSubscriptionDefinitionResponsePrivate class provides private implementation for DeleteSubscriptionDefinitionResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a DeleteSubscriptionDefinitionResponsePrivate object with public implementation \a q.
 */
DeleteSubscriptionDefinitionResponsePrivate::DeleteSubscriptionDefinitionResponsePrivate(
    DeleteSubscriptionDefinitionResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass DeleteSubscriptionDefinition response element from \a xml.
 */
void DeleteSubscriptionDefinitionResponsePrivate::parseDeleteSubscriptionDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteSubscriptionDefinitionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws
