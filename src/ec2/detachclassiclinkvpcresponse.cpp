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

#include "detachclassiclinkvpcresponse.h"
#include "detachclassiclinkvpcresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DetachClassicLinkVpcResponse
 *
 * \brief The DetachClassicLinkVpcResponse class provides an interace for EC2 DetachClassicLinkVpc responses.
 *
 * \ingroup EC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa EC2Client::detachClassicLinkVpc
 */

/*!
 * @brief  Constructs a new DetachClassicLinkVpcResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DetachClassicLinkVpcResponse::DetachClassicLinkVpcResponse(
        const DetachClassicLinkVpcRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DetachClassicLinkVpcResponsePrivate(this), parent)
{
    setRequest(new DetachClassicLinkVpcRequest(request));
    setReply(reply);
}

const DetachClassicLinkVpcRequest * DetachClassicLinkVpcResponse::request() const
{
    Q_D(const DetachClassicLinkVpcResponse);
    return static_cast<const DetachClassicLinkVpcRequest *>(d->request);
}

/*!
 * @brief  Parse a EC2 DetachClassicLinkVpc response.
 *
 * @param  response  Response to parse.
 */
void DetachClassicLinkVpcResponse::parseSuccess(QIODevice &response)
{
    Q_D(DetachClassicLinkVpcResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DetachClassicLinkVpcResponsePrivate
 *
 * \brief Private implementation for DetachClassicLinkVpcResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DetachClassicLinkVpcResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DetachClassicLinkVpcResponse instance.
 */
DetachClassicLinkVpcResponsePrivate::DetachClassicLinkVpcResponsePrivate(
    DetachClassicLinkVpcResponse * const q) : EC2ResponsePrivate(q)
{

}

/*!
 * @brief  Parse an EC2 DetachClassicLinkVpcResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DetachClassicLinkVpcResponsePrivate::parseDetachClassicLinkVpcResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DetachClassicLinkVpcResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
