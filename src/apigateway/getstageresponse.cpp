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

#include "getstageresponse.h"
#include "getstageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::GetStageResponse
 *
 * \brief The GetStageResponse class encapsulates APIGateway GetStage responses.
 *
 * \ingroup APIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::getStage
 */

/*!
 * @brief  Constructs a new GetStageResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetStageResponse::GetStageResponse(
        const GetStageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new GetStageResponsePrivate(this), parent)
{
    setRequest(new GetStageRequest(request));
    setReply(reply);
}

const GetStageRequest * GetStageResponse::request() const
{
    Q_D(const GetStageResponse);
    return static_cast<const GetStageRequest *>(d->request);
}

/*!
 * @brief  Parse a APIGateway GetStage response.
 *
 * @param  response  Response to parse.
 */
void GetStageResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetStageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class GetStageResponsePrivate
 *
 * \brief Private implementation for GetStageResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetStageResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetStageResponse instance.
 */
GetStageResponsePrivate::GetStageResponsePrivate(
    GetStageResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/*!
 * @brief  Parse an APIGateway GetStageResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetStageResponsePrivate::parseGetStageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetStageResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace QtAws
