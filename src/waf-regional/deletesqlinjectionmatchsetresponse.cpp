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

#include "deletesqlinjectionmatchsetresponse.h"
#include "deletesqlinjectionmatchsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WAFRegional {

/**
 * @class  DeleteSqlInjectionMatchSetResponse
 *
 * @brief  Handles WAFRegional DeleteSqlInjectionMatchSet responses.
 *
 * @see    WAFRegionalClient::deleteSqlInjectionMatchSet
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
    : WAFRegionalResponse(new DeleteSqlInjectionMatchSetResponsePrivate(this), parent)
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
 * @brief  Parse a WAFRegional DeleteSqlInjectionMatchSet response.
 *
 * @param  response  Response to parse.
 */
void DeleteSqlInjectionMatchSetResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteSqlInjectionMatchSetResponse);
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
    DeleteSqlInjectionMatchSetResponse * const q) : WAFRegionalResponsePrivate(q)
{

}

/**
 * @brief  Parse an WAFRegional DeleteSqlInjectionMatchSetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteSqlInjectionMatchSetResponsePrivate::parseDeleteSqlInjectionMatchSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteSqlInjectionMatchSetResponse"));
    /// @todo
}

} // namespace WAFRegional
} // namespace QtAws
