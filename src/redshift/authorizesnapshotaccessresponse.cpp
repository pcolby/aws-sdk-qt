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

#include "authorizesnapshotaccessresponse.h"
#include "authorizesnapshotaccessresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Redshift {

/**
 * @class  AuthorizeSnapshotAccessResponse
 *
 * @brief  Handles Redshift AuthorizeSnapshotAccess responses.
 *
 * @see    RedshiftClient::authorizeSnapshotAccess
 */

/**
 * @brief  Constructs a new AuthorizeSnapshotAccessResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AuthorizeSnapshotAccessResponse::AuthorizeSnapshotAccessResponse(
        const AuthorizeSnapshotAccessRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RedshiftResponse(new AuthorizeSnapshotAccessResponsePrivate(this), parent)
{
    setRequest(new AuthorizeSnapshotAccessRequest(request));
    setReply(reply);
}

const AuthorizeSnapshotAccessRequest * AuthorizeSnapshotAccessResponse::request() const
{
    Q_D(const AuthorizeSnapshotAccessResponse);
    return static_cast<const AuthorizeSnapshotAccessRequest *>(d->request);
}

/**
 * @brief  Parse a Redshift AuthorizeSnapshotAccess response.
 *
 * @param  response  Response to parse.
 */
void AuthorizeSnapshotAccessResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AuthorizeSnapshotAccessResponsePrivate
 *
 * @brief  Private implementation for AuthorizeSnapshotAccessResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AuthorizeSnapshotAccessResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AuthorizeSnapshotAccessResponse instance.
 */
AuthorizeSnapshotAccessResponsePrivate::AuthorizeSnapshotAccessResponsePrivate(
    AuthorizeSnapshotAccessQueueResponse * const q) : AuthorizeSnapshotAccessPrivate(q)
{

}

/**
 * @brief  Parse an Redshift AuthorizeSnapshotAccessResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AuthorizeSnapshotAccessResponsePrivate::AuthorizeSnapshotAccessResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AuthorizeSnapshotAccessResponse"));
    /// @todo
}

} // namespace Redshift
} // namespace AWS
