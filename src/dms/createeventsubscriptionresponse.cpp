/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "createeventsubscriptionresponse.h"
#include "createeventsubscriptionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DatabaseMigrationService {

/**
 * @class  CreateEventSubscriptionResponse
 *
 * @brief  Handles DatabaseMigrationService CreateEventSubscription responses.
 *
 * @see    DatabaseMigrationServiceClient::createEventSubscription
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateEventSubscriptionResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DatabaseMigrationServiceResponse(new CreateEventSubscriptionResponsePrivate(this), parent)
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
 * @brief  Parse a DatabaseMigrationService CreateEventSubscription response.
 *
 * @param  response  Response to parse.
 */
void CreateEventSubscriptionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
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
    CreateEventSubscriptionQueueResponse * const q) : CreateEventSubscriptionPrivate(q)
{

}

/**
 * @brief  Parse an DatabaseMigrationService CreateEventSubscriptionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateEventSubscriptionResponsePrivate::CreateEventSubscriptionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateEventSubscriptionResponse"));
    /// @todo
}
