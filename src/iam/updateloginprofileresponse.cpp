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

#include "updateloginprofileresponse.h"
#include "updateloginprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IAM {

/**
 * @class  UpdateLoginProfileResponse
 *
 * @brief  Handles IAM UpdateLoginProfile responses.
 *
 * @see    IAMClient::updateLoginProfile
 */

/**
 * @brief  Constructs a new UpdateLoginProfileResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateLoginProfileResponse::UpdateLoginProfileResponse(
        const UpdateLoginProfileRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : UpdateLoginProfileResponse(new UpdateLoginProfileResponsePrivate(this), parent)
{
    setRequest(new UpdateLoginProfileRequest(request));
    setReply(reply);
}

const UpdateLoginProfileRequest * UpdateLoginProfileResponse::request() const
{
    Q_D(const UpdateLoginProfileResponse);
    return static_cast<const UpdateLoginProfileRequest *>(d->request);
}

/**
 * @brief  Parse a IAM UpdateLoginProfile response.
 *
 * @param  response  Response to parse.
 */
void UpdateLoginProfileResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateLoginProfileResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateLoginProfileResponsePrivate
 *
 * @brief  Private implementation for UpdateLoginProfileResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateLoginProfileResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateLoginProfileResponse instance.
 */
UpdateLoginProfileResponsePrivate::UpdateLoginProfileResponsePrivate(
    UpdateLoginProfileResponse * const q) : IAMResponsePrivate(q)
{

}

/**
 * @brief  Parse an IAM UpdateLoginProfileResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateLoginProfileResponsePrivate::parseUpdateLoginProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateLoginProfileResponse"));
    /// @todo
}

} // namespace IAM
} // namespace QtAws
