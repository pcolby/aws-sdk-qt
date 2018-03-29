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

#include "updatenotificationresponse.h"
#include "updatenotificationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Budgets {

/**
 * @class  UpdateNotificationResponse
 *
 * @brief  Handles Budgets UpdateNotification responses.
 *
 * @see    BudgetsClient::updateNotification
 */

/**
 * @brief  Constructs a new UpdateNotificationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateNotificationResponse::UpdateNotificationResponse(
        const UpdateNotificationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : UpdateNotificationResponse(new UpdateNotificationResponsePrivate(this), parent)
{
    setRequest(new UpdateNotificationRequest(request));
    setReply(reply);
}

const UpdateNotificationRequest * UpdateNotificationResponse::request() const
{
    Q_D(const UpdateNotificationResponse);
    return static_cast<const UpdateNotificationRequest *>(d->request);
}

/**
 * @brief  Parse a Budgets UpdateNotification response.
 *
 * @param  response  Response to parse.
 */
void UpdateNotificationResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateNotificationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateNotificationResponsePrivate
 *
 * @brief  Private implementation for UpdateNotificationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateNotificationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateNotificationResponse instance.
 */
UpdateNotificationResponsePrivate::UpdateNotificationResponsePrivate(
    UpdateNotificationResponse * const q) : BudgetsResponsePrivate(q)
{

}

/**
 * @brief  Parse an Budgets UpdateNotificationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateNotificationResponsePrivate::parseUpdateNotificationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateNotificationResponse"));
    /// @todo
}

} // namespace Budgets
} // namespace QtAws
