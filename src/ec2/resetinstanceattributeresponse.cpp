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

#include "resetinstanceattributeresponse.h"
#include "resetinstanceattributeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/**
 * @class  ResetInstanceAttributeResponse
 *
 * @brief  Handles EC2 ResetInstanceAttribute responses.
 *
 * @see    EC2Client::resetInstanceAttribute
 */

/**
 * @brief  Constructs a new ResetInstanceAttributeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ResetInstanceAttributeResponse::ResetInstanceAttributeResponse(
        const ResetInstanceAttributeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ResetInstanceAttributeResponse(new ResetInstanceAttributeResponsePrivate(this), parent)
{
    setRequest(new ResetInstanceAttributeRequest(request));
    setReply(reply);
}

const ResetInstanceAttributeRequest * ResetInstanceAttributeResponse::request() const
{
    Q_D(const ResetInstanceAttributeResponse);
    return static_cast<const ResetInstanceAttributeRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 ResetInstanceAttribute response.
 *
 * @param  response  Response to parse.
 */
void ResetInstanceAttributeResponse::parseSuccess(QIODevice &response)
{
    Q_D(ResetInstanceAttributeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ResetInstanceAttributeResponsePrivate
 *
 * @brief  Private implementation for ResetInstanceAttributeResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ResetInstanceAttributeResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ResetInstanceAttributeResponse instance.
 */
ResetInstanceAttributeResponsePrivate::ResetInstanceAttributeResponsePrivate(
    ResetInstanceAttributeResponse * const q) : EC2ResponsePrivate(q)
{

}

/**
 * @brief  Parse an EC2 ResetInstanceAttributeResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ResetInstanceAttributeResponsePrivate::parseResetInstanceAttributeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ResetInstanceAttributeResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
