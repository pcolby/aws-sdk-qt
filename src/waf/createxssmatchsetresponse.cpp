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

#include "createxssmatchsetresponse.h"
#include "createxssmatchsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WAF {

/**
 * @class  CreateXssMatchSetResponse
 *
 * @brief  Handles WAF CreateXssMatchSet responses.
 *
 * @see    WAFClient::createXssMatchSet
 */

/**
 * @brief  Constructs a new CreateXssMatchSetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateXssMatchSetResponse::CreateXssMatchSetResponse(
        const CreateXssMatchSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFResponse(new CreateXssMatchSetResponsePrivate(this), parent)
{
    setRequest(new CreateXssMatchSetRequest(request));
    setReply(reply);
}

const CreateXssMatchSetRequest * CreateXssMatchSetResponse::request() const
{
    Q_D(const CreateXssMatchSetResponse);
    return static_cast<const CreateXssMatchSetRequest *>(d->request);
}

/**
 * @brief  Parse a WAF CreateXssMatchSet response.
 *
 * @param  response  Response to parse.
 */
void CreateXssMatchSetResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateXssMatchSetResponsePrivate
 *
 * @brief  Private implementation for CreateXssMatchSetResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateXssMatchSetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateXssMatchSetResponse instance.
 */
CreateXssMatchSetResponsePrivate::CreateXssMatchSetResponsePrivate(
    CreateXssMatchSetResponse * const q) : WAFResponsePrivate(q)
{

}

/**
 * @brief  Parse an WAF CreateXssMatchSetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateXssMatchSetResponsePrivate::CreateXssMatchSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateXssMatchSetResponse"));
    /// @todo
}

} // namespace WAF
} // namespace QtAws
