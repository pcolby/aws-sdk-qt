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

#include "listidentitiesresponse.h"
#include "listidentitiesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SES {

/**
 * @class  ListIdentitiesResponse
 *
 * @brief  Handles SES ListIdentities responses.
 *
 * @see    SESClient::listIdentities
 */

/**
 * @brief  Constructs a new ListIdentitiesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListIdentitiesResponse::ListIdentitiesResponse(
        const ListIdentitiesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESResponse(new ListIdentitiesResponsePrivate(this), parent)
{
    setRequest(new ListIdentitiesRequest(request));
    setReply(reply);
}

const ListIdentitiesRequest * ListIdentitiesResponse::request() const
{
    Q_D(const ListIdentitiesResponse);
    return static_cast<const ListIdentitiesRequest *>(d->request);
}

/**
 * @brief  Parse a SES ListIdentities response.
 *
 * @param  response  Response to parse.
 */
void ListIdentitiesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListIdentitiesResponsePrivate
 *
 * @brief  Private implementation for ListIdentitiesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListIdentitiesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListIdentitiesResponse instance.
 */
ListIdentitiesResponsePrivate::ListIdentitiesResponsePrivate(
    ListIdentitiesQueueResponse * const q) : ListIdentitiesPrivate(q)
{

}

/**
 * @brief  Parse an SES ListIdentitiesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListIdentitiesResponsePrivate::ListIdentitiesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListIdentitiesResponse"));
    /// @todo
}

} // namespace SES
} // namespace QtAws
