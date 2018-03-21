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

#include "deletexssmatchsetresponse.h"
#include "deletexssmatchsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace WAF {

/**
 * @class  DeleteXssMatchSetResponse
 *
 * @brief  Handles WAF DeleteXssMatchSet responses.
 *
 * @see    WAFClient::deleteXssMatchSet
 */

/**
 * @brief  Constructs a new DeleteXssMatchSetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteXssMatchSetResponse::DeleteXssMatchSetResponse(
        const DeleteXssMatchSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFResponse(new DeleteXssMatchSetResponsePrivate(this), parent)
{
    setRequest(new DeleteXssMatchSetRequest(request));
    setReply(reply);
}

const DeleteXssMatchSetRequest * DeleteXssMatchSetResponse::request() const
{
    Q_D(const DeleteXssMatchSetResponse);
    return static_cast<const DeleteXssMatchSetRequest *>(d->request);
}

/**
 * @brief  Parse a WAF DeleteXssMatchSet response.
 *
 * @param  response  Response to parse.
 */
void DeleteXssMatchSetResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteXssMatchSetResponsePrivate
 *
 * @brief  Private implementation for DeleteXssMatchSetResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteXssMatchSetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteXssMatchSetResponse instance.
 */
DeleteXssMatchSetResponsePrivate::DeleteXssMatchSetResponsePrivate(
    DeleteXssMatchSetQueueResponse * const q) : DeleteXssMatchSetPrivate(q)
{

}

/**
 * @brief  Parse an WAF DeleteXssMatchSetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteXssMatchSetResponsePrivate::DeleteXssMatchSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteXssMatchSetResponse"));
    /// @todo
}

} // namespace WAF
} // namespace AWS
