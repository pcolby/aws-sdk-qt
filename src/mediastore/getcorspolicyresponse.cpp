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

#include "getcorspolicyresponse.h"
#include "getcorspolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaStore {

/**
 * @class  GetCorsPolicyResponse
 *
 * @brief  Handles MediaStore GetCorsPolicy responses.
 *
 * @see    MediaStoreClient::getCorsPolicy
 */

/**
 * @brief  Constructs a new GetCorsPolicyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetCorsPolicyResponse::GetCorsPolicyResponse(
        const GetCorsPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaStoreResponse(new GetCorsPolicyResponsePrivate(this), parent)
{
    setRequest(new GetCorsPolicyRequest(request));
    setReply(reply);
}

const GetCorsPolicyRequest * GetCorsPolicyResponse::request() const
{
    Q_D(const GetCorsPolicyResponse);
    return static_cast<const GetCorsPolicyRequest *>(d->request);
}

/**
 * @brief  Parse a MediaStore GetCorsPolicy response.
 *
 * @param  response  Response to parse.
 */
void GetCorsPolicyResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetCorsPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetCorsPolicyResponsePrivate
 *
 * @brief  Private implementation for GetCorsPolicyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetCorsPolicyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetCorsPolicyResponse instance.
 */
GetCorsPolicyResponsePrivate::GetCorsPolicyResponsePrivate(
    GetCorsPolicyResponse * const q) : MediaStoreResponsePrivate(q)
{

}

/**
 * @brief  Parse an MediaStore GetCorsPolicyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetCorsPolicyResponsePrivate::parseGetCorsPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetCorsPolicyResponse"));
    /// @todo
}

} // namespace MediaStore
} // namespace QtAws
