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

#include "updaterepositorydescriptionresponse.h"
#include "updaterepositorydescriptionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeCommit {

/**
 * @class  UpdateRepositoryDescriptionResponse
 *
 * @brief  Handles CodeCommit UpdateRepositoryDescription responses.
 *
 * @see    CodeCommitClient::updateRepositoryDescription
 */

/**
 * @brief  Constructs a new UpdateRepositoryDescriptionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateRepositoryDescriptionResponse::UpdateRepositoryDescriptionResponse(
        const UpdateRepositoryDescriptionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeCommitResponse(new UpdateRepositoryDescriptionResponsePrivate(this), parent)
{
    setRequest(new UpdateRepositoryDescriptionRequest(request));
    setReply(reply);
}

const UpdateRepositoryDescriptionRequest * UpdateRepositoryDescriptionResponse::request() const
{
    Q_D(const UpdateRepositoryDescriptionResponse);
    return static_cast<const UpdateRepositoryDescriptionRequest *>(d->request);
}

/**
 * @brief  Parse a CodeCommit UpdateRepositoryDescription response.
 *
 * @param  response  Response to parse.
 */
void UpdateRepositoryDescriptionResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateRepositoryDescriptionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateRepositoryDescriptionResponsePrivate
 *
 * @brief  Private implementation for UpdateRepositoryDescriptionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateRepositoryDescriptionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateRepositoryDescriptionResponse instance.
 */
UpdateRepositoryDescriptionResponsePrivate::UpdateRepositoryDescriptionResponsePrivate(
    UpdateRepositoryDescriptionResponse * const q) : CodeCommitResponsePrivate(q)
{

}

/**
 * @brief  Parse an CodeCommit UpdateRepositoryDescriptionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateRepositoryDescriptionResponsePrivate::UpdateRepositoryDescriptionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateRepositoryDescriptionResponse"));
    /// @todo
}

} // namespace CodeCommit
} // namespace QtAws
