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

#include "deletecontainerpolicyresponse.h"
#include "deletecontainerpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaStore {

/**
 * @class  DeleteContainerPolicyResponse
 *
 * @brief  Handles MediaStore DeleteContainerPolicy responses.
 *
 * @see    MediaStoreClient::deleteContainerPolicy
 */

/**
 * @brief  Constructs a new DeleteContainerPolicyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteContainerPolicyResponse::DeleteContainerPolicyResponse(
        const DeleteContainerPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeleteContainerPolicyResponse(new DeleteContainerPolicyResponsePrivate(this), parent)
{
    setRequest(new DeleteContainerPolicyRequest(request));
    setReply(reply);
}

const DeleteContainerPolicyRequest * DeleteContainerPolicyResponse::request() const
{
    Q_D(const DeleteContainerPolicyResponse);
    return static_cast<const DeleteContainerPolicyRequest *>(d->request);
}

/**
 * @brief  Parse a MediaStore DeleteContainerPolicy response.
 *
 * @param  response  Response to parse.
 */
void DeleteContainerPolicyResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteContainerPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteContainerPolicyResponsePrivate
 *
 * @brief  Private implementation for DeleteContainerPolicyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteContainerPolicyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteContainerPolicyResponse instance.
 */
DeleteContainerPolicyResponsePrivate::DeleteContainerPolicyResponsePrivate(
    DeleteContainerPolicyResponse * const q) : MediaStoreResponsePrivate(q)
{

}

/**
 * @brief  Parse an MediaStore DeleteContainerPolicyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteContainerPolicyResponsePrivate::parseDeleteContainerPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteContainerPolicyResponse"));
    /// @todo
}

} // namespace MediaStore
} // namespace QtAws
