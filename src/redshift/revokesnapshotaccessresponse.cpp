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

#include "revokesnapshotaccessresponse.h"
#include "revokesnapshotaccessresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Redshift {

/**
 * @class  RevokeSnapshotAccessResponse
 *
 * @brief  Handles Redshift RevokeSnapshotAccess responses.
 *
 * @see    RedshiftClient::revokeSnapshotAccess
 */

/**
 * @brief  Constructs a new RevokeSnapshotAccessResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RevokeSnapshotAccessResponse::RevokeSnapshotAccessResponse(
        const RevokeSnapshotAccessRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RevokeSnapshotAccessResponse(new RevokeSnapshotAccessResponsePrivate(this), parent)
{
    setRequest(new RevokeSnapshotAccessRequest(request));
    setReply(reply);
}

const RevokeSnapshotAccessRequest * RevokeSnapshotAccessResponse::request() const
{
    Q_D(const RevokeSnapshotAccessResponse);
    return static_cast<const RevokeSnapshotAccessRequest *>(d->request);
}

/**
 * @brief  Parse a Redshift RevokeSnapshotAccess response.
 *
 * @param  response  Response to parse.
 */
void RevokeSnapshotAccessResponse::parseSuccess(QIODevice &response)
{
    Q_D(RevokeSnapshotAccessResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RevokeSnapshotAccessResponsePrivate
 *
 * @brief  Private implementation for RevokeSnapshotAccessResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RevokeSnapshotAccessResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RevokeSnapshotAccessResponse instance.
 */
RevokeSnapshotAccessResponsePrivate::RevokeSnapshotAccessResponsePrivate(
    RevokeSnapshotAccessResponse * const q) : RedshiftResponsePrivate(q)
{

}

/**
 * @brief  Parse an Redshift RevokeSnapshotAccessResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RevokeSnapshotAccessResponsePrivate::parseRevokeSnapshotAccessResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RevokeSnapshotAccessResponse"));
    /// @todo
}

} // namespace Redshift
} // namespace QtAws
