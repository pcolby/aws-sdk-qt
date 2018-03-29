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

#include "createappcookiestickinesspolicyresponse.h"
#include "createappcookiestickinesspolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticLoadBalancing {

/**
 * @class  CreateAppCookieStickinessPolicyResponse
 *
 * @brief  Handles ElasticLoadBalancing CreateAppCookieStickinessPolicy responses.
 *
 * @see    ElasticLoadBalancingClient::createAppCookieStickinessPolicy
 */

/**
 * @brief  Constructs a new CreateAppCookieStickinessPolicyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateAppCookieStickinessPolicyResponse::CreateAppCookieStickinessPolicyResponse(
        const CreateAppCookieStickinessPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticLoadBalancingResponse(new CreateAppCookieStickinessPolicyResponsePrivate(this), parent)
{
    setRequest(new CreateAppCookieStickinessPolicyRequest(request));
    setReply(reply);
}

const CreateAppCookieStickinessPolicyRequest * CreateAppCookieStickinessPolicyResponse::request() const
{
    Q_D(const CreateAppCookieStickinessPolicyResponse);
    return static_cast<const CreateAppCookieStickinessPolicyRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticLoadBalancing CreateAppCookieStickinessPolicy response.
 *
 * @param  response  Response to parse.
 */
void CreateAppCookieStickinessPolicyResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateAppCookieStickinessPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateAppCookieStickinessPolicyResponsePrivate
 *
 * @brief  Private implementation for CreateAppCookieStickinessPolicyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateAppCookieStickinessPolicyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateAppCookieStickinessPolicyResponse instance.
 */
CreateAppCookieStickinessPolicyResponsePrivate::CreateAppCookieStickinessPolicyResponsePrivate(
    CreateAppCookieStickinessPolicyResponse * const q) : ElasticLoadBalancingResponsePrivate(q)
{

}

/**
 * @brief  Parse an ElasticLoadBalancing CreateAppCookieStickinessPolicyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateAppCookieStickinessPolicyResponsePrivate::parseCreateAppCookieStickinessPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateAppCookieStickinessPolicyResponse"));
    /// @todo
}

} // namespace ElasticLoadBalancing
} // namespace QtAws
