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

#include "deletenotificationresponse.h"
#include "deletenotificationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Budgets {

/**
 * @class  DeleteNotificationResponse
 *
 * @brief  Handles Budgets DeleteNotification responses.
 *
 * @see    BudgetsClient::deleteNotification
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteNotificationResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BudgetsResponse(new DeleteNotificationResponsePrivate(this), parent)
{
    setRequest(new DeleteNotificationRequest(request));
    setReply(reply);
}

const DeleteNotificationRequest * DeleteNotificationResponse::request() const
{
    Q_D(const DeleteNotificationResponse);
    return static_cast<const DeleteNotificationRequest *>(d->request);
}

/**
 * @brief  Parse a Budgets DeleteNotification response.
 *
 * @param  response  Response to parse.
 */
void DeleteNotificationResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteNotificationResponsePrivate
 *
 * @brief  Private implementation for DeleteNotificationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteNotificationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteNotificationResponse instance.
 */
DeleteNotificationResponsePrivate::DeleteNotificationResponsePrivate(
    DeleteNotificationQueueResponse * const q) : DeleteNotificationPrivate(q)
{

}

/**
 * @brief  Parse an Budgets DeleteNotificationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteNotificationResponsePrivate::DeleteNotificationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteNotificationResponse"));
    /// @todo
}
