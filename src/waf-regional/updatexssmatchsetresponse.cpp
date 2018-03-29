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

#include "updatexssmatchsetresponse.h"
#include "updatexssmatchsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WAFRegional {

/**
 * @class  UpdateXssMatchSetResponse
 *
 * @brief  Handles WAFRegional UpdateXssMatchSet responses.
 *
 * @see    WAFRegionalClient::updateXssMatchSet
 */

/**
 * @brief  Constructs a new UpdateXssMatchSetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateXssMatchSetResponse::UpdateXssMatchSetResponse(
        const UpdateXssMatchSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFRegionalResponse(new UpdateXssMatchSetResponsePrivate(this), parent)
{
    setRequest(new UpdateXssMatchSetRequest(request));
    setReply(reply);
}

const UpdateXssMatchSetRequest * UpdateXssMatchSetResponse::request() const
{
    Q_D(const UpdateXssMatchSetResponse);
    return static_cast<const UpdateXssMatchSetRequest *>(d->request);
}

/**
 * @brief  Parse a WAFRegional UpdateXssMatchSet response.
 *
 * @param  response  Response to parse.
 */
void UpdateXssMatchSetResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateXssMatchSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateXssMatchSetResponsePrivate
 *
 * @brief  Private implementation for UpdateXssMatchSetResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateXssMatchSetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateXssMatchSetResponse instance.
 */
UpdateXssMatchSetResponsePrivate::UpdateXssMatchSetResponsePrivate(
    UpdateXssMatchSetResponse * const q) : WAFRegionalResponsePrivate(q)
{

}

/**
 * @brief  Parse an WAFRegional UpdateXssMatchSetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateXssMatchSetResponsePrivate::UpdateXssMatchSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateXssMatchSetResponse"));
    /// @todo
}

} // namespace WAFRegional
} // namespace QtAws
