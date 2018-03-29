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

#include "enablesnapshotcopyresponse.h"
#include "enablesnapshotcopyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Redshift {

/**
 * @class  EnableSnapshotCopyResponse
 *
 * @brief  Handles Redshift EnableSnapshotCopy responses.
 *
 * @see    RedshiftClient::enableSnapshotCopy
 */

/**
 * @brief  Constructs a new EnableSnapshotCopyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
EnableSnapshotCopyResponse::EnableSnapshotCopyResponse(
        const EnableSnapshotCopyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RedshiftResponse(new EnableSnapshotCopyResponsePrivate(this), parent)
{
    setRequest(new EnableSnapshotCopyRequest(request));
    setReply(reply);
}

const EnableSnapshotCopyRequest * EnableSnapshotCopyResponse::request() const
{
    Q_D(const EnableSnapshotCopyResponse);
    return static_cast<const EnableSnapshotCopyRequest *>(d->request);
}

/**
 * @brief  Parse a Redshift EnableSnapshotCopy response.
 *
 * @param  response  Response to parse.
 */
void EnableSnapshotCopyResponse::parseSuccess(QIODevice &response)
{
    Q_D(EnableSnapshotCopyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  EnableSnapshotCopyResponsePrivate
 *
 * @brief  Private implementation for EnableSnapshotCopyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new EnableSnapshotCopyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public EnableSnapshotCopyResponse instance.
 */
EnableSnapshotCopyResponsePrivate::EnableSnapshotCopyResponsePrivate(
    EnableSnapshotCopyResponse * const q) : RedshiftResponsePrivate(q)
{

}

/**
 * @brief  Parse an Redshift EnableSnapshotCopyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void EnableSnapshotCopyResponsePrivate::parseEnableSnapshotCopyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("EnableSnapshotCopyResponse"));
    /// @todo
}

} // namespace Redshift
} // namespace QtAws
