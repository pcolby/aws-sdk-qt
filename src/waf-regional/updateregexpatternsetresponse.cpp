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

#include "updateregexpatternsetresponse.h"
#include "updateregexpatternsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace WAFRegional {

/**
 * @class  UpdateRegexPatternSetResponse
 *
 * @brief  Handles WAFRegional UpdateRegexPatternSet responses.
 *
 * @see    WAFRegionalClient::updateRegexPatternSet
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateRegexPatternSetResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFRegionalResponse(new UpdateRegexPatternSetResponsePrivate(this), parent)
{
    setRequest(new UpdateRegexPatternSetRequest(request));
    setReply(reply);
}

const UpdateRegexPatternSetRequest * UpdateRegexPatternSetResponse::request() const
{
    Q_D(const UpdateRegexPatternSetResponse);
    return static_cast<const UpdateRegexPatternSetRequest *>(d->request);
}

/**
 * @brief  Parse a WAFRegional UpdateRegexPatternSet response.
 *
 * @param  response  Response to parse.
 */
void UpdateRegexPatternSetResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateRegexPatternSetResponsePrivate
 *
 * @brief  Private implementation for UpdateRegexPatternSetResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateRegexPatternSetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateRegexPatternSetResponse instance.
 */
UpdateRegexPatternSetResponsePrivate::UpdateRegexPatternSetResponsePrivate(
    UpdateRegexPatternSetQueueResponse * const q) : UpdateRegexPatternSetPrivate(q)
{

}

/**
 * @brief  Parse an WAFRegional UpdateRegexPatternSetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateRegexPatternSetResponsePrivate::UpdateRegexPatternSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateRegexPatternSetResponse"));
    /// @todo
}

} // namespace WAFRegional
} // namespace AWS
