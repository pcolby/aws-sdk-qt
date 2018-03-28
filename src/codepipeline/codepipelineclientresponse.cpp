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

#include "codepipelineclientresponse.h"
#include "codepipelineclientresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace AWS {
namespace CodePipeline {

/**
 * @class  CodePipelineClientResponse
 *
 * @brief  Handles CodePipeline CodePipelineClient responses.
 *
 * @see    CodePipelineClient::codePipelineClient
 */

/**
 * @brief  Constructs a new CodePipelineClientResponse object.
 *
 * @param  parent   This object's parent.
 */
CodePipelineClientResponse::CodePipelineClientResponse(QObject * const parent)
    : AwsAbstractResponse(new CodePipelineClientResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  CodePipelineClientResponsePrivate
 *
 * @brief  Private implementation for CodePipelineClientResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CodePipelineClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CodePipelineClientResponse instance.
 */
CodePipelineClientResponsePrivate::CodePipelineClientResponsePrivate(
    CodePipelineClientQueueResponse * const q) : CodePipelineClientPrivate(q)
{

}

} // namespace CodePipeline
} // namespace AWS
