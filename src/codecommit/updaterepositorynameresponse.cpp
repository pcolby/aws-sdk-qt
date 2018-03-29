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

#include "updaterepositorynameresponse.h"
#include "updaterepositorynameresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeCommit {

/**
 * @class  UpdateRepositoryNameResponse
 *
 * @brief  Handles CodeCommit UpdateRepositoryName responses.
 *
 * @see    CodeCommitClient::updateRepositoryName
 */

/**
 * @brief  Constructs a new UpdateRepositoryNameResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateRepositoryNameResponse::UpdateRepositoryNameResponse(
        const UpdateRepositoryNameRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : UpdateRepositoryNameResponse(new UpdateRepositoryNameResponsePrivate(this), parent)
{
    setRequest(new UpdateRepositoryNameRequest(request));
    setReply(reply);
}

const UpdateRepositoryNameRequest * UpdateRepositoryNameResponse::request() const
{
    Q_D(const UpdateRepositoryNameResponse);
    return static_cast<const UpdateRepositoryNameRequest *>(d->request);
}

/**
 * @brief  Parse a CodeCommit UpdateRepositoryName response.
 *
 * @param  response  Response to parse.
 */
void UpdateRepositoryNameResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateRepositoryNameResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateRepositoryNameResponsePrivate
 *
 * @brief  Private implementation for UpdateRepositoryNameResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateRepositoryNameResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateRepositoryNameResponse instance.
 */
UpdateRepositoryNameResponsePrivate::UpdateRepositoryNameResponsePrivate(
    UpdateRepositoryNameResponse * const q) : CodeCommitResponsePrivate(q)
{

}

/**
 * @brief  Parse an CodeCommit UpdateRepositoryNameResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateRepositoryNameResponsePrivate::parseUpdateRepositoryNameResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateRepositoryNameResponse"));
    /// @todo
}

} // namespace CodeCommit
} // namespace QtAws
