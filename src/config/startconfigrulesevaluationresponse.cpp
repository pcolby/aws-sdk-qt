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

#include "startconfigrulesevaluationresponse.h"
#include "startconfigrulesevaluationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ConfigService {

/**
 * @class  StartConfigRulesEvaluationResponse
 *
 * @brief  Handles ConfigService StartConfigRulesEvaluation responses.
 *
 * @see    ConfigServiceClient::startConfigRulesEvaluation
 */

/**
 * @brief  Constructs a new StartConfigRulesEvaluationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StartConfigRulesEvaluationResponse::StartConfigRulesEvaluationResponse(
        const StartConfigRulesEvaluationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : StartConfigRulesEvaluationResponse(new StartConfigRulesEvaluationResponsePrivate(this), parent)
{
    setRequest(new StartConfigRulesEvaluationRequest(request));
    setReply(reply);
}

const StartConfigRulesEvaluationRequest * StartConfigRulesEvaluationResponse::request() const
{
    Q_D(const StartConfigRulesEvaluationResponse);
    return static_cast<const StartConfigRulesEvaluationRequest *>(d->request);
}

/**
 * @brief  Parse a ConfigService StartConfigRulesEvaluation response.
 *
 * @param  response  Response to parse.
 */
void StartConfigRulesEvaluationResponse::parseSuccess(QIODevice &response)
{
    Q_D(StartConfigRulesEvaluationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  StartConfigRulesEvaluationResponsePrivate
 *
 * @brief  Private implementation for StartConfigRulesEvaluationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartConfigRulesEvaluationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public StartConfigRulesEvaluationResponse instance.
 */
StartConfigRulesEvaluationResponsePrivate::StartConfigRulesEvaluationResponsePrivate(
    StartConfigRulesEvaluationResponse * const q) : ConfigServiceResponsePrivate(q)
{

}

/**
 * @brief  Parse an ConfigService StartConfigRulesEvaluationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void StartConfigRulesEvaluationResponsePrivate::parseStartConfigRulesEvaluationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartConfigRulesEvaluationResponse"));
    /// @todo
}

} // namespace ConfigService
} // namespace QtAws
