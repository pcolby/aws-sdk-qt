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

#include "registerelasticipresponse.h"
#include "registerelasticipresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace OpsWorks {

/**
 * @class  RegisterElasticIpResponse
 *
 * @brief  Handles OpsWorks RegisterElasticIp responses.
 *
 * @see    OpsWorksClient::registerElasticIp
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RegisterElasticIpResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OpsWorksResponse(new RegisterElasticIpResponsePrivate(this), parent)
{
    setRequest(new RegisterElasticIpRequest(request));
    setReply(reply);
}

const RegisterElasticIpRequest * RegisterElasticIpResponse::request() const
{
    Q_D(const RegisterElasticIpResponse);
    return static_cast<const RegisterElasticIpRequest *>(d->request);
}

/**
 * @brief  Parse a OpsWorks RegisterElasticIp response.
 *
 * @param  response  Response to parse.
 */
void RegisterElasticIpResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RegisterElasticIpResponsePrivate
 *
 * @brief  Private implementation for RegisterElasticIpResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RegisterElasticIpResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RegisterElasticIpResponse instance.
 */
RegisterElasticIpResponsePrivate::RegisterElasticIpResponsePrivate(
    RegisterElasticIpQueueResponse * const q) : RegisterElasticIpPrivate(q)
{

}

/**
 * @brief  Parse an OpsWorks RegisterElasticIpResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RegisterElasticIpResponsePrivate::RegisterElasticIpResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RegisterElasticIpResponse"));
    /// @todo
}
