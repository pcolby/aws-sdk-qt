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

#include "listgraphqlapisresponse.h"
#include "listgraphqlapisresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::ListGraphqlApisResponse
 *
 * \brief The ListGraphqlApisResponse class provides an interace for AppSync ListGraphqlApis responses.
 *
 * \ingroup AppSync
 *
 *  AWS AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::listGraphqlApis
 */

/*!
 * @brief  Constructs a new ListGraphqlApisResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListGraphqlApisResponse::ListGraphqlApisResponse(
        const ListGraphqlApisRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppSyncResponse(new ListGraphqlApisResponsePrivate(this), parent)
{
    setRequest(new ListGraphqlApisRequest(request));
    setReply(reply);
}

const ListGraphqlApisRequest * ListGraphqlApisResponse::request() const
{
    Q_D(const ListGraphqlApisResponse);
    return static_cast<const ListGraphqlApisRequest *>(d->request);
}

/*!
 * @brief  Parse a AppSync ListGraphqlApis response.
 *
 * @param  response  Response to parse.
 */
void ListGraphqlApisResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListGraphqlApisResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class ListGraphqlApisResponsePrivate
 *
 * \brief Private implementation for ListGraphqlApisResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListGraphqlApisResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListGraphqlApisResponse instance.
 */
ListGraphqlApisResponsePrivate::ListGraphqlApisResponsePrivate(
    ListGraphqlApisResponse * const q) : AppSyncResponsePrivate(q)
{

}

/*!
 * @brief  Parse an AppSync ListGraphqlApisResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListGraphqlApisResponsePrivate::parseListGraphqlApisResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListGraphqlApisResponse"));
    /// @todo
}

} // namespace AppSync
} // namespace QtAws
