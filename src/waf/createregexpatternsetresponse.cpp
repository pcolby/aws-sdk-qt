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

#include "createregexpatternsetresponse.h"
#include "createregexpatternsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace WAF {

/**
 * @class  CreateRegexPatternSetResponse
 *
 * @brief  Handles WAF CreateRegexPatternSet responses.
 *
 * @see    WAFClient::createRegexPatternSet
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateRegexPatternSetResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFResponse(new CreateRegexPatternSetResponsePrivate(this), parent)
{
    setRequest(new CreateRegexPatternSetRequest(request));
    setReply(reply);
}

const CreateRegexPatternSetRequest * CreateRegexPatternSetResponse::request() const
{
    Q_D(const CreateRegexPatternSetResponse);
    return static_cast<const CreateRegexPatternSetRequest *>(d->request);
}

/**
 * @brief  Parse a WAF CreateRegexPatternSet response.
 *
 * @param  response  Response to parse.
 */
void CreateRegexPatternSetResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateRegexPatternSetResponsePrivate
 *
 * @brief  Private implementation for CreateRegexPatternSetResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateRegexPatternSetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateRegexPatternSetResponse instance.
 */
CreateRegexPatternSetResponsePrivate::CreateRegexPatternSetResponsePrivate(
    CreateRegexPatternSetQueueResponse * const q) : CreateRegexPatternSetPrivate(q)
{

}

/**
 * @brief  Parse an WAF CreateRegexPatternSetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateRegexPatternSetResponsePrivate::CreateRegexPatternSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateRegexPatternSetResponse"));
    /// @todo
}
