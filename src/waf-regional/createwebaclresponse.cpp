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

#include "createwebaclresponse.h"
#include "createwebaclresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace WAFRegional {

/**
 * @class  CreateWebACLResponse
 *
 * @brief  Handles WAFRegional CreateWebACL responses.
 *
 * @see    WAFRegionalClient::createWebACL
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateWebACLResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFRegionalResponse(new CreateWebACLResponsePrivate(this), parent)
{
    setRequest(new CreateWebACLRequest(request));
    setReply(reply);
}

const CreateWebACLRequest * CreateWebACLResponse::request() const
{
    Q_D(const CreateWebACLResponse);
    return static_cast<const CreateWebACLRequest *>(d->request);
}

/**
 * @brief  Parse a WAFRegional CreateWebACL response.
 *
 * @param  response  Response to parse.
 */
void CreateWebACLResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateWebACLResponsePrivate
 *
 * @brief  Private implementation for CreateWebACLResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateWebACLResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateWebACLResponse instance.
 */
CreateWebACLResponsePrivate::CreateWebACLResponsePrivate(
    CreateWebACLQueueResponse * const q) : CreateWebACLPrivate(q)
{

}

/**
 * @brief  Parse an WAFRegional CreateWebACLResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateWebACLResponsePrivate::CreateWebACLResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateWebACLResponse"));
    /// @todo
}

} // namespace WAFRegional
} // namespace AWS
