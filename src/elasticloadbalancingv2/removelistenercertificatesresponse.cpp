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

#include "removelistenercertificatesresponse.h"
#include "removelistenercertificatesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticLoadBalancingv2 {

/**
 * @class  RemoveListenerCertificatesResponse
 *
 * @brief  Handles ElasticLoadBalancingv2 RemoveListenerCertificates responses.
 *
 * @see    ElasticLoadBalancingv2Client::removeListenerCertificates
 */

/**
 * @brief  Constructs a new RemoveListenerCertificatesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RemoveListenerCertificatesResponse::RemoveListenerCertificatesResponse(
        const RemoveListenerCertificatesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RemoveListenerCertificatesResponse(new RemoveListenerCertificatesResponsePrivate(this), parent)
{
    setRequest(new RemoveListenerCertificatesRequest(request));
    setReply(reply);
}

const RemoveListenerCertificatesRequest * RemoveListenerCertificatesResponse::request() const
{
    Q_D(const RemoveListenerCertificatesResponse);
    return static_cast<const RemoveListenerCertificatesRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticLoadBalancingv2 RemoveListenerCertificates response.
 *
 * @param  response  Response to parse.
 */
void RemoveListenerCertificatesResponse::parseSuccess(QIODevice &response)
{
    Q_D(RemoveListenerCertificatesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RemoveListenerCertificatesResponsePrivate
 *
 * @brief  Private implementation for RemoveListenerCertificatesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RemoveListenerCertificatesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RemoveListenerCertificatesResponse instance.
 */
RemoveListenerCertificatesResponsePrivate::RemoveListenerCertificatesResponsePrivate(
    RemoveListenerCertificatesResponse * const q) : ElasticLoadBalancingv2ResponsePrivate(q)
{

}

/**
 * @brief  Parse an ElasticLoadBalancingv2 RemoveListenerCertificatesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RemoveListenerCertificatesResponsePrivate::parseRemoveListenerCertificatesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RemoveListenerCertificatesResponse"));
    /// @todo
}

} // namespace ElasticLoadBalancingv2
} // namespace QtAws
