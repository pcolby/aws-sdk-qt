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

#include "requestenvironmentinforesponse.h"
#include "requestenvironmentinforesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticBeanstalk {

/**
 * @class  RequestEnvironmentInfoResponse
 *
 * @brief  Handles ElasticBeanstalk RequestEnvironmentInfo responses.
 *
 * @see    ElasticBeanstalkClient::requestEnvironmentInfo
 */

/**
 * @brief  Constructs a new RequestEnvironmentInfoResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RequestEnvironmentInfoResponse::RequestEnvironmentInfoResponse(
        const RequestEnvironmentInfoRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RequestEnvironmentInfoResponse(new RequestEnvironmentInfoResponsePrivate(this), parent)
{
    setRequest(new RequestEnvironmentInfoRequest(request));
    setReply(reply);
}

const RequestEnvironmentInfoRequest * RequestEnvironmentInfoResponse::request() const
{
    Q_D(const RequestEnvironmentInfoResponse);
    return static_cast<const RequestEnvironmentInfoRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticBeanstalk RequestEnvironmentInfo response.
 *
 * @param  response  Response to parse.
 */
void RequestEnvironmentInfoResponse::parseSuccess(QIODevice &response)
{
    Q_D(RequestEnvironmentInfoResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RequestEnvironmentInfoResponsePrivate
 *
 * @brief  Private implementation for RequestEnvironmentInfoResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RequestEnvironmentInfoResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RequestEnvironmentInfoResponse instance.
 */
RequestEnvironmentInfoResponsePrivate::RequestEnvironmentInfoResponsePrivate(
    RequestEnvironmentInfoResponse * const q) : ElasticBeanstalkResponsePrivate(q)
{

}

/**
 * @brief  Parse an ElasticBeanstalk RequestEnvironmentInfoResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RequestEnvironmentInfoResponsePrivate::parseRequestEnvironmentInfoResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RequestEnvironmentInfoResponse"));
    /// @todo
}

} // namespace ElasticBeanstalk
} // namespace QtAws
