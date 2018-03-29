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

#include "deletearchiveresponse.h"
#include "deletearchiveresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glacier {

/**
 * @class  DeleteArchiveResponse
 *
 * @brief  Handles Glacier DeleteArchive responses.
 *
 * @see    GlacierClient::deleteArchive
 */

/**
 * @brief  Constructs a new DeleteArchiveResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteArchiveResponse::DeleteArchiveResponse(
        const DeleteArchiveRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlacierResponse(new DeleteArchiveResponsePrivate(this), parent)
{
    setRequest(new DeleteArchiveRequest(request));
    setReply(reply);
}

const DeleteArchiveRequest * DeleteArchiveResponse::request() const
{
    Q_D(const DeleteArchiveResponse);
    return static_cast<const DeleteArchiveRequest *>(d->request);
}

/**
 * @brief  Parse a Glacier DeleteArchive response.
 *
 * @param  response  Response to parse.
 */
void DeleteArchiveResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteArchiveResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteArchiveResponsePrivate
 *
 * @brief  Private implementation for DeleteArchiveResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteArchiveResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteArchiveResponse instance.
 */
DeleteArchiveResponsePrivate::DeleteArchiveResponsePrivate(
    DeleteArchiveResponse * const q) : GlacierResponsePrivate(q)
{

}

/**
 * @brief  Parse an Glacier DeleteArchiveResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteArchiveResponsePrivate::DeleteArchiveResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteArchiveResponse"));
    /// @todo
}

} // namespace Glacier
} // namespace QtAws
