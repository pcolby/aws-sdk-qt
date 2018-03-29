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

#include "createnotificationresponse.h"
#include "createnotificationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Budgets {

/**
 * @class  CreateNotificationResponse
 *
 * @brief  Handles Budgets CreateNotification responses.
 *
 * @see    BudgetsClient::createNotification
 */

/**
 * @brief  Constructs a new CreateNotificationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateNotificationResponse::CreateNotificationResponse(
        const CreateNotificationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BudgetsResponse(new CreateNotificationResponsePrivate(this), parent)
{
    setRequest(new CreateNotificationRequest(request));
    setReply(reply);
}

const CreateNotificationRequest * CreateNotificationResponse::request() const
{
    Q_D(const CreateNotificationResponse);
    return static_cast<const CreateNotificationRequest *>(d->request);
}

/**
 * @brief  Parse a Budgets CreateNotification response.
 *
 * @param  response  Response to parse.
 */
void CreateNotificationResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateNotificationResponsePrivate
 *
 * @brief  Private implementation for CreateNotificationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateNotificationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateNotificationResponse instance.
 */
CreateNotificationResponsePrivate::CreateNotificationResponsePrivate(
    CreateNotificationResponse * const q) : BudgetsResponsePrivate(q)
{

}

/**
 * @brief  Parse an Budgets CreateNotificationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateNotificationResponsePrivate::CreateNotificationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateNotificationResponse"));
    /// @todo
}

} // namespace Budgets
} // namespace QtAws
