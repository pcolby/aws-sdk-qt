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

#include "listfunctionsresponse.h"
#include "listfunctionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lambda {

/**
 * @class  ListFunctionsResponse
 *
 * @brief  Handles Lambda ListFunctions responses.
 *
 * @see    LambdaClient::listFunctions
 */

/**
 * @brief  Constructs a new ListFunctionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListFunctionsResponse::ListFunctionsResponse(
        const ListFunctionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ListFunctionsResponse(new ListFunctionsResponsePrivate(this), parent)
{
    setRequest(new ListFunctionsRequest(request));
    setReply(reply);
}

const ListFunctionsRequest * ListFunctionsResponse::request() const
{
    Q_D(const ListFunctionsResponse);
    return static_cast<const ListFunctionsRequest *>(d->request);
}

/**
 * @brief  Parse a Lambda ListFunctions response.
 *
 * @param  response  Response to parse.
 */
void ListFunctionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListFunctionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListFunctionsResponsePrivate
 *
 * @brief  Private implementation for ListFunctionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListFunctionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListFunctionsResponse instance.
 */
ListFunctionsResponsePrivate::ListFunctionsResponsePrivate(
    ListFunctionsResponse * const q) : LambdaResponsePrivate(q)
{

}

/**
 * @brief  Parse an Lambda ListFunctionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListFunctionsResponsePrivate::parseListFunctionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListFunctionsResponse"));
    /// @todo
}

} // namespace Lambda
} // namespace QtAws
