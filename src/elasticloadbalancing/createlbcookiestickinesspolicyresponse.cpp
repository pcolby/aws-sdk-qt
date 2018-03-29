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

#include "createlbcookiestickinesspolicyresponse.h"
#include "createlbcookiestickinesspolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticLoadBalancing {

/**
 * @class  CreateLBCookieStickinessPolicyResponse
 *
 * @brief  Handles ElasticLoadBalancing CreateLBCookieStickinessPolicy responses.
 *
 * @see    ElasticLoadBalancingClient::createLBCookieStickinessPolicy
 */

/**
 * @brief  Constructs a new CreateLBCookieStickinessPolicyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateLBCookieStickinessPolicyResponse::CreateLBCookieStickinessPolicyResponse(
        const CreateLBCookieStickinessPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticLoadBalancingResponse(new CreateLBCookieStickinessPolicyResponsePrivate(this), parent)
{
    setRequest(new CreateLBCookieStickinessPolicyRequest(request));
    setReply(reply);
}

const CreateLBCookieStickinessPolicyRequest * CreateLBCookieStickinessPolicyResponse::request() const
{
    Q_D(const CreateLBCookieStickinessPolicyResponse);
    return static_cast<const CreateLBCookieStickinessPolicyRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticLoadBalancing CreateLBCookieStickinessPolicy response.
 *
 * @param  response  Response to parse.
 */
void CreateLBCookieStickinessPolicyResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateLBCookieStickinessPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateLBCookieStickinessPolicyResponsePrivate
 *
 * @brief  Private implementation for CreateLBCookieStickinessPolicyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateLBCookieStickinessPolicyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateLBCookieStickinessPolicyResponse instance.
 */
CreateLBCookieStickinessPolicyResponsePrivate::CreateLBCookieStickinessPolicyResponsePrivate(
    CreateLBCookieStickinessPolicyResponse * const q) : ElasticLoadBalancingResponsePrivate(q)
{

}

/**
 * @brief  Parse an ElasticLoadBalancing CreateLBCookieStickinessPolicyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateLBCookieStickinessPolicyResponsePrivate::CreateLBCookieStickinessPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateLBCookieStickinessPolicyResponse"));
    /// @todo
}

} // namespace ElasticLoadBalancing
} // namespace QtAws
