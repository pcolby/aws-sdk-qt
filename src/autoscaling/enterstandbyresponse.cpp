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

#include "enterstandbyresponse.h"
#include "enterstandbyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScaling {

/**
 * @class  EnterStandbyResponse
 *
 * @brief  Handles AutoScaling EnterStandby responses.
 *
 * @see    AutoScalingClient::enterStandby
 */

/**
 * @brief  Constructs a new EnterStandbyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
EnterStandbyResponse::EnterStandbyResponse(
        const EnterStandbyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EnterStandbyResponse(new EnterStandbyResponsePrivate(this), parent)
{
    setRequest(new EnterStandbyRequest(request));
    setReply(reply);
}

const EnterStandbyRequest * EnterStandbyResponse::request() const
{
    Q_D(const EnterStandbyResponse);
    return static_cast<const EnterStandbyRequest *>(d->request);
}

/**
 * @brief  Parse a AutoScaling EnterStandby response.
 *
 * @param  response  Response to parse.
 */
void EnterStandbyResponse::parseSuccess(QIODevice &response)
{
    Q_D(EnterStandbyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  EnterStandbyResponsePrivate
 *
 * @brief  Private implementation for EnterStandbyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new EnterStandbyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public EnterStandbyResponse instance.
 */
EnterStandbyResponsePrivate::EnterStandbyResponsePrivate(
    EnterStandbyResponse * const q) : AutoScalingResponsePrivate(q)
{

}

/**
 * @brief  Parse an AutoScaling EnterStandbyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void EnterStandbyResponsePrivate::parseEnterStandbyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("EnterStandbyResponse"));
    /// @todo
}

} // namespace AutoScaling
} // namespace QtAws
