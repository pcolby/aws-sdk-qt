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

#include "getsdkresponse.h"
#include "getsdkresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::GetSdkResponse
 *
 * \brief The GetSdkResponse class encapsulates APIGateway GetSdk responses.
 *
 * \ingroup APIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::getSdk
 */

/*!
 * @brief  Constructs a new GetSdkResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetSdkResponse::GetSdkResponse(
        const GetSdkRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new GetSdkResponsePrivate(this), parent)
{
    setRequest(new GetSdkRequest(request));
    setReply(reply);
}

const GetSdkRequest * GetSdkResponse::request() const
{
    Q_D(const GetSdkResponse);
    return static_cast<const GetSdkRequest *>(d->request);
}

/*!
 * @brief  Parse a APIGateway GetSdk response.
 *
 * @param  response  Response to parse.
 */
void GetSdkResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetSdkResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class GetSdkResponsePrivate
 *
 * \brief Private implementation for GetSdkResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetSdkResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetSdkResponse instance.
 */
GetSdkResponsePrivate::GetSdkResponsePrivate(
    GetSdkResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/*!
 * @brief  Parse an APIGateway GetSdkResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetSdkResponsePrivate::parseGetSdkResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSdkResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace QtAws
