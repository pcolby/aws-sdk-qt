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

#include "listresolversresponse.h"
#include "listresolversresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppSync {

/**
 * @class  ListResolversResponse
 *
 * @brief  Handles AppSync ListResolvers responses.
 *
 * @see    AppSyncClient::listResolvers
 */

/**
 * @brief  Constructs a new ListResolversResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListResolversResponse::ListResolversResponse(
        const ListResolversRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ListResolversResponse(new ListResolversResponsePrivate(this), parent)
{
    setRequest(new ListResolversRequest(request));
    setReply(reply);
}

const ListResolversRequest * ListResolversResponse::request() const
{
    Q_D(const ListResolversResponse);
    return static_cast<const ListResolversRequest *>(d->request);
}

/**
 * @brief  Parse a AppSync ListResolvers response.
 *
 * @param  response  Response to parse.
 */
void ListResolversResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListResolversResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListResolversResponsePrivate
 *
 * @brief  Private implementation for ListResolversResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListResolversResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListResolversResponse instance.
 */
ListResolversResponsePrivate::ListResolversResponsePrivate(
    ListResolversResponse * const q) : AppSyncResponsePrivate(q)
{

}

/**
 * @brief  Parse an AppSync ListResolversResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListResolversResponsePrivate::parseListResolversResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListResolversResponse"));
    /// @todo
}

} // namespace AppSync
} // namespace QtAws
