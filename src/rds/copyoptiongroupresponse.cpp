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

#include "copyoptiongroupresponse.h"
#include "copyoptiongroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RDS {

/**
 * @class  CopyOptionGroupResponse
 *
 * @brief  Handles RDS CopyOptionGroup responses.
 *
 * @see    RDSClient::copyOptionGroup
 */

/**
 * @brief  Constructs a new CopyOptionGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CopyOptionGroupResponse::CopyOptionGroupResponse(
        const CopyOptionGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RDSResponse(new CopyOptionGroupResponsePrivate(this), parent)
{
    setRequest(new CopyOptionGroupRequest(request));
    setReply(reply);
}

const CopyOptionGroupRequest * CopyOptionGroupResponse::request() const
{
    Q_D(const CopyOptionGroupResponse);
    return static_cast<const CopyOptionGroupRequest *>(d->request);
}

/**
 * @brief  Parse a RDS CopyOptionGroup response.
 *
 * @param  response  Response to parse.
 */
void CopyOptionGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(CopyOptionGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CopyOptionGroupResponsePrivate
 *
 * @brief  Private implementation for CopyOptionGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CopyOptionGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CopyOptionGroupResponse instance.
 */
CopyOptionGroupResponsePrivate::CopyOptionGroupResponsePrivate(
    CopyOptionGroupResponse * const q) : RDSResponsePrivate(q)
{

}

/**
 * @brief  Parse an RDS CopyOptionGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CopyOptionGroupResponsePrivate::parseCopyOptionGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CopyOptionGroupResponse"));
    /// @todo
}

} // namespace RDS
} // namespace QtAws
