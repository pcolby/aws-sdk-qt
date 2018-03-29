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

#include "deletebackupresponse.h"
#include "deletebackupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace OpsWorksCM {

/**
 * @class  DeleteBackupResponse
 *
 * @brief  Handles OpsWorksCM DeleteBackup responses.
 *
 * @see    OpsWorksCMClient::deleteBackup
 */

/**
 * @brief  Constructs a new DeleteBackupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteBackupResponse::DeleteBackupResponse(
        const DeleteBackupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OpsWorksCMResponse(new DeleteBackupResponsePrivate(this), parent)
{
    setRequest(new DeleteBackupRequest(request));
    setReply(reply);
}

const DeleteBackupRequest * DeleteBackupResponse::request() const
{
    Q_D(const DeleteBackupResponse);
    return static_cast<const DeleteBackupRequest *>(d->request);
}

/**
 * @brief  Parse a OpsWorksCM DeleteBackup response.
 *
 * @param  response  Response to parse.
 */
void DeleteBackupResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteBackupResponsePrivate
 *
 * @brief  Private implementation for DeleteBackupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteBackupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteBackupResponse instance.
 */
DeleteBackupResponsePrivate::DeleteBackupResponsePrivate(
    DeleteBackupResponse * const q) : OpsWorksCMResponsePrivate(q)
{

}

/**
 * @brief  Parse an OpsWorksCM DeleteBackupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteBackupResponsePrivate::DeleteBackupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteBackupResponse"));
    /// @todo
}

} // namespace OpsWorksCM
} // namespace QtAws
