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

#include "getpartitionsresponse.h"
#include "getpartitionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/**
 * @class  GetPartitionsResponse
 *
 * @brief  Handles Glue GetPartitions responses.
 *
 * @see    GlueClient::getPartitions
 */

/**
 * @brief  Constructs a new GetPartitionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetPartitionsResponse::GetPartitionsResponse(
        const GetPartitionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GetPartitionsResponse(new GetPartitionsResponsePrivate(this), parent)
{
    setRequest(new GetPartitionsRequest(request));
    setReply(reply);
}

const GetPartitionsRequest * GetPartitionsResponse::request() const
{
    Q_D(const GetPartitionsResponse);
    return static_cast<const GetPartitionsRequest *>(d->request);
}

/**
 * @brief  Parse a Glue GetPartitions response.
 *
 * @param  response  Response to parse.
 */
void GetPartitionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetPartitionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetPartitionsResponsePrivate
 *
 * @brief  Private implementation for GetPartitionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetPartitionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetPartitionsResponse instance.
 */
GetPartitionsResponsePrivate::GetPartitionsResponsePrivate(
    GetPartitionsResponse * const q) : GlueResponsePrivate(q)
{

}

/**
 * @brief  Parse an Glue GetPartitionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetPartitionsResponsePrivate::parseGetPartitionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetPartitionsResponse"));
    /// @todo
}

} // namespace Glue
} // namespace QtAws
