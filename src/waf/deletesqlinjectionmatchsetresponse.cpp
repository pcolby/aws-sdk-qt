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

#include "deletesqlinjectionmatchsetresponse.h"
#include "deletesqlinjectionmatchsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace WAF {

/**
 * @class  DeleteSqlInjectionMatchSetResponse
 *
 * @brief  Handles WAF DeleteSqlInjectionMatchSet responses.
 *
 * @see    WAFClient::deleteSqlInjectionMatchSet
 */

/**
 * @brief  Constructs a new DeleteSqlInjectionMatchSetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteSqlInjectionMatchSetResponse::DeleteSqlInjectionMatchSetResponse(
        const DeleteSqlInjectionMatchSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFResponse(new DeleteSqlInjectionMatchSetResponsePrivate(this), parent)
{
    setRequest(new DeleteSqlInjectionMatchSetRequest(request));
    setReply(reply);
}

const DeleteSqlInjectionMatchSetRequest * DeleteSqlInjectionMatchSetResponse::request() const
{
    Q_D(const DeleteSqlInjectionMatchSetResponse);
    return static_cast<const DeleteSqlInjectionMatchSetRequest *>(d->request);
}

/**
 * @brief  Parse a WAF DeleteSqlInjectionMatchSet response.
 *
 * @param  response  Response to parse.
 */
void DeleteSqlInjectionMatchSetResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteSqlInjectionMatchSetResponsePrivate
 *
 * @brief  Private implementation for DeleteSqlInjectionMatchSetResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteSqlInjectionMatchSetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteSqlInjectionMatchSetResponse instance.
 */
DeleteSqlInjectionMatchSetResponsePrivate::DeleteSqlInjectionMatchSetResponsePrivate(
    DeleteSqlInjectionMatchSetQueueResponse * const q) : DeleteSqlInjectionMatchSetPrivate(q)
{

}

/**
 * @brief  Parse an WAF DeleteSqlInjectionMatchSetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteSqlInjectionMatchSetResponsePrivate::DeleteSqlInjectionMatchSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteSqlInjectionMatchSetResponse"));
    /// @todo
}

} // namespace WAF
} // namespace AWS
