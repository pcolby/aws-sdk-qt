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

#include "deleteconfigruleresponse.h"
#include "deleteconfigruleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ConfigService {

/**
 * @class  DeleteConfigRuleResponse
 *
 * @brief  Handles ConfigService DeleteConfigRule responses.
 *
 * @see    ConfigServiceClient::deleteConfigRule
 */

/**
 * @brief  Constructs a new DeleteConfigRuleResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteConfigRuleResponse::DeleteConfigRuleResponse(
        const DeleteConfigRuleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConfigServiceResponse(new DeleteConfigRuleResponsePrivate(this), parent)
{
    setRequest(new DeleteConfigRuleRequest(request));
    setReply(reply);
}

const DeleteConfigRuleRequest * DeleteConfigRuleResponse::request() const
{
    Q_D(const DeleteConfigRuleResponse);
    return static_cast<const DeleteConfigRuleRequest *>(d->request);
}

/**
 * @brief  Parse a ConfigService DeleteConfigRule response.
 *
 * @param  response  Response to parse.
 */
void DeleteConfigRuleResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteConfigRuleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteConfigRuleResponsePrivate
 *
 * @brief  Private implementation for DeleteConfigRuleResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteConfigRuleResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteConfigRuleResponse instance.
 */
DeleteConfigRuleResponsePrivate::DeleteConfigRuleResponsePrivate(
    DeleteConfigRuleResponse * const q) : ConfigServiceResponsePrivate(q)
{

}

/**
 * @brief  Parse an ConfigService DeleteConfigRuleResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteConfigRuleResponsePrivate::parseDeleteConfigRuleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteConfigRuleResponse"));
    /// @todo
}

} // namespace ConfigService
} // namespace QtAws
