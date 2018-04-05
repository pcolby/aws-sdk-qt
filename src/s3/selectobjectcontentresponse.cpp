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

#include "selectobjectcontentresponse.h"
#include "selectobjectcontentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/**
 * @class  SelectObjectContentResponse
 *
 * @brief  Handles S3 SelectObjectContent responses.
 *
 * @see    S3Client::selectObjectContent
 */

/**
 * @brief  Constructs a new SelectObjectContentResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SelectObjectContentResponse::SelectObjectContentResponse(
        const SelectObjectContentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new SelectObjectContentResponsePrivate(this), parent)
{
    setRequest(new SelectObjectContentRequest(request));
    setReply(reply);
}

const SelectObjectContentRequest * SelectObjectContentResponse::request() const
{
    Q_D(const SelectObjectContentResponse);
    return static_cast<const SelectObjectContentRequest *>(d->request);
}

/**
 * @brief  Parse a S3 SelectObjectContent response.
 *
 * @param  response  Response to parse.
 */
void SelectObjectContentResponse::parseSuccess(QIODevice &response)
{
    Q_D(SelectObjectContentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  SelectObjectContentResponsePrivate
 *
 * @brief  Private implementation for SelectObjectContentResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SelectObjectContentResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SelectObjectContentResponse instance.
 */
SelectObjectContentResponsePrivate::SelectObjectContentResponsePrivate(
    SelectObjectContentResponse * const q) : S3ResponsePrivate(q)
{

}

/**
 * @brief  Parse an S3 SelectObjectContentResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SelectObjectContentResponsePrivate::parseSelectObjectContentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SelectObjectContentResponse"));
    /// @todo
}

} // namespace S3
} // namespace QtAws
