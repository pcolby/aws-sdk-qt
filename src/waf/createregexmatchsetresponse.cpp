/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "createregexmatchsetresponse.h"
#include "createregexmatchsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace WAF {

/**
 * @class  CreateRegexMatchSetResponse
 *
 * @brief  Handles WAF CreateRegexMatchSet responses.
 *
 * @see    WAFClient::createRegexMatchSet
 */

/**
 * @brief  Constructs a new CreateRegexMatchSetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateRegexMatchSetResponse::CreateRegexMatchSetResponse(
        const CreateRegexMatchSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFResponse(new CreateRegexMatchSetResponsePrivate(this), parent)
{
    setRequest(new CreateRegexMatchSetRequest(request));
    setReply(reply);
}

const CreateRegexMatchSetRequest * CreateRegexMatchSetResponse::request() const
{
    Q_D(const CreateRegexMatchSetResponse);
    return static_cast<const CreateRegexMatchSetRequest *>(d->request);
}

/**
 * @brief  Parse a WAF CreateRegexMatchSet response.
 *
 * @param  response  Response to parse.
 */
void CreateRegexMatchSetResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateRegexMatchSetResponsePrivate
 *
 * @brief  Private implementation for CreateRegexMatchSetResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateRegexMatchSetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateRegexMatchSetResponse instance.
 */
CreateRegexMatchSetResponsePrivate::CreateRegexMatchSetResponsePrivate(
    CreateRegexMatchSetQueueResponse * const q) : CreateRegexMatchSetPrivate(q)
{

}

/**
 * @brief  Parse an WAF CreateRegexMatchSetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateRegexMatchSetResponsePrivate::CreateRegexMatchSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateRegexMatchSetResponse"));
    /// @todo
}

} // namespace WAF
} // namespace AWS
