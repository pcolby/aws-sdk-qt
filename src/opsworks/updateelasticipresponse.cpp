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

#include "updateelasticipresponse.h"
#include "updateelasticipresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace OpsWorks {

/**
 * @class  UpdateElasticIpResponse
 *
 * @brief  Handles OpsWorks UpdateElasticIp responses.
 *
 * @see    OpsWorksClient::updateElasticIp
 */

/**
 * @brief  Constructs a new UpdateElasticIpResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateElasticIpResponse::UpdateElasticIpResponse(
        const UpdateElasticIpRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OpsWorksResponse(new UpdateElasticIpResponsePrivate(this), parent)
{
    setRequest(new UpdateElasticIpRequest(request));
    setReply(reply);
}

const UpdateElasticIpRequest * UpdateElasticIpResponse::request() const
{
    Q_D(const UpdateElasticIpResponse);
    return static_cast<const UpdateElasticIpRequest *>(d->request);
}

/**
 * @brief  Parse a OpsWorks UpdateElasticIp response.
 *
 * @param  response  Response to parse.
 */
void UpdateElasticIpResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateElasticIpResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateElasticIpResponsePrivate
 *
 * @brief  Private implementation for UpdateElasticIpResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateElasticIpResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateElasticIpResponse instance.
 */
UpdateElasticIpResponsePrivate::UpdateElasticIpResponsePrivate(
    UpdateElasticIpResponse * const q) : OpsWorksResponsePrivate(q)
{

}

/**
 * @brief  Parse an OpsWorks UpdateElasticIpResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateElasticIpResponsePrivate::parseUpdateElasticIpResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateElasticIpResponse"));
    /// @todo
}

} // namespace OpsWorks
} // namespace QtAws
