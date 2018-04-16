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

#include "getresourcesresponse.h"
#include "getresourcesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::GetResourcesResponse
 *
 * \brief The GetResourcesResponse class encapsulates APIGateway GetResources responses.
 *
 * \ingroup APIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::getResources
 */

/*!
 * @brief  Constructs a new GetResourcesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetResourcesResponse::GetResourcesResponse(
        const GetResourcesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new GetResourcesResponsePrivate(this), parent)
{
    setRequest(new GetResourcesRequest(request));
    setReply(reply);
}

const GetResourcesRequest * GetResourcesResponse::request() const
{
    Q_D(const GetResourcesResponse);
    return static_cast<const GetResourcesRequest *>(d->request);
}

/*!
 * @brief  Parse a APIGateway GetResources response.
 *
 * @param  response  Response to parse.
 */
void GetResourcesResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetResourcesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class GetResourcesResponsePrivate
 *
 * \brief Private implementation for GetResourcesResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetResourcesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetResourcesResponse instance.
 */
GetResourcesResponsePrivate::GetResourcesResponsePrivate(
    GetResourcesResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/*!
 * @brief  Parse an APIGateway GetResourcesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetResourcesResponsePrivate::parseGetResourcesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetResourcesResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace QtAws
