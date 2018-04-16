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

#include "purchasescheduledinstancesresponse.h"
#include "purchasescheduledinstancesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::PurchaseScheduledInstancesResponse
 *
 * \brief The PurchaseScheduledInstancesResponse class provides an interace for EC2 PurchaseScheduledInstances responses.
 *
 * \ingroup EC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa EC2Client::purchaseScheduledInstances
 */

/*!
 * @brief  Constructs a new PurchaseScheduledInstancesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PurchaseScheduledInstancesResponse::PurchaseScheduledInstancesResponse(
        const PurchaseScheduledInstancesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new PurchaseScheduledInstancesResponsePrivate(this), parent)
{
    setRequest(new PurchaseScheduledInstancesRequest(request));
    setReply(reply);
}

const PurchaseScheduledInstancesRequest * PurchaseScheduledInstancesResponse::request() const
{
    Q_D(const PurchaseScheduledInstancesResponse);
    return static_cast<const PurchaseScheduledInstancesRequest *>(d->request);
}

/*!
 * @brief  Parse a EC2 PurchaseScheduledInstances response.
 *
 * @param  response  Response to parse.
 */
void PurchaseScheduledInstancesResponse::parseSuccess(QIODevice &response)
{
    Q_D(PurchaseScheduledInstancesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class PurchaseScheduledInstancesResponsePrivate
 *
 * \brief Private implementation for PurchaseScheduledInstancesResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new PurchaseScheduledInstancesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PurchaseScheduledInstancesResponse instance.
 */
PurchaseScheduledInstancesResponsePrivate::PurchaseScheduledInstancesResponsePrivate(
    PurchaseScheduledInstancesResponse * const q) : EC2ResponsePrivate(q)
{

}

/*!
 * @brief  Parse an EC2 PurchaseScheduledInstancesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PurchaseScheduledInstancesResponsePrivate::parsePurchaseScheduledInstancesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PurchaseScheduledInstancesResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
