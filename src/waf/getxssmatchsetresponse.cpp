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

#include "getxssmatchsetresponse.h"
#include "getxssmatchsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WAF {

/**
 * @class  GetXssMatchSetResponse
 *
 * @brief  Handles WAF GetXssMatchSet responses.
 *
 * @see    WAFClient::getXssMatchSet
 */

/**
 * @brief  Constructs a new GetXssMatchSetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetXssMatchSetResponse::GetXssMatchSetResponse(
        const GetXssMatchSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFResponse(new GetXssMatchSetResponsePrivate(this), parent)
{
    setRequest(new GetXssMatchSetRequest(request));
    setReply(reply);
}

const GetXssMatchSetRequest * GetXssMatchSetResponse::request() const
{
    Q_D(const GetXssMatchSetResponse);
    return static_cast<const GetXssMatchSetRequest *>(d->request);
}

/**
 * @brief  Parse a WAF GetXssMatchSet response.
 *
 * @param  response  Response to parse.
 */
void GetXssMatchSetResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetXssMatchSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetXssMatchSetResponsePrivate
 *
 * @brief  Private implementation for GetXssMatchSetResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetXssMatchSetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetXssMatchSetResponse instance.
 */
GetXssMatchSetResponsePrivate::GetXssMatchSetResponsePrivate(
    GetXssMatchSetResponse * const q) : WAFResponsePrivate(q)
{

}

/**
 * @brief  Parse an WAF GetXssMatchSetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetXssMatchSetResponsePrivate::parseGetXssMatchSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetXssMatchSetResponse"));
    /// @todo
}

} // namespace WAF
} // namespace QtAws
