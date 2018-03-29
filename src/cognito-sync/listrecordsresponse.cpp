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

#include "listrecordsresponse.h"
#include "listrecordsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoSync {

/**
 * @class  ListRecordsResponse
 *
 * @brief  Handles CognitoSync ListRecords responses.
 *
 * @see    CognitoSyncClient::listRecords
 */

/**
 * @brief  Constructs a new ListRecordsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListRecordsResponse::ListRecordsResponse(
        const ListRecordsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoSyncResponse(new ListRecordsResponsePrivate(this), parent)
{
    setRequest(new ListRecordsRequest(request));
    setReply(reply);
}

const ListRecordsRequest * ListRecordsResponse::request() const
{
    Q_D(const ListRecordsResponse);
    return static_cast<const ListRecordsRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoSync ListRecords response.
 *
 * @param  response  Response to parse.
 */
void ListRecordsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListRecordsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListRecordsResponsePrivate
 *
 * @brief  Private implementation for ListRecordsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListRecordsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListRecordsResponse instance.
 */
ListRecordsResponsePrivate::ListRecordsResponsePrivate(
    ListRecordsResponse * const q) : CognitoSyncResponsePrivate(q)
{

}

/**
 * @brief  Parse an CognitoSync ListRecordsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListRecordsResponsePrivate::ListRecordsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListRecordsResponse"));
    /// @todo
}

} // namespace CognitoSync
} // namespace QtAws
