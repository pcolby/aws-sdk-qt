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

#include "batchgetbuildsresponse.h"
#include "batchgetbuildsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeBuild {

/**
 * @class  BatchGetBuildsResponse
 *
 * @brief  Handles CodeBuild BatchGetBuilds responses.
 *
 * @see    CodeBuildClient::batchGetBuilds
 */

/**
 * @brief  Constructs a new BatchGetBuildsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
BatchGetBuildsResponse::BatchGetBuildsResponse(
        const BatchGetBuildsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BatchGetBuildsResponse(new BatchGetBuildsResponsePrivate(this), parent)
{
    setRequest(new BatchGetBuildsRequest(request));
    setReply(reply);
}

const BatchGetBuildsRequest * BatchGetBuildsResponse::request() const
{
    Q_D(const BatchGetBuildsResponse);
    return static_cast<const BatchGetBuildsRequest *>(d->request);
}

/**
 * @brief  Parse a CodeBuild BatchGetBuilds response.
 *
 * @param  response  Response to parse.
 */
void BatchGetBuildsResponse::parseSuccess(QIODevice &response)
{
    Q_D(BatchGetBuildsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  BatchGetBuildsResponsePrivate
 *
 * @brief  Private implementation for BatchGetBuildsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new BatchGetBuildsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public BatchGetBuildsResponse instance.
 */
BatchGetBuildsResponsePrivate::BatchGetBuildsResponsePrivate(
    BatchGetBuildsResponse * const q) : CodeBuildResponsePrivate(q)
{

}

/**
 * @brief  Parse an CodeBuild BatchGetBuildsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void BatchGetBuildsResponsePrivate::parseBatchGetBuildsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchGetBuildsResponse"));
    /// @todo
}

} // namespace CodeBuild
} // namespace QtAws
