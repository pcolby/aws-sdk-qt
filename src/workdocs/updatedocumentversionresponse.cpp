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

#include "updatedocumentversionresponse.h"
#include "updatedocumentversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkDocs {

/**
 * @class  UpdateDocumentVersionResponse
 *
 * @brief  Handles WorkDocs UpdateDocumentVersion responses.
 *
 * @see    WorkDocsClient::updateDocumentVersion
 */

/**
 * @brief  Constructs a new UpdateDocumentVersionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateDocumentVersionResponse::UpdateDocumentVersionResponse(
        const UpdateDocumentVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkDocsResponse(new UpdateDocumentVersionResponsePrivate(this), parent)
{
    setRequest(new UpdateDocumentVersionRequest(request));
    setReply(reply);
}

const UpdateDocumentVersionRequest * UpdateDocumentVersionResponse::request() const
{
    Q_D(const UpdateDocumentVersionResponse);
    return static_cast<const UpdateDocumentVersionRequest *>(d->request);
}

/**
 * @brief  Parse a WorkDocs UpdateDocumentVersion response.
 *
 * @param  response  Response to parse.
 */
void UpdateDocumentVersionResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateDocumentVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateDocumentVersionResponsePrivate
 *
 * @brief  Private implementation for UpdateDocumentVersionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateDocumentVersionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateDocumentVersionResponse instance.
 */
UpdateDocumentVersionResponsePrivate::UpdateDocumentVersionResponsePrivate(
    UpdateDocumentVersionResponse * const q) : WorkDocsResponsePrivate(q)
{

}

/**
 * @brief  Parse an WorkDocs UpdateDocumentVersionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateDocumentVersionResponsePrivate::UpdateDocumentVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDocumentVersionResponse"));
    /// @todo
}

} // namespace WorkDocs
} // namespace QtAws
