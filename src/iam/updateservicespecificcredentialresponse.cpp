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

#include "updateservicespecificcredentialresponse.h"
#include "updateservicespecificcredentialresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IAM {

/**
 * @class  UpdateServiceSpecificCredentialResponse
 *
 * @brief  Handles IAM UpdateServiceSpecificCredential responses.
 *
 * @see    IAMClient::updateServiceSpecificCredential
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateServiceSpecificCredentialResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IAMResponse(new UpdateServiceSpecificCredentialResponsePrivate(this), parent)
{
    setRequest(new UpdateServiceSpecificCredentialRequest(request));
    setReply(reply);
}

const UpdateServiceSpecificCredentialRequest * UpdateServiceSpecificCredentialResponse::request() const
{
    Q_D(const UpdateServiceSpecificCredentialResponse);
    return static_cast<const UpdateServiceSpecificCredentialRequest *>(d->request);
}

/**
 * @brief  Parse a IAM UpdateServiceSpecificCredential response.
 *
 * @param  response  Response to parse.
 */
void UpdateServiceSpecificCredentialResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateServiceSpecificCredentialResponsePrivate
 *
 * @brief  Private implementation for UpdateServiceSpecificCredentialResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateServiceSpecificCredentialResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateServiceSpecificCredentialResponse instance.
 */
UpdateServiceSpecificCredentialResponsePrivate::UpdateServiceSpecificCredentialResponsePrivate(
    UpdateServiceSpecificCredentialQueueResponse * const q) : UpdateServiceSpecificCredentialPrivate(q)
{

}

/**
 * @brief  Parse an IAM UpdateServiceSpecificCredentialResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateServiceSpecificCredentialResponsePrivate::UpdateServiceSpecificCredentialResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateServiceSpecificCredentialResponse"));
    /// @todo
}

} // namespace IAM
} // namespace AWS
