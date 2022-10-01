// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getsubscriptiondefinitionversionresponse.h"
#include "getsubscriptiondefinitionversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::GetSubscriptionDefinitionVersionResponse
 * \brief The GetSubscriptionDefinitionVersionResponse class provides an interace for Greengrass GetSubscriptionDefinitionVersion responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::getSubscriptionDefinitionVersion
 */

/*!
 * Constructs a GetSubscriptionDefinitionVersionResponse object for \a reply to \a request, with parent \a parent.
 */
GetSubscriptionDefinitionVersionResponse::GetSubscriptionDefinitionVersionResponse(
        const GetSubscriptionDefinitionVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new GetSubscriptionDefinitionVersionResponsePrivate(this), parent)
{
    setRequest(new GetSubscriptionDefinitionVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSubscriptionDefinitionVersionRequest * GetSubscriptionDefinitionVersionResponse::request() const
{
    Q_D(const GetSubscriptionDefinitionVersionResponse);
    return static_cast<const GetSubscriptionDefinitionVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass GetSubscriptionDefinitionVersion \a response.
 */
void GetSubscriptionDefinitionVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetSubscriptionDefinitionVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::GetSubscriptionDefinitionVersionResponsePrivate
 * \brief The GetSubscriptionDefinitionVersionResponsePrivate class provides private implementation for GetSubscriptionDefinitionVersionResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a GetSubscriptionDefinitionVersionResponsePrivate object with public implementation \a q.
 */
GetSubscriptionDefinitionVersionResponsePrivate::GetSubscriptionDefinitionVersionResponsePrivate(
    GetSubscriptionDefinitionVersionResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass GetSubscriptionDefinitionVersion response element from \a xml.
 */
void GetSubscriptionDefinitionVersionResponsePrivate::parseGetSubscriptionDefinitionVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSubscriptionDefinitionVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws
