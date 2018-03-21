/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listlexiconsresponse.h"
#include "listlexiconsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Polly {

/**
 * @class  ListLexiconsResponse
 *
 * @brief  Handles Polly ListLexicons responses.
 *
 * @see    PollyClient::listLexicons
 */

/**
 * @brief  Constructs a new ListLexiconsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListLexiconsResponse::ListLexiconsResponse(
        const ListLexiconsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PollyResponse(new ListLexiconsResponsePrivate(this), parent)
{
    setRequest(new ListLexiconsRequest(request));
    setReply(reply);
}

const ListLexiconsRequest * ListLexiconsResponse::request() const
{
    Q_D(const ListLexiconsResponse);
    return static_cast<const ListLexiconsRequest *>(d->request);
}

/**
 * @brief  Parse a Polly ListLexicons response.
 *
 * @param  response  Response to parse.
 */
void ListLexiconsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListLexiconsResponsePrivate
 *
 * @brief  Private implementation for ListLexiconsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListLexiconsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListLexiconsResponse instance.
 */
ListLexiconsResponsePrivate::ListLexiconsResponsePrivate(
    ListLexiconsQueueResponse * const q) : ListLexiconsPrivate(q)
{

}

/**
 * @brief  Parse an Polly ListLexiconsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListLexiconsResponsePrivate::ListLexiconsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListLexiconsResponse"));
    /// @todo
}

} // namespace Polly
} // namespace AWS
