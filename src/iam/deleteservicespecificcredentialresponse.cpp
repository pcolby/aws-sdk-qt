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

#include "deleteservicespecificcredentialresponse.h"
#include "deleteservicespecificcredentialresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IAM {

/**
 * @class  DeleteServiceSpecificCredentialResponse
 *
 * @brief  Handles IAM DeleteServiceSpecificCredential responses.
 *
 * @see    IAMClient::deleteServiceSpecificCredential
 */

/**
 * @brief  Constructs a new DeleteServiceSpecificCredentialResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteServiceSpecificCredentialResponse::DeleteServiceSpecificCredentialResponse(
        const DeleteServiceSpecificCredentialRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IAMResponse(new DeleteServiceSpecificCredentialResponsePrivate(this), parent)
{
    setRequest(new DeleteServiceSpecificCredentialRequest(request));
    setReply(reply);
}

const DeleteServiceSpecificCredentialRequest * DeleteServiceSpecificCredentialResponse::request() const
{
    Q_D(const DeleteServiceSpecificCredentialResponse);
    return static_cast<const DeleteServiceSpecificCredentialRequest *>(d->request);
}

/**
 * @brief  Parse a IAM DeleteServiceSpecificCredential response.
 *
 * @param  response  Response to parse.
 */
void DeleteServiceSpecificCredentialResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteServiceSpecificCredentialResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteServiceSpecificCredentialResponsePrivate
 *
 * @brief  Private implementation for DeleteServiceSpecificCredentialResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteServiceSpecificCredentialResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteServiceSpecificCredentialResponse instance.
 */
DeleteServiceSpecificCredentialResponsePrivate::DeleteServiceSpecificCredentialResponsePrivate(
    DeleteServiceSpecificCredentialResponse * const q) : IAMResponsePrivate(q)
{

}

/**
 * @brief  Parse an IAM DeleteServiceSpecificCredentialResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteServiceSpecificCredentialResponsePrivate::parseDeleteServiceSpecificCredentialResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteServiceSpecificCredentialResponse"));
    /// @todo
}

} // namespace IAM
} // namespace QtAws
