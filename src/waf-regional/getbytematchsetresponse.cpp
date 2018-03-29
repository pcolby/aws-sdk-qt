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

#include "getbytematchsetresponse.h"
#include "getbytematchsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WAFRegional {

/**
 * @class  GetByteMatchSetResponse
 *
 * @brief  Handles WAFRegional GetByteMatchSet responses.
 *
 * @see    WAFRegionalClient::getByteMatchSet
 */

/**
 * @brief  Constructs a new GetByteMatchSetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetByteMatchSetResponse::GetByteMatchSetResponse(
        const GetByteMatchSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFRegionalResponse(new GetByteMatchSetResponsePrivate(this), parent)
{
    setRequest(new GetByteMatchSetRequest(request));
    setReply(reply);
}

const GetByteMatchSetRequest * GetByteMatchSetResponse::request() const
{
    Q_D(const GetByteMatchSetResponse);
    return static_cast<const GetByteMatchSetRequest *>(d->request);
}

/**
 * @brief  Parse a WAFRegional GetByteMatchSet response.
 *
 * @param  response  Response to parse.
 */
void GetByteMatchSetResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetByteMatchSetResponsePrivate
 *
 * @brief  Private implementation for GetByteMatchSetResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetByteMatchSetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetByteMatchSetResponse instance.
 */
GetByteMatchSetResponsePrivate::GetByteMatchSetResponsePrivate(
    GetByteMatchSetQueueResponse * const q) : GetByteMatchSetPrivate(q)
{

}

/**
 * @brief  Parse an WAFRegional GetByteMatchSetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetByteMatchSetResponsePrivate::GetByteMatchSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetByteMatchSetResponse"));
    /// @todo
}

} // namespace WAFRegional
} // namespace QtAws
