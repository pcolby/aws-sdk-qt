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

#include "disassociateelasticipresponse.h"
#include "disassociateelasticipresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace OpsWorks {

/**
 * @class  DisassociateElasticIpResponse
 *
 * @brief  Handles OpsWorks DisassociateElasticIp responses.
 *
 * @see    OpsWorksClient::disassociateElasticIp
 */

/**
 * @brief  Constructs a new DisassociateElasticIpResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DisassociateElasticIpResponse::DisassociateElasticIpResponse(
        const DisassociateElasticIpRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OpsWorksResponse(new DisassociateElasticIpResponsePrivate(this), parent)
{
    setRequest(new DisassociateElasticIpRequest(request));
    setReply(reply);
}

const DisassociateElasticIpRequest * DisassociateElasticIpResponse::request() const
{
    Q_D(const DisassociateElasticIpResponse);
    return static_cast<const DisassociateElasticIpRequest *>(d->request);
}

/**
 * @brief  Parse a OpsWorks DisassociateElasticIp response.
 *
 * @param  response  Response to parse.
 */
void DisassociateElasticIpResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DisassociateElasticIpResponsePrivate
 *
 * @brief  Private implementation for DisassociateElasticIpResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DisassociateElasticIpResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DisassociateElasticIpResponse instance.
 */
DisassociateElasticIpResponsePrivate::DisassociateElasticIpResponsePrivate(
    DisassociateElasticIpQueueResponse * const q) : DisassociateElasticIpPrivate(q)
{

}

/**
 * @brief  Parse an OpsWorks DisassociateElasticIpResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DisassociateElasticIpResponsePrivate::DisassociateElasticIpResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateElasticIpResponse"));
    /// @todo
}

} // namespace OpsWorks
} // namespace QtAws
