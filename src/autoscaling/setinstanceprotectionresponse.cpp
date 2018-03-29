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

#include "setinstanceprotectionresponse.h"
#include "setinstanceprotectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScaling {

/**
 * @class  SetInstanceProtectionResponse
 *
 * @brief  Handles AutoScaling SetInstanceProtection responses.
 *
 * @see    AutoScalingClient::setInstanceProtection
 */

/**
 * @brief  Constructs a new SetInstanceProtectionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SetInstanceProtectionResponse::SetInstanceProtectionResponse(
        const SetInstanceProtectionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SetInstanceProtectionResponse(new SetInstanceProtectionResponsePrivate(this), parent)
{
    setRequest(new SetInstanceProtectionRequest(request));
    setReply(reply);
}

const SetInstanceProtectionRequest * SetInstanceProtectionResponse::request() const
{
    Q_D(const SetInstanceProtectionResponse);
    return static_cast<const SetInstanceProtectionRequest *>(d->request);
}

/**
 * @brief  Parse a AutoScaling SetInstanceProtection response.
 *
 * @param  response  Response to parse.
 */
void SetInstanceProtectionResponse::parseSuccess(QIODevice &response)
{
    Q_D(SetInstanceProtectionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  SetInstanceProtectionResponsePrivate
 *
 * @brief  Private implementation for SetInstanceProtectionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SetInstanceProtectionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SetInstanceProtectionResponse instance.
 */
SetInstanceProtectionResponsePrivate::SetInstanceProtectionResponsePrivate(
    SetInstanceProtectionResponse * const q) : AutoScalingResponsePrivate(q)
{

}

/**
 * @brief  Parse an AutoScaling SetInstanceProtectionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SetInstanceProtectionResponsePrivate::parseSetInstanceProtectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SetInstanceProtectionResponse"));
    /// @todo
}

} // namespace AutoScaling
} // namespace QtAws
