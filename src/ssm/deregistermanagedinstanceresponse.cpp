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

#include "deregistermanagedinstanceresponse.h"
#include "deregistermanagedinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSM {

/**
 * @class  DeregisterManagedInstanceResponse
 *
 * @brief  Handles SSM DeregisterManagedInstance responses.
 *
 * @see    SSMClient::deregisterManagedInstance
 */

/**
 * @brief  Constructs a new DeregisterManagedInstanceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeregisterManagedInstanceResponse::DeregisterManagedInstanceResponse(
        const DeregisterManagedInstanceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMResponse(new DeregisterManagedInstanceResponsePrivate(this), parent)
{
    setRequest(new DeregisterManagedInstanceRequest(request));
    setReply(reply);
}

const DeregisterManagedInstanceRequest * DeregisterManagedInstanceResponse::request() const
{
    Q_D(const DeregisterManagedInstanceResponse);
    return static_cast<const DeregisterManagedInstanceRequest *>(d->request);
}

/**
 * @brief  Parse a SSM DeregisterManagedInstance response.
 *
 * @param  response  Response to parse.
 */
void DeregisterManagedInstanceResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeregisterManagedInstanceResponsePrivate
 *
 * @brief  Private implementation for DeregisterManagedInstanceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeregisterManagedInstanceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeregisterManagedInstanceResponse instance.
 */
DeregisterManagedInstanceResponsePrivate::DeregisterManagedInstanceResponsePrivate(
    DeregisterManagedInstanceQueueResponse * const q) : DeregisterManagedInstancePrivate(q)
{

}

/**
 * @brief  Parse an SSM DeregisterManagedInstanceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeregisterManagedInstanceResponsePrivate::DeregisterManagedInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeregisterManagedInstanceResponse"));
    /// @todo
}

} // namespace SSM
} // namespace QtAws
