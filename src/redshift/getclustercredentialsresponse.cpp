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

#include "getclustercredentialsresponse.h"
#include "getclustercredentialsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Redshift {

/**
 * @class  GetClusterCredentialsResponse
 *
 * @brief  Handles Redshift GetClusterCredentials responses.
 *
 * @see    RedshiftClient::getClusterCredentials
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetClusterCredentialsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RedshiftResponse(new GetClusterCredentialsResponsePrivate(this), parent)
{
    setRequest(new GetClusterCredentialsRequest(request));
    setReply(reply);
}

const GetClusterCredentialsRequest * GetClusterCredentialsResponse::request() const
{
    Q_D(const GetClusterCredentialsResponse);
    return static_cast<const GetClusterCredentialsRequest *>(d->request);
}

/**
 * @brief  Parse a Redshift GetClusterCredentials response.
 *
 * @param  response  Response to parse.
 */
void GetClusterCredentialsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetClusterCredentialsResponsePrivate
 *
 * @brief  Private implementation for GetClusterCredentialsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetClusterCredentialsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetClusterCredentialsResponse instance.
 */
GetClusterCredentialsResponsePrivate::GetClusterCredentialsResponsePrivate(
    GetClusterCredentialsQueueResponse * const q) : GetClusterCredentialsPrivate(q)
{

}

/**
 * @brief  Parse an Redshift GetClusterCredentialsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetClusterCredentialsResponsePrivate::GetClusterCredentialsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetClusterCredentialsResponse"));
    /// @todo
}

} // namespace Redshift
} // namespace AWS
