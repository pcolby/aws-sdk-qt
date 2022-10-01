// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getsubscriptiondefinitionresponse.h"
#include "getsubscriptiondefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::GetSubscriptionDefinitionResponse
 * \brief The GetSubscriptionDefinitionResponse class provides an interace for Greengrass GetSubscriptionDefinition responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::getSubscriptionDefinition
 */

/*!
 * Constructs a GetSubscriptionDefinitionResponse object for \a reply to \a request, with parent \a parent.
 */
GetSubscriptionDefinitionResponse::GetSubscriptionDefinitionResponse(
        const GetSubscriptionDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new GetSubscriptionDefinitionResponsePrivate(this), parent)
{
    setRequest(new GetSubscriptionDefinitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSubscriptionDefinitionRequest * GetSubscriptionDefinitionResponse::request() const
{
    Q_D(const GetSubscriptionDefinitionResponse);
    return static_cast<const GetSubscriptionDefinitionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass GetSubscriptionDefinition \a response.
 */
void GetSubscriptionDefinitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetSubscriptionDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::GetSubscriptionDefinitionResponsePrivate
 * \brief The GetSubscriptionDefinitionResponsePrivate class provides private implementation for GetSubscriptionDefinitionResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a GetSubscriptionDefinitionResponsePrivate object with public implementation \a q.
 */
GetSubscriptionDefinitionResponsePrivate::GetSubscriptionDefinitionResponsePrivate(
    GetSubscriptionDefinitionResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass GetSubscriptionDefinition response element from \a xml.
 */
void GetSubscriptionDefinitionResponsePrivate::parseGetSubscriptionDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSubscriptionDefinitionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws
