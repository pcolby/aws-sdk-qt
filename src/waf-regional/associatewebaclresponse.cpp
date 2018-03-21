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

#include "associatewebaclresponse.h"
#include "associatewebaclresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace WAFRegional {

/**
 * @class  AssociateWebACLResponse
 *
 * @brief  Handles WAFRegional AssociateWebACL responses.
 *
 * @see    WAFRegionalClient::associateWebACL
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AssociateWebACLResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFRegionalResponse(new AssociateWebACLResponsePrivate(this), parent)
{
    setRequest(new AssociateWebACLRequest(request));
    setReply(reply);
}

const AssociateWebACLRequest * AssociateWebACLResponse::request() const
{
    Q_D(const AssociateWebACLResponse);
    return static_cast<const AssociateWebACLRequest *>(d->request);
}

/**
 * @brief  Parse a WAFRegional AssociateWebACL response.
 *
 * @param  response  Response to parse.
 */
void AssociateWebACLResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AssociateWebACLResponsePrivate
 *
 * @brief  Private implementation for AssociateWebACLResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AssociateWebACLResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AssociateWebACLResponse instance.
 */
AssociateWebACLResponsePrivate::AssociateWebACLResponsePrivate(
    AssociateWebACLQueueResponse * const q) : AssociateWebACLPrivate(q)
{

}

/**
 * @brief  Parse an WAFRegional AssociateWebACLResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AssociateWebACLResponsePrivate::AssociateWebACLResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateWebACLResponse"));
    /// @todo
}
