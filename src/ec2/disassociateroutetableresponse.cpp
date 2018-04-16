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

#include "disassociateroutetableresponse.h"
#include "disassociateroutetableresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DisassociateRouteTableResponse
 *
 * \brief The DisassociateRouteTableResponse class provides an interace for EC2 DisassociateRouteTable responses.
 *
 * \ingroup EC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa EC2Client::disassociateRouteTable
 */

/*!
 * @brief  Constructs a new DisassociateRouteTableResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DisassociateRouteTableResponse::DisassociateRouteTableResponse(
        const DisassociateRouteTableRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DisassociateRouteTableResponsePrivate(this), parent)
{
    setRequest(new DisassociateRouteTableRequest(request));
    setReply(reply);
}

const DisassociateRouteTableRequest * DisassociateRouteTableResponse::request() const
{
    Q_D(const DisassociateRouteTableResponse);
    return static_cast<const DisassociateRouteTableRequest *>(d->request);
}

/*!
 * @brief  Parse a EC2 DisassociateRouteTable response.
 *
 * @param  response  Response to parse.
 */
void DisassociateRouteTableResponse::parseSuccess(QIODevice &response)
{
    Q_D(DisassociateRouteTableResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DisassociateRouteTableResponsePrivate
 *
 * \brief Private implementation for DisassociateRouteTableResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DisassociateRouteTableResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DisassociateRouteTableResponse instance.
 */
DisassociateRouteTableResponsePrivate::DisassociateRouteTableResponsePrivate(
    DisassociateRouteTableResponse * const q) : EC2ResponsePrivate(q)
{

}

/*!
 * @brief  Parse an EC2 DisassociateRouteTableResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DisassociateRouteTableResponsePrivate::parseDisassociateRouteTableResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateRouteTableResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
