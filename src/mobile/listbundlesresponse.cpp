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

#include "listbundlesresponse.h"
#include "listbundlesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Mobile {

/**
 * @class  ListBundlesResponse
 *
 * @brief  Handles Mobile ListBundles responses.
 *
 * @see    MobileClient::listBundles
 */

/**
 * @brief  Constructs a new ListBundlesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListBundlesResponse::ListBundlesResponse(
        const ListBundlesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MobileResponse(new ListBundlesResponsePrivate(this), parent)
{
    setRequest(new ListBundlesRequest(request));
    setReply(reply);
}

const ListBundlesRequest * ListBundlesResponse::request() const
{
    Q_D(const ListBundlesResponse);
    return static_cast<const ListBundlesRequest *>(d->request);
}

/**
 * @brief  Parse a Mobile ListBundles response.
 *
 * @param  response  Response to parse.
 */
void ListBundlesResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListBundlesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListBundlesResponsePrivate
 *
 * @brief  Private implementation for ListBundlesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListBundlesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListBundlesResponse instance.
 */
ListBundlesResponsePrivate::ListBundlesResponsePrivate(
    ListBundlesResponse * const q) : MobileResponsePrivate(q)
{

}

/**
 * @brief  Parse an Mobile ListBundlesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListBundlesResponsePrivate::parseListBundlesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListBundlesResponse"));
    /// @todo
}

} // namespace Mobile
} // namespace QtAws
