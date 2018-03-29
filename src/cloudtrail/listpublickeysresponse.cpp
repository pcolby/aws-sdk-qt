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

#include "listpublickeysresponse.h"
#include "listpublickeysresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudTrail {

/**
 * @class  ListPublicKeysResponse
 *
 * @brief  Handles CloudTrail ListPublicKeys responses.
 *
 * @see    CloudTrailClient::listPublicKeys
 */

/**
 * @brief  Constructs a new ListPublicKeysResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListPublicKeysResponse::ListPublicKeysResponse(
        const ListPublicKeysRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ListPublicKeysResponse(new ListPublicKeysResponsePrivate(this), parent)
{
    setRequest(new ListPublicKeysRequest(request));
    setReply(reply);
}

const ListPublicKeysRequest * ListPublicKeysResponse::request() const
{
    Q_D(const ListPublicKeysResponse);
    return static_cast<const ListPublicKeysRequest *>(d->request);
}

/**
 * @brief  Parse a CloudTrail ListPublicKeys response.
 *
 * @param  response  Response to parse.
 */
void ListPublicKeysResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListPublicKeysResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListPublicKeysResponsePrivate
 *
 * @brief  Private implementation for ListPublicKeysResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListPublicKeysResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListPublicKeysResponse instance.
 */
ListPublicKeysResponsePrivate::ListPublicKeysResponsePrivate(
    ListPublicKeysResponse * const q) : CloudTrailResponsePrivate(q)
{

}

/**
 * @brief  Parse an CloudTrail ListPublicKeysResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListPublicKeysResponsePrivate::parseListPublicKeysResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListPublicKeysResponse"));
    /// @todo
}

} // namespace CloudTrail
} // namespace QtAws
