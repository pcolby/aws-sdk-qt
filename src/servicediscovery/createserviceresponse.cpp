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

#include "createserviceresponse.h"
#include "createserviceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceDiscovery {

/*!
 * \class QtAws::ServiceDiscovery::CreateServiceResponse
 *
 * \brief The CreateServiceResponse class encapsulates ServiceDiscovery CreateService responses.
 *
 * \ingroup ServiceDiscovery
 *
 *  Amazon Route 53 auto naming lets you configure public or private namespaces that your microservice applications run in.
 *  When instances of the service become available, you can call the auto naming API to register the instance, and Route 53
 *  automatically creates up to five DNS records and an optional health check. Clients that submit DNS queries for the
 *  service receive an answer that contains up to eight healthy
 *
 * \sa ServiceDiscoveryClient::createService
 */

/*!
 * @brief  Constructs a new CreateServiceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateServiceResponse::CreateServiceResponse(
        const CreateServiceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceDiscoveryResponse(new CreateServiceResponsePrivate(this), parent)
{
    setRequest(new CreateServiceRequest(request));
    setReply(reply);
}

const CreateServiceRequest * CreateServiceResponse::request() const
{
    Q_D(const CreateServiceResponse);
    return static_cast<const CreateServiceRequest *>(d->request);
}

/*!
 * @brief  Parse a ServiceDiscovery CreateService response.
 *
 * @param  response  Response to parse.
 */
void CreateServiceResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateServiceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class CreateServiceResponsePrivate
 *
 * \brief Private implementation for CreateServiceResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateServiceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateServiceResponse instance.
 */
CreateServiceResponsePrivate::CreateServiceResponsePrivate(
    CreateServiceResponse * const q) : ServiceDiscoveryResponsePrivate(q)
{

}

/*!
 * @brief  Parse an ServiceDiscovery CreateServiceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateServiceResponsePrivate::parseCreateServiceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateServiceResponse"));
    /// @todo
}

} // namespace ServiceDiscovery
} // namespace QtAws
