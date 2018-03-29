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

#include "deletesubscriberresponse.h"
#include "deletesubscriberresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Budgets {

/**
 * @class  DeleteSubscriberResponse
 *
 * @brief  Handles Budgets DeleteSubscriber responses.
 *
 * @see    BudgetsClient::deleteSubscriber
 */

/**
 * @brief  Constructs a new DeleteSubscriberResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteSubscriberResponse::DeleteSubscriberResponse(
        const DeleteSubscriberRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BudgetsResponse(new DeleteSubscriberResponsePrivate(this), parent)
{
    setRequest(new DeleteSubscriberRequest(request));
    setReply(reply);
}

const DeleteSubscriberRequest * DeleteSubscriberResponse::request() const
{
    Q_D(const DeleteSubscriberResponse);
    return static_cast<const DeleteSubscriberRequest *>(d->request);
}

/**
 * @brief  Parse a Budgets DeleteSubscriber response.
 *
 * @param  response  Response to parse.
 */
void DeleteSubscriberResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteSubscriberResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteSubscriberResponsePrivate
 *
 * @brief  Private implementation for DeleteSubscriberResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteSubscriberResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteSubscriberResponse instance.
 */
DeleteSubscriberResponsePrivate::DeleteSubscriberResponsePrivate(
    DeleteSubscriberResponse * const q) : BudgetsResponsePrivate(q)
{

}

/**
 * @brief  Parse an Budgets DeleteSubscriberResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteSubscriberResponsePrivate::parseDeleteSubscriberResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteSubscriberResponse"));
    /// @todo
}

} // namespace Budgets
} // namespace QtAws
