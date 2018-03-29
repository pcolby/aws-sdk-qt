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

#include "creategeomatchsetresponse.h"
#include "creategeomatchsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WAF {

/**
 * @class  CreateGeoMatchSetResponse
 *
 * @brief  Handles WAF CreateGeoMatchSet responses.
 *
 * @see    WAFClient::createGeoMatchSet
 */

/**
 * @brief  Constructs a new CreateGeoMatchSetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateGeoMatchSetResponse::CreateGeoMatchSetResponse(
        const CreateGeoMatchSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFResponse(new CreateGeoMatchSetResponsePrivate(this), parent)
{
    setRequest(new CreateGeoMatchSetRequest(request));
    setReply(reply);
}

const CreateGeoMatchSetRequest * CreateGeoMatchSetResponse::request() const
{
    Q_D(const CreateGeoMatchSetResponse);
    return static_cast<const CreateGeoMatchSetRequest *>(d->request);
}

/**
 * @brief  Parse a WAF CreateGeoMatchSet response.
 *
 * @param  response  Response to parse.
 */
void CreateGeoMatchSetResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateGeoMatchSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateGeoMatchSetResponsePrivate
 *
 * @brief  Private implementation for CreateGeoMatchSetResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateGeoMatchSetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateGeoMatchSetResponse instance.
 */
CreateGeoMatchSetResponsePrivate::CreateGeoMatchSetResponsePrivate(
    CreateGeoMatchSetResponse * const q) : WAFResponsePrivate(q)
{

}

/**
 * @brief  Parse an WAF CreateGeoMatchSetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateGeoMatchSetResponsePrivate::parseCreateGeoMatchSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateGeoMatchSetResponse"));
    /// @todo
}

} // namespace WAF
} // namespace QtAws
