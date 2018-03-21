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

#include "getobjectaclresponse.h"
#include "getobjectaclresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace S3 {

/**
 * @class  GetObjectAclResponse
 *
 * @brief  Handles S3 GetObjectAcl responses.
 *
 * @see    S3Client::getObjectAcl
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetObjectAclResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new GetObjectAclResponsePrivate(this), parent)
{
    setRequest(new GetObjectAclRequest(request));
    setReply(reply);
}

const GetObjectAclRequest * GetObjectAclResponse::request() const
{
    Q_D(const GetObjectAclResponse);
    return static_cast<const GetObjectAclRequest *>(d->request);
}

/**
 * @brief  Parse a S3 GetObjectAcl response.
 *
 * @param  response  Response to parse.
 */
void GetObjectAclResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetObjectAclResponsePrivate
 *
 * @brief  Private implementation for GetObjectAclResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetObjectAclResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetObjectAclResponse instance.
 */
GetObjectAclResponsePrivate::GetObjectAclResponsePrivate(
    GetObjectAclQueueResponse * const q) : GetObjectAclPrivate(q)
{

}

/**
 * @brief  Parse an S3 GetObjectAclResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetObjectAclResponsePrivate::GetObjectAclResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetObjectAclResponse"));
    /// @todo
}
