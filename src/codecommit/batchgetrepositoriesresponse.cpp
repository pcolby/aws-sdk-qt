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

#include "batchgetrepositoriesresponse.h"
#include "batchgetrepositoriesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeCommit {

/**
 * @class  BatchGetRepositoriesResponse
 *
 * @brief  Handles CodeCommit BatchGetRepositories responses.
 *
 * @see    CodeCommitClient::batchGetRepositories
 */

/**
 * @brief  Constructs a new BatchGetRepositoriesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
BatchGetRepositoriesResponse::BatchGetRepositoriesResponse(
        const BatchGetRepositoriesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeCommitResponse(new BatchGetRepositoriesResponsePrivate(this), parent)
{
    setRequest(new BatchGetRepositoriesRequest(request));
    setReply(reply);
}

const BatchGetRepositoriesRequest * BatchGetRepositoriesResponse::request() const
{
    Q_D(const BatchGetRepositoriesResponse);
    return static_cast<const BatchGetRepositoriesRequest *>(d->request);
}

/**
 * @brief  Parse a CodeCommit BatchGetRepositories response.
 *
 * @param  response  Response to parse.
 */
void BatchGetRepositoriesResponse::parseSuccess(QIODevice &response)
{
    Q_D(BatchGetRepositoriesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  BatchGetRepositoriesResponsePrivate
 *
 * @brief  Private implementation for BatchGetRepositoriesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new BatchGetRepositoriesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public BatchGetRepositoriesResponse instance.
 */
BatchGetRepositoriesResponsePrivate::BatchGetRepositoriesResponsePrivate(
    BatchGetRepositoriesResponse * const q) : CodeCommitResponsePrivate(q)
{

}

/**
 * @brief  Parse an CodeCommit BatchGetRepositoriesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void BatchGetRepositoriesResponsePrivate::parseBatchGetRepositoriesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchGetRepositoriesResponse"));
    /// @todo
}

} // namespace CodeCommit
} // namespace QtAws
