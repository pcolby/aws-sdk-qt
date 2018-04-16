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

#include "listpartsresponse.h"
#include "listpartsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::ListPartsResponse
 *
 * \brief The ListPartsResponse class encapsulates S3 ListParts responses.
 *
 * \ingroup S3
 *
 *
 * \sa S3Client::listParts
 */

/*!
 * @brief  Constructs a new ListPartsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListPartsResponse::ListPartsResponse(
        const ListPartsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new ListPartsResponsePrivate(this), parent)
{
    setRequest(new ListPartsRequest(request));
    setReply(reply);
}

const ListPartsRequest * ListPartsResponse::request() const
{
    Q_D(const ListPartsResponse);
    return static_cast<const ListPartsRequest *>(d->request);
}

/*!
 * @brief  Parse a S3 ListParts response.
 *
 * @param  response  Response to parse.
 */
void ListPartsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListPartsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class ListPartsResponsePrivate
 *
 * \brief Private implementation for ListPartsResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListPartsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListPartsResponse instance.
 */
ListPartsResponsePrivate::ListPartsResponsePrivate(
    ListPartsResponse * const q) : S3ResponsePrivate(q)
{

}

/*!
 * @brief  Parse an S3 ListPartsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListPartsResponsePrivate::parseListPartsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListPartsResponse"));
    /// @todo
}

} // namespace S3
} // namespace QtAws
