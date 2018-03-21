/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "putconfigruleresponse.h"
#include "putconfigruleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ConfigService {

/**
 * @class  PutConfigRuleResponse
 *
 * @brief  Handles ConfigService PutConfigRule responses.
 *
 * @see    ConfigServiceClient::putConfigRule
 */

/**
 * @brief  Constructs a new PutConfigRuleResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutConfigRuleResponse::PutConfigRuleResponse(
        const PutConfigRuleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConfigServiceResponse(new PutConfigRuleResponsePrivate(this), parent)
{
    setRequest(new PutConfigRuleRequest(request));
    setReply(reply);
}

const PutConfigRuleRequest * PutConfigRuleResponse::request() const
{
    Q_D(const PutConfigRuleResponse);
    return static_cast<const PutConfigRuleRequest *>(d->request);
}

/**
 * @brief  Parse a ConfigService PutConfigRule response.
 *
 * @param  response  Response to parse.
 */
void PutConfigRuleResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PutConfigRuleResponsePrivate
 *
 * @brief  Private implementation for PutConfigRuleResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutConfigRuleResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutConfigRuleResponse instance.
 */
PutConfigRuleResponsePrivate::PutConfigRuleResponsePrivate(
    PutConfigRuleQueueResponse * const q) : PutConfigRulePrivate(q)
{

}

/**
 * @brief  Parse an ConfigService PutConfigRuleResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutConfigRuleResponsePrivate::PutConfigRuleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutConfigRuleResponse"));
    /// @todo
}

} // namespace ConfigService
} // namespace AWS
