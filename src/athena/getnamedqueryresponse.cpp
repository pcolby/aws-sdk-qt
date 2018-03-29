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

#include "getnamedqueryresponse.h"
#include "getnamedqueryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Athena {

/**
 * @class  GetNamedQueryResponse
 *
 * @brief  Handles Athena GetNamedQuery responses.
 *
 * @see    AthenaClient::getNamedQuery
 */

/**
 * @brief  Constructs a new GetNamedQueryResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetNamedQueryResponse::GetNamedQueryResponse(
        const GetNamedQueryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GetNamedQueryResponse(new GetNamedQueryResponsePrivate(this), parent)
{
    setRequest(new GetNamedQueryRequest(request));
    setReply(reply);
}

const GetNamedQueryRequest * GetNamedQueryResponse::request() const
{
    Q_D(const GetNamedQueryResponse);
    return static_cast<const GetNamedQueryRequest *>(d->request);
}

/**
 * @brief  Parse a Athena GetNamedQuery response.
 *
 * @param  response  Response to parse.
 */
void GetNamedQueryResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetNamedQueryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetNamedQueryResponsePrivate
 *
 * @brief  Private implementation for GetNamedQueryResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetNamedQueryResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetNamedQueryResponse instance.
 */
GetNamedQueryResponsePrivate::GetNamedQueryResponsePrivate(
    GetNamedQueryResponse * const q) : AthenaResponsePrivate(q)
{

}

/**
 * @brief  Parse an Athena GetNamedQueryResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetNamedQueryResponsePrivate::parseGetNamedQueryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetNamedQueryResponse"));
    /// @todo
}

} // namespace Athena
} // namespace QtAws
