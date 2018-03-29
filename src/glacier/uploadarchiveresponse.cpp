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

#include "uploadarchiveresponse.h"
#include "uploadarchiveresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glacier {

/**
 * @class  UploadArchiveResponse
 *
 * @brief  Handles Glacier UploadArchive responses.
 *
 * @see    GlacierClient::uploadArchive
 */

/**
 * @brief  Constructs a new UploadArchiveResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UploadArchiveResponse::UploadArchiveResponse(
        const UploadArchiveRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlacierResponse(new UploadArchiveResponsePrivate(this), parent)
{
    setRequest(new UploadArchiveRequest(request));
    setReply(reply);
}

const UploadArchiveRequest * UploadArchiveResponse::request() const
{
    Q_D(const UploadArchiveResponse);
    return static_cast<const UploadArchiveRequest *>(d->request);
}

/**
 * @brief  Parse a Glacier UploadArchive response.
 *
 * @param  response  Response to parse.
 */
void UploadArchiveResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UploadArchiveResponsePrivate
 *
 * @brief  Private implementation for UploadArchiveResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UploadArchiveResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UploadArchiveResponse instance.
 */
UploadArchiveResponsePrivate::UploadArchiveResponsePrivate(
    UploadArchiveResponse * const q) : GlacierResponsePrivate(q)
{

}

/**
 * @brief  Parse an Glacier UploadArchiveResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UploadArchiveResponsePrivate::UploadArchiveResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UploadArchiveResponse"));
    /// @todo
}

} // namespace Glacier
} // namespace QtAws
