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

#include "listmultipartuploadsresponse.h"
#include "listmultipartuploadsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/**
 * @class  ListMultipartUploadsResponse
 *
 * @brief  Handles S3 ListMultipartUploads responses.
 *
 * @see    S3Client::listMultipartUploads
 */

/**
 * @brief  Constructs a new ListMultipartUploadsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListMultipartUploadsResponse::ListMultipartUploadsResponse(
        const ListMultipartUploadsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new ListMultipartUploadsResponsePrivate(this), parent)
{
    setRequest(new ListMultipartUploadsRequest(request));
    setReply(reply);
}

const ListMultipartUploadsRequest * ListMultipartUploadsResponse::request() const
{
    Q_D(const ListMultipartUploadsResponse);
    return static_cast<const ListMultipartUploadsRequest *>(d->request);
}

/**
 * @brief  Parse a S3 ListMultipartUploads response.
 *
 * @param  response  Response to parse.
 */
void ListMultipartUploadsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListMultipartUploadsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListMultipartUploadsResponsePrivate
 *
 * @brief  Private implementation for ListMultipartUploadsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListMultipartUploadsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListMultipartUploadsResponse instance.
 */
ListMultipartUploadsResponsePrivate::ListMultipartUploadsResponsePrivate(
    ListMultipartUploadsResponse * const q) : S3ResponsePrivate(q)
{

}

/**
 * @brief  Parse an S3 ListMultipartUploadsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListMultipartUploadsResponsePrivate::ListMultipartUploadsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListMultipartUploadsResponse"));
    /// @todo
}

} // namespace S3
} // namespace QtAws
