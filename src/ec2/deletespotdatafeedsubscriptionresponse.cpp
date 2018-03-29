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

#include "deletespotdatafeedsubscriptionresponse.h"
#include "deletespotdatafeedsubscriptionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/**
 * @class  DeleteSpotDatafeedSubscriptionResponse
 *
 * @brief  Handles EC2 DeleteSpotDatafeedSubscription responses.
 *
 * @see    EC2Client::deleteSpotDatafeedSubscription
 */

/**
 * @brief  Constructs a new DeleteSpotDatafeedSubscriptionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteSpotDatafeedSubscriptionResponse::DeleteSpotDatafeedSubscriptionResponse(
        const DeleteSpotDatafeedSubscriptionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DeleteSpotDatafeedSubscriptionResponsePrivate(this), parent)
{
    setRequest(new DeleteSpotDatafeedSubscriptionRequest(request));
    setReply(reply);
}

const DeleteSpotDatafeedSubscriptionRequest * DeleteSpotDatafeedSubscriptionResponse::request() const
{
    Q_D(const DeleteSpotDatafeedSubscriptionResponse);
    return static_cast<const DeleteSpotDatafeedSubscriptionRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 DeleteSpotDatafeedSubscription response.
 *
 * @param  response  Response to parse.
 */
void DeleteSpotDatafeedSubscriptionResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteSpotDatafeedSubscriptionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteSpotDatafeedSubscriptionResponsePrivate
 *
 * @brief  Private implementation for DeleteSpotDatafeedSubscriptionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteSpotDatafeedSubscriptionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteSpotDatafeedSubscriptionResponse instance.
 */
DeleteSpotDatafeedSubscriptionResponsePrivate::DeleteSpotDatafeedSubscriptionResponsePrivate(
    DeleteSpotDatafeedSubscriptionResponse * const q) : EC2ResponsePrivate(q)
{

}

/**
 * @brief  Parse an EC2 DeleteSpotDatafeedSubscriptionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteSpotDatafeedSubscriptionResponsePrivate::parseDeleteSpotDatafeedSubscriptionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteSpotDatafeedSubscriptionResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
