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

#include "createsqlinjectionmatchsetresponse.h"
#include "createsqlinjectionmatchsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace WAF {

/**
 * @class  CreateSqlInjectionMatchSetResponse
 *
 * @brief  Handles WAF CreateSqlInjectionMatchSet responses.
 *
 * @see    WAFClient::createSqlInjectionMatchSet
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateSqlInjectionMatchSetResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFResponse(new CreateSqlInjectionMatchSetResponsePrivate(this), parent)
{
    setRequest(new CreateSqlInjectionMatchSetRequest(request));
    setReply(reply);
}

const CreateSqlInjectionMatchSetRequest * CreateSqlInjectionMatchSetResponse::request() const
{
    Q_D(const CreateSqlInjectionMatchSetResponse);
    return static_cast<const CreateSqlInjectionMatchSetRequest *>(d->request);
}

/**
 * @brief  Parse a WAF CreateSqlInjectionMatchSet response.
 *
 * @param  response  Response to parse.
 */
void CreateSqlInjectionMatchSetResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateSqlInjectionMatchSetResponsePrivate
 *
 * @brief  Private implementation for CreateSqlInjectionMatchSetResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateSqlInjectionMatchSetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateSqlInjectionMatchSetResponse instance.
 */
CreateSqlInjectionMatchSetResponsePrivate::CreateSqlInjectionMatchSetResponsePrivate(
    CreateSqlInjectionMatchSetQueueResponse * const q) : CreateSqlInjectionMatchSetPrivate(q)
{

}

/**
 * @brief  Parse an WAF CreateSqlInjectionMatchSetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateSqlInjectionMatchSetResponsePrivate::CreateSqlInjectionMatchSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateSqlInjectionMatchSetResponse"));
    /// @todo
}
