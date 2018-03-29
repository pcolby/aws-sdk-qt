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

#include "createregexmatchsetresponse.h"
#include "createregexmatchsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WAFRegional {

/**
 * @class  CreateRegexMatchSetResponse
 *
 * @brief  Handles WAFRegional CreateRegexMatchSet responses.
 *
 * @see    WAFRegionalClient::createRegexMatchSet
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
    : CreateRegexMatchSetResponse(new CreateRegexMatchSetResponsePrivate(this), parent)
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
 * @brief  Parse a WAFRegional CreateRegexMatchSet response.
 *
 * @param  response  Response to parse.
 */
void CreateRegexMatchSetResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateRegexMatchSetResponse);
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
    CreateRegexMatchSetResponse * const q) : WAFRegionalResponsePrivate(q)
{

}

/**
 * @brief  Parse an WAFRegional CreateRegexMatchSetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateRegexMatchSetResponsePrivate::parseCreateRegexMatchSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateRegexMatchSetResponse"));
    /// @todo
}

} // namespace WAFRegional
} // namespace QtAws
