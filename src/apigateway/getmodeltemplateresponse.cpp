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

#include "getmodeltemplateresponse.h"
#include "getmodeltemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/*!
 * \class QtAws::APIGateway::GetModelTemplateResponse
 *
 * \brief The GetModelTemplateResponse class encapsulates APIGateway GetModelTemplate responses.
 *
 * \ingroup APIGateway
 *
 *  <fullname>Amazon API Gateway</fullname>
 * 
 *  Amazon API Gateway helps developers deliver robust, secure, and scalable mobile and web application back ends. API
 *  Gateway allows developers to securely connect mobile and web applications to APIs that run on AWS Lambda, Amazon EC2, or
 *  other publicly addressable web services that are hosted outside of
 *
 * \sa APIGatewayClient::getModelTemplate
 */

/*!
 * @brief  Constructs a new GetModelTemplateResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetModelTemplateResponse::GetModelTemplateResponse(
        const GetModelTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new GetModelTemplateResponsePrivate(this), parent)
{
    setRequest(new GetModelTemplateRequest(request));
    setReply(reply);
}

const GetModelTemplateRequest * GetModelTemplateResponse::request() const
{
    Q_D(const GetModelTemplateResponse);
    return static_cast<const GetModelTemplateRequest *>(d->request);
}

/*!
 * @brief  Parse a APIGateway GetModelTemplate response.
 *
 * @param  response  Response to parse.
 */
void GetModelTemplateResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetModelTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class GetModelTemplateResponsePrivate
 *
 * \brief Private implementation for GetModelTemplateResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetModelTemplateResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetModelTemplateResponse instance.
 */
GetModelTemplateResponsePrivate::GetModelTemplateResponsePrivate(
    GetModelTemplateResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/*!
 * @brief  Parse an APIGateway GetModelTemplateResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetModelTemplateResponsePrivate::parseGetModelTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetModelTemplateResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace QtAws
