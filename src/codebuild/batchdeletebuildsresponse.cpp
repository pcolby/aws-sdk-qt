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

#include "batchdeletebuildsresponse.h"
#include "batchdeletebuildsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeBuild {

/**
 * @class  BatchDeleteBuildsResponse
 *
 * @brief  Handles CodeBuild BatchDeleteBuilds responses.
 *
 * @see    CodeBuildClient::batchDeleteBuilds
 */

/**
 * @brief  Constructs a new BatchDeleteBuildsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
BatchDeleteBuildsResponse::BatchDeleteBuildsResponse(
        const BatchDeleteBuildsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BatchDeleteBuildsResponse(new BatchDeleteBuildsResponsePrivate(this), parent)
{
    setRequest(new BatchDeleteBuildsRequest(request));
    setReply(reply);
}

const BatchDeleteBuildsRequest * BatchDeleteBuildsResponse::request() const
{
    Q_D(const BatchDeleteBuildsResponse);
    return static_cast<const BatchDeleteBuildsRequest *>(d->request);
}

/**
 * @brief  Parse a CodeBuild BatchDeleteBuilds response.
 *
 * @param  response  Response to parse.
 */
void BatchDeleteBuildsResponse::parseSuccess(QIODevice &response)
{
    Q_D(BatchDeleteBuildsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  BatchDeleteBuildsResponsePrivate
 *
 * @brief  Private implementation for BatchDeleteBuildsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new BatchDeleteBuildsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public BatchDeleteBuildsResponse instance.
 */
BatchDeleteBuildsResponsePrivate::BatchDeleteBuildsResponsePrivate(
    BatchDeleteBuildsResponse * const q) : CodeBuildResponsePrivate(q)
{

}

/**
 * @brief  Parse an CodeBuild BatchDeleteBuildsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void BatchDeleteBuildsResponsePrivate::parseBatchDeleteBuildsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchDeleteBuildsResponse"));
    /// @todo
}

} // namespace CodeBuild
} // namespace QtAws
