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

#include "assigninstanceresponse.h"
#include "assigninstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace OpsWorks {

/**
 * @class  AssignInstanceResponse
 *
 * @brief  Handles OpsWorks AssignInstance responses.
 *
 * @see    OpsWorksClient::assignInstance
 */

/**
 * @brief  Constructs a new AssignInstanceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AssignInstanceResponse::AssignInstanceResponse(
        const AssignInstanceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OpsWorksResponse(new AssignInstanceResponsePrivate(this), parent)
{
    setRequest(new AssignInstanceRequest(request));
    setReply(reply);
}

const AssignInstanceRequest * AssignInstanceResponse::request() const
{
    Q_D(const AssignInstanceResponse);
    return static_cast<const AssignInstanceRequest *>(d->request);
}

/**
 * @brief  Parse a OpsWorks AssignInstance response.
 *
 * @param  response  Response to parse.
 */
void AssignInstanceResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AssignInstanceResponsePrivate
 *
 * @brief  Private implementation for AssignInstanceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AssignInstanceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AssignInstanceResponse instance.
 */
AssignInstanceResponsePrivate::AssignInstanceResponsePrivate(
    AssignInstanceResponse * const q) : OpsWorksResponsePrivate(q)
{

}

/**
 * @brief  Parse an OpsWorks AssignInstanceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AssignInstanceResponsePrivate::AssignInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssignInstanceResponse"));
    /// @todo
}

} // namespace OpsWorks
} // namespace QtAws
