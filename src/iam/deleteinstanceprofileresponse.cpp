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

#include "deleteinstanceprofileresponse.h"
#include "deleteinstanceprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IAM {

/**
 * @class  DeleteInstanceProfileResponse
 *
 * @brief  Handles IAM DeleteInstanceProfile responses.
 *
 * @see    IAMClient::deleteInstanceProfile
 */

/**
 * @brief  Constructs a new DeleteInstanceProfileResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteInstanceProfileResponse::DeleteInstanceProfileResponse(
        const DeleteInstanceProfileRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IAMResponse(new DeleteInstanceProfileResponsePrivate(this), parent)
{
    setRequest(new DeleteInstanceProfileRequest(request));
    setReply(reply);
}

const DeleteInstanceProfileRequest * DeleteInstanceProfileResponse::request() const
{
    Q_D(const DeleteInstanceProfileResponse);
    return static_cast<const DeleteInstanceProfileRequest *>(d->request);
}

/**
 * @brief  Parse a IAM DeleteInstanceProfile response.
 *
 * @param  response  Response to parse.
 */
void DeleteInstanceProfileResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteInstanceProfileResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteInstanceProfileResponsePrivate
 *
 * @brief  Private implementation for DeleteInstanceProfileResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteInstanceProfileResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteInstanceProfileResponse instance.
 */
DeleteInstanceProfileResponsePrivate::DeleteInstanceProfileResponsePrivate(
    DeleteInstanceProfileResponse * const q) : IAMResponsePrivate(q)
{

}

/**
 * @brief  Parse an IAM DeleteInstanceProfileResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteInstanceProfileResponsePrivate::parseDeleteInstanceProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteInstanceProfileResponse"));
    /// @todo
}

} // namespace IAM
} // namespace QtAws
