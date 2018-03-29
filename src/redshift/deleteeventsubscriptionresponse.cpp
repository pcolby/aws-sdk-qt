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

#include "deleteeventsubscriptionresponse.h"
#include "deleteeventsubscriptionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Redshift {

/**
 * @class  DeleteEventSubscriptionResponse
 *
 * @brief  Handles Redshift DeleteEventSubscription responses.
 *
 * @see    RedshiftClient::deleteEventSubscription
 */

/**
 * @brief  Constructs a new DeleteEventSubscriptionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteEventSubscriptionResponse::DeleteEventSubscriptionResponse(
        const DeleteEventSubscriptionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RedshiftResponse(new DeleteEventSubscriptionResponsePrivate(this), parent)
{
    setRequest(new DeleteEventSubscriptionRequest(request));
    setReply(reply);
}

const DeleteEventSubscriptionRequest * DeleteEventSubscriptionResponse::request() const
{
    Q_D(const DeleteEventSubscriptionResponse);
    return static_cast<const DeleteEventSubscriptionRequest *>(d->request);
}

/**
 * @brief  Parse a Redshift DeleteEventSubscription response.
 *
 * @param  response  Response to parse.
 */
void DeleteEventSubscriptionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteEventSubscriptionResponsePrivate
 *
 * @brief  Private implementation for DeleteEventSubscriptionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteEventSubscriptionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteEventSubscriptionResponse instance.
 */
DeleteEventSubscriptionResponsePrivate::DeleteEventSubscriptionResponsePrivate(
    DeleteEventSubscriptionResponse * const q) : RedshiftResponsePrivate(q)
{

}

/**
 * @brief  Parse an Redshift DeleteEventSubscriptionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteEventSubscriptionResponsePrivate::DeleteEventSubscriptionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteEventSubscriptionResponse"));
    /// @todo
}

} // namespace Redshift
} // namespace QtAws
