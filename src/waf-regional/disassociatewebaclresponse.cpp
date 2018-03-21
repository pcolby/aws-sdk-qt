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

#include "disassociatewebaclresponse.h"
#include "disassociatewebaclresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace WAFRegional {

/**
 * @class  DisassociateWebACLResponse
 *
 * @brief  Handles WAFRegional DisassociateWebACL responses.
 *
 * @see    WAFRegionalClient::disassociateWebACL
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DisassociateWebACLResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFRegionalResponse(new DisassociateWebACLResponsePrivate(this), parent)
{
    setRequest(new DisassociateWebACLRequest(request));
    setReply(reply);
}

const DisassociateWebACLRequest * DisassociateWebACLResponse::request() const
{
    Q_D(const DisassociateWebACLResponse);
    return static_cast<const DisassociateWebACLRequest *>(d->request);
}

/**
 * @brief  Parse a WAFRegional DisassociateWebACL response.
 *
 * @param  response  Response to parse.
 */
void DisassociateWebACLResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DisassociateWebACLResponsePrivate
 *
 * @brief  Private implementation for DisassociateWebACLResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DisassociateWebACLResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DisassociateWebACLResponse instance.
 */
DisassociateWebACLResponsePrivate::DisassociateWebACLResponsePrivate(
    DisassociateWebACLQueueResponse * const q) : DisassociateWebACLPrivate(q)
{

}

/**
 * @brief  Parse an WAFRegional DisassociateWebACLResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DisassociateWebACLResponsePrivate::DisassociateWebACLResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateWebACLResponse"));
    /// @todo
}

} // namespace WAFRegional
} // namespace AWS
