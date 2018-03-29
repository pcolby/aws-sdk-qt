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

#include "deleteserviceresponse.h"
#include "deleteserviceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceDiscovery {

/**
 * @class  DeleteServiceResponse
 *
 * @brief  Handles ServiceDiscovery DeleteService responses.
 *
 * @see    ServiceDiscoveryClient::deleteService
 */

/**
 * @brief  Constructs a new DeleteServiceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteServiceResponse::DeleteServiceResponse(
        const DeleteServiceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeleteServiceResponse(new DeleteServiceResponsePrivate(this), parent)
{
    setRequest(new DeleteServiceRequest(request));
    setReply(reply);
}

const DeleteServiceRequest * DeleteServiceResponse::request() const
{
    Q_D(const DeleteServiceResponse);
    return static_cast<const DeleteServiceRequest *>(d->request);
}

/**
 * @brief  Parse a ServiceDiscovery DeleteService response.
 *
 * @param  response  Response to parse.
 */
void DeleteServiceResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteServiceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteServiceResponsePrivate
 *
 * @brief  Private implementation for DeleteServiceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteServiceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteServiceResponse instance.
 */
DeleteServiceResponsePrivate::DeleteServiceResponsePrivate(
    DeleteServiceResponse * const q) : ServiceDiscoveryResponsePrivate(q)
{

}

/**
 * @brief  Parse an ServiceDiscovery DeleteServiceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteServiceResponsePrivate::parseDeleteServiceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteServiceResponse"));
    /// @todo
}

} // namespace ServiceDiscovery
} // namespace QtAws
