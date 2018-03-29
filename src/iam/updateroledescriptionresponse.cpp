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

#include "updateroledescriptionresponse.h"
#include "updateroledescriptionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IAM {

/**
 * @class  UpdateRoleDescriptionResponse
 *
 * @brief  Handles IAM UpdateRoleDescription responses.
 *
 * @see    IAMClient::updateRoleDescription
 */

/**
 * @brief  Constructs a new UpdateRoleDescriptionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateRoleDescriptionResponse::UpdateRoleDescriptionResponse(
        const UpdateRoleDescriptionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IAMResponse(new UpdateRoleDescriptionResponsePrivate(this), parent)
{
    setRequest(new UpdateRoleDescriptionRequest(request));
    setReply(reply);
}

const UpdateRoleDescriptionRequest * UpdateRoleDescriptionResponse::request() const
{
    Q_D(const UpdateRoleDescriptionResponse);
    return static_cast<const UpdateRoleDescriptionRequest *>(d->request);
}

/**
 * @brief  Parse a IAM UpdateRoleDescription response.
 *
 * @param  response  Response to parse.
 */
void UpdateRoleDescriptionResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateRoleDescriptionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateRoleDescriptionResponsePrivate
 *
 * @brief  Private implementation for UpdateRoleDescriptionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateRoleDescriptionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateRoleDescriptionResponse instance.
 */
UpdateRoleDescriptionResponsePrivate::UpdateRoleDescriptionResponsePrivate(
    UpdateRoleDescriptionResponse * const q) : IAMResponsePrivate(q)
{

}

/**
 * @brief  Parse an IAM UpdateRoleDescriptionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateRoleDescriptionResponsePrivate::UpdateRoleDescriptionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateRoleDescriptionResponse"));
    /// @todo
}

} // namespace IAM
} // namespace QtAws
