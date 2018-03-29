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

#include "registerinstanceresponse.h"
#include "registerinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace OpsWorks {

/**
 * @class  RegisterInstanceResponse
 *
 * @brief  Handles OpsWorks RegisterInstance responses.
 *
 * @see    OpsWorksClient::registerInstance
 */

/**
 * @brief  Constructs a new RegisterInstanceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RegisterInstanceResponse::RegisterInstanceResponse(
        const RegisterInstanceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OpsWorksResponse(new RegisterInstanceResponsePrivate(this), parent)
{
    setRequest(new RegisterInstanceRequest(request));
    setReply(reply);
}

const RegisterInstanceRequest * RegisterInstanceResponse::request() const
{
    Q_D(const RegisterInstanceResponse);
    return static_cast<const RegisterInstanceRequest *>(d->request);
}

/**
 * @brief  Parse a OpsWorks RegisterInstance response.
 *
 * @param  response  Response to parse.
 */
void RegisterInstanceResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RegisterInstanceResponsePrivate
 *
 * @brief  Private implementation for RegisterInstanceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RegisterInstanceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RegisterInstanceResponse instance.
 */
RegisterInstanceResponsePrivate::RegisterInstanceResponsePrivate(
    RegisterInstanceResponse * const q) : OpsWorksResponsePrivate(q)
{

}

/**
 * @brief  Parse an OpsWorks RegisterInstanceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RegisterInstanceResponsePrivate::RegisterInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RegisterInstanceResponse"));
    /// @todo
}

} // namespace OpsWorks
} // namespace QtAws
