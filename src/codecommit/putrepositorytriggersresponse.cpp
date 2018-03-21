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

#include "putrepositorytriggersresponse.h"
#include "putrepositorytriggersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CodeCommit {

/**
 * @class  PutRepositoryTriggersResponse
 *
 * @brief  Handles CodeCommit PutRepositoryTriggers responses.
 *
 * @see    CodeCommitClient::putRepositoryTriggers
 */

/**
 * @brief  Constructs a new PutRepositoryTriggersResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutRepositoryTriggersResponse::PutRepositoryTriggersResponse(
        const PutRepositoryTriggersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeCommitResponse(new PutRepositoryTriggersResponsePrivate(this), parent)
{
    setRequest(new PutRepositoryTriggersRequest(request));
    setReply(reply);
}

const PutRepositoryTriggersRequest * PutRepositoryTriggersResponse::request() const
{
    Q_D(const PutRepositoryTriggersResponse);
    return static_cast<const PutRepositoryTriggersRequest *>(d->request);
}

/**
 * @brief  Parse a CodeCommit PutRepositoryTriggers response.
 *
 * @param  response  Response to parse.
 */
void PutRepositoryTriggersResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PutRepositoryTriggersResponsePrivate
 *
 * @brief  Private implementation for PutRepositoryTriggersResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutRepositoryTriggersResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutRepositoryTriggersResponse instance.
 */
PutRepositoryTriggersResponsePrivate::PutRepositoryTriggersResponsePrivate(
    PutRepositoryTriggersQueueResponse * const q) : PutRepositoryTriggersPrivate(q)
{

}

/**
 * @brief  Parse an CodeCommit PutRepositoryTriggersResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutRepositoryTriggersResponsePrivate::PutRepositoryTriggersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutRepositoryTriggersResponse"));
    /// @todo
}

} // namespace CodeCommit
} // namespace AWS
