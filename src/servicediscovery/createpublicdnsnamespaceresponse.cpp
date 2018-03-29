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

#include "createpublicdnsnamespaceresponse.h"
#include "createpublicdnsnamespaceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceDiscovery {

/**
 * @class  CreatePublicDnsNamespaceResponse
 *
 * @brief  Handles ServiceDiscovery CreatePublicDnsNamespace responses.
 *
 * @see    ServiceDiscoveryClient::createPublicDnsNamespace
 */

/**
 * @brief  Constructs a new CreatePublicDnsNamespaceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreatePublicDnsNamespaceResponse::CreatePublicDnsNamespaceResponse(
        const CreatePublicDnsNamespaceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceDiscoveryResponse(new CreatePublicDnsNamespaceResponsePrivate(this), parent)
{
    setRequest(new CreatePublicDnsNamespaceRequest(request));
    setReply(reply);
}

const CreatePublicDnsNamespaceRequest * CreatePublicDnsNamespaceResponse::request() const
{
    Q_D(const CreatePublicDnsNamespaceResponse);
    return static_cast<const CreatePublicDnsNamespaceRequest *>(d->request);
}

/**
 * @brief  Parse a ServiceDiscovery CreatePublicDnsNamespace response.
 *
 * @param  response  Response to parse.
 */
void CreatePublicDnsNamespaceResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreatePublicDnsNamespaceResponsePrivate
 *
 * @brief  Private implementation for CreatePublicDnsNamespaceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreatePublicDnsNamespaceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreatePublicDnsNamespaceResponse instance.
 */
CreatePublicDnsNamespaceResponsePrivate::CreatePublicDnsNamespaceResponsePrivate(
    CreatePublicDnsNamespaceResponse * const q) : ServiceDiscoveryResponsePrivate(q)
{

}

/**
 * @brief  Parse an ServiceDiscovery CreatePublicDnsNamespaceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreatePublicDnsNamespaceResponsePrivate::CreatePublicDnsNamespaceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreatePublicDnsNamespaceResponse"));
    /// @todo
}

} // namespace ServiceDiscovery
} // namespace QtAws
