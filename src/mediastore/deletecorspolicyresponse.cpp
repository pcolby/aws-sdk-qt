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

#include "deletecorspolicyresponse.h"
#include "deletecorspolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaStore {

/**
 * @class  DeleteCorsPolicyResponse
 *
 * @brief  Handles MediaStore DeleteCorsPolicy responses.
 *
 * @see    MediaStoreClient::deleteCorsPolicy
 */

/**
 * @brief  Constructs a new DeleteCorsPolicyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteCorsPolicyResponse::DeleteCorsPolicyResponse(
        const DeleteCorsPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeleteCorsPolicyResponse(new DeleteCorsPolicyResponsePrivate(this), parent)
{
    setRequest(new DeleteCorsPolicyRequest(request));
    setReply(reply);
}

const DeleteCorsPolicyRequest * DeleteCorsPolicyResponse::request() const
{
    Q_D(const DeleteCorsPolicyResponse);
    return static_cast<const DeleteCorsPolicyRequest *>(d->request);
}

/**
 * @brief  Parse a MediaStore DeleteCorsPolicy response.
 *
 * @param  response  Response to parse.
 */
void DeleteCorsPolicyResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteCorsPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteCorsPolicyResponsePrivate
 *
 * @brief  Private implementation for DeleteCorsPolicyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteCorsPolicyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteCorsPolicyResponse instance.
 */
DeleteCorsPolicyResponsePrivate::DeleteCorsPolicyResponsePrivate(
    DeleteCorsPolicyResponse * const q) : MediaStoreResponsePrivate(q)
{

}

/**
 * @brief  Parse an MediaStore DeleteCorsPolicyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteCorsPolicyResponsePrivate::parseDeleteCorsPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteCorsPolicyResponse"));
    /// @todo
}

} // namespace MediaStore
} // namespace QtAws
