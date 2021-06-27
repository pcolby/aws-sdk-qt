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
    return static_cast<const GetSubscriptionDefinitionRequest *>(GreengrassResponse::request());
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
