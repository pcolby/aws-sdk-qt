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

#include "deletecustommetadataresponse.h"
#include "deletecustommetadataresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkDocs {

/**
 * @class  DeleteCustomMetadataResponse
 *
 * @brief  Handles WorkDocs DeleteCustomMetadata responses.
 *
 * @see    WorkDocsClient::deleteCustomMetadata
 */

/**
 * @brief  Constructs a new DeleteCustomMetadataResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteCustomMetadataResponse::DeleteCustomMetadataResponse(
        const DeleteCustomMetadataRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkDocsResponse(new DeleteCustomMetadataResponsePrivate(this), parent)
{
    setRequest(new DeleteCustomMetadataRequest(request));
    setReply(reply);
}

const DeleteCustomMetadataRequest * DeleteCustomMetadataResponse::request() const
{
    Q_D(const DeleteCustomMetadataResponse);
    return static_cast<const DeleteCustomMetadataRequest *>(d->request);
}

/**
 * @brief  Parse a WorkDocs DeleteCustomMetadata response.
 *
 * @param  response  Response to parse.
 */
void DeleteCustomMetadataResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteCustomMetadataResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteCustomMetadataResponsePrivate
 *
 * @brief  Private implementation for DeleteCustomMetadataResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteCustomMetadataResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteCustomMetadataResponse instance.
 */
DeleteCustomMetadataResponsePrivate::DeleteCustomMetadataResponsePrivate(
    DeleteCustomMetadataResponse * const q) : WorkDocsResponsePrivate(q)
{

}

/**
 * @brief  Parse an WorkDocs DeleteCustomMetadataResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteCustomMetadataResponsePrivate::parseDeleteCustomMetadataResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteCustomMetadataResponse"));
    /// @todo
}

} // namespace WorkDocs
} // namespace QtAws
