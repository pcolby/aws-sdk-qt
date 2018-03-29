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

#include "startdbinstanceresponse.h"
#include "startdbinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RDS {

/**
 * @class  StartDBInstanceResponse
 *
 * @brief  Handles RDS StartDBInstance responses.
 *
 * @see    RDSClient::startDBInstance
 */

/**
 * @brief  Constructs a new StartDBInstanceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StartDBInstanceResponse::StartDBInstanceResponse(
        const StartDBInstanceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RDSResponse(new StartDBInstanceResponsePrivate(this), parent)
{
    setRequest(new StartDBInstanceRequest(request));
    setReply(reply);
}

const StartDBInstanceRequest * StartDBInstanceResponse::request() const
{
    Q_D(const StartDBInstanceResponse);
    return static_cast<const StartDBInstanceRequest *>(d->request);
}

/**
 * @brief  Parse a RDS StartDBInstance response.
 *
 * @param  response  Response to parse.
 */
void StartDBInstanceResponse::parseSuccess(QIODevice &response)
{
    Q_D(StartDBInstanceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  StartDBInstanceResponsePrivate
 *
 * @brief  Private implementation for StartDBInstanceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartDBInstanceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public StartDBInstanceResponse instance.
 */
StartDBInstanceResponsePrivate::StartDBInstanceResponsePrivate(
    StartDBInstanceResponse * const q) : RDSResponsePrivate(q)
{

}

/**
 * @brief  Parse an RDS StartDBInstanceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void StartDBInstanceResponsePrivate::parseStartDBInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartDBInstanceResponse"));
    /// @todo
}

} // namespace RDS
} // namespace QtAws
