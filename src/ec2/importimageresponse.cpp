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

#include "importimageresponse.h"
#include "importimageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/**
 * @class  ImportImageResponse
 *
 * @brief  Handles EC2 ImportImage responses.
 *
 * @see    EC2Client::importImage
 */

/**
 * @brief  Constructs a new ImportImageResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ImportImageResponse::ImportImageResponse(
        const ImportImageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ImportImageResponse(new ImportImageResponsePrivate(this), parent)
{
    setRequest(new ImportImageRequest(request));
    setReply(reply);
}

const ImportImageRequest * ImportImageResponse::request() const
{
    Q_D(const ImportImageResponse);
    return static_cast<const ImportImageRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 ImportImage response.
 *
 * @param  response  Response to parse.
 */
void ImportImageResponse::parseSuccess(QIODevice &response)
{
    Q_D(ImportImageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ImportImageResponsePrivate
 *
 * @brief  Private implementation for ImportImageResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ImportImageResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ImportImageResponse instance.
 */
ImportImageResponsePrivate::ImportImageResponsePrivate(
    ImportImageResponse * const q) : EC2ResponsePrivate(q)
{

}

/**
 * @brief  Parse an EC2 ImportImageResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ImportImageResponsePrivate::parseImportImageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ImportImageResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
