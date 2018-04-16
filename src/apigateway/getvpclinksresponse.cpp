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

#include "getvpclinksresponse.h"
#include "getvpclinksresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::GetVpcLinksResponse
 *
 * \brief The GetVpcLinksResponse class provides an interace for APIGateway GetVpcLinks responses.
 *
 * \ingroup APIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::getVpcLinks
 */

/*!
 * @brief  Constructs a new GetVpcLinksResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetVpcLinksResponse::GetVpcLinksResponse(
        const GetVpcLinksRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new GetVpcLinksResponsePrivate(this), parent)
{
    setRequest(new GetVpcLinksRequest(request));
    setReply(reply);
}

const GetVpcLinksRequest * GetVpcLinksResponse::request() const
{
    Q_D(const GetVpcLinksResponse);
    return static_cast<const GetVpcLinksRequest *>(d->request);
}

/*!
 * @brief  Parse a APIGateway GetVpcLinks response.
 *
 * @param  response  Response to parse.
 */
void GetVpcLinksResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetVpcLinksResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class GetVpcLinksResponsePrivate
 *
 * \brief Private implementation for GetVpcLinksResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetVpcLinksResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetVpcLinksResponse instance.
 */
GetVpcLinksResponsePrivate::GetVpcLinksResponsePrivate(
    GetVpcLinksResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/*!
 * @brief  Parse an APIGateway GetVpcLinksResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetVpcLinksResponsePrivate::parseGetVpcLinksResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetVpcLinksResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace QtAws
