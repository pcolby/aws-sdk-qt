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

#include "deletevpclinkresponse.h"
#include "deletevpclinkresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::DeleteVpcLinkResponse
 *
 * \brief The DeleteVpcLinkResponse class provides an interace for APIGateway DeleteVpcLink responses.
 *
 * \ingroup APIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::deleteVpcLink
 */

/*!
 * @brief  Constructs a new DeleteVpcLinkResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteVpcLinkResponse::DeleteVpcLinkResponse(
        const DeleteVpcLinkRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new DeleteVpcLinkResponsePrivate(this), parent)
{
    setRequest(new DeleteVpcLinkRequest(request));
    setReply(reply);
}

const DeleteVpcLinkRequest * DeleteVpcLinkResponse::request() const
{
    Q_D(const DeleteVpcLinkResponse);
    return static_cast<const DeleteVpcLinkRequest *>(d->request);
}

/*!
 * @brief  Parse a APIGateway DeleteVpcLink response.
 *
 * @param  response  Response to parse.
 */
void DeleteVpcLinkResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteVpcLinkResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DeleteVpcLinkResponsePrivate
 *
 * \brief Private implementation for DeleteVpcLinkResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteVpcLinkResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteVpcLinkResponse instance.
 */
DeleteVpcLinkResponsePrivate::DeleteVpcLinkResponsePrivate(
    DeleteVpcLinkResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/*!
 * @brief  Parse an APIGateway DeleteVpcLinkResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteVpcLinkResponsePrivate::parseDeleteVpcLinkResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteVpcLinkResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace QtAws
