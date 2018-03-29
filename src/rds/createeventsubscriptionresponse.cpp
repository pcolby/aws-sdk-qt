/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "createeventsubscriptionresponse.h"
#include "createeventsubscriptionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RDS {

/**
 * @class  CreateEventSubscriptionResponse
 *
 * @brief  Handles RDS CreateEventSubscription responses.
 *
 * @see    RDSClient::createEventSubscription
 */

/**
 * @brief  Constructs a new CreateEventSubscriptionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateEventSubscriptionResponse::CreateEventSubscriptionResponse(
        const CreateEventSubscriptionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CreateEventSubscriptionResponse(new CreateEventSubscriptionResponsePrivate(this), parent)
{
    setRequest(new CreateEventSubscriptionRequest(request));
    setReply(reply);
}

const CreateEventSubscriptionRequest * CreateEventSubscriptionResponse::request() const
{
    Q_D(const CreateEventSubscriptionResponse);
    return static_cast<const CreateEventSubscriptionRequest *>(d->request);
}

/**
 * @brief  Parse a RDS CreateEventSubscription response.
 *
 * @param  response  Response to parse.
 */
void CreateEventSubscriptionResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateEventSubscriptionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateEventSubscriptionResponsePrivate
 *
 * @brief  Private implementation for CreateEventSubscriptionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateEventSubscriptionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateEventSubscriptionResponse instance.
 */
CreateEventSubscriptionResponsePrivate::CreateEventSubscriptionResponsePrivate(
    CreateEventSubscriptionResponse * const q) : RDSResponsePrivate(q)
{

}

/**
 * @brief  Parse an RDS CreateEventSubscriptionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateEventSubscriptionResponsePrivate::parseCreateEventSubscriptionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateEventSubscriptionResponse"));
    /// @todo
}

} // namespace RDS
} // namespace QtAws
