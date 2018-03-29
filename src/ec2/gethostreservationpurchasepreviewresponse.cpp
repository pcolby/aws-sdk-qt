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

#include "gethostreservationpurchasepreviewresponse.h"
#include "gethostreservationpurchasepreviewresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/**
 * @class  GetHostReservationPurchasePreviewResponse
 *
 * @brief  Handles EC2 GetHostReservationPurchasePreview responses.
 *
 * @see    EC2Client::getHostReservationPurchasePreview
 */

/**
 * @brief  Constructs a new GetHostReservationPurchasePreviewResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetHostReservationPurchasePreviewResponse::GetHostReservationPurchasePreviewResponse(
        const GetHostReservationPurchasePreviewRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new GetHostReservationPurchasePreviewResponsePrivate(this), parent)
{
    setRequest(new GetHostReservationPurchasePreviewRequest(request));
    setReply(reply);
}

const GetHostReservationPurchasePreviewRequest * GetHostReservationPurchasePreviewResponse::request() const
{
    Q_D(const GetHostReservationPurchasePreviewResponse);
    return static_cast<const GetHostReservationPurchasePreviewRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 GetHostReservationPurchasePreview response.
 *
 * @param  response  Response to parse.
 */
void GetHostReservationPurchasePreviewResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetHostReservationPurchasePreviewResponsePrivate
 *
 * @brief  Private implementation for GetHostReservationPurchasePreviewResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetHostReservationPurchasePreviewResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetHostReservationPurchasePreviewResponse instance.
 */
GetHostReservationPurchasePreviewResponsePrivate::GetHostReservationPurchasePreviewResponsePrivate(
    GetHostReservationPurchasePreviewQueueResponse * const q) : GetHostReservationPurchasePreviewPrivate(q)
{

}

/**
 * @brief  Parse an EC2 GetHostReservationPurchasePreviewResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetHostReservationPurchasePreviewResponsePrivate::GetHostReservationPurchasePreviewResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetHostReservationPurchasePreviewResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
