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
 *  AWS Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS Greengrass ensures your devices can respond
 *  quickly to local events and operate with intermittent connectivity. AWS Greengrass minimizes the cost of transmitting
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
    Q_D(DeleteSubscriptionDefinitionResponse);
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
    /// @todo
}

} // namespace Greengrass
} // namespace QtAws
