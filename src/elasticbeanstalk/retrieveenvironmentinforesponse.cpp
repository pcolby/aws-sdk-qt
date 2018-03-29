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

#include "retrieveenvironmentinforesponse.h"
#include "retrieveenvironmentinforesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticBeanstalk {

/**
 * @class  RetrieveEnvironmentInfoResponse
 *
 * @brief  Handles ElasticBeanstalk RetrieveEnvironmentInfo responses.
 *
 * @see    ElasticBeanstalkClient::retrieveEnvironmentInfo
 */

/**
 * @brief  Constructs a new RetrieveEnvironmentInfoResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RetrieveEnvironmentInfoResponse::RetrieveEnvironmentInfoResponse(
        const RetrieveEnvironmentInfoRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticBeanstalkResponse(new RetrieveEnvironmentInfoResponsePrivate(this), parent)
{
    setRequest(new RetrieveEnvironmentInfoRequest(request));
    setReply(reply);
}

const RetrieveEnvironmentInfoRequest * RetrieveEnvironmentInfoResponse::request() const
{
    Q_D(const RetrieveEnvironmentInfoResponse);
    return static_cast<const RetrieveEnvironmentInfoRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticBeanstalk RetrieveEnvironmentInfo response.
 *
 * @param  response  Response to parse.
 */
void RetrieveEnvironmentInfoResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RetrieveEnvironmentInfoResponsePrivate
 *
 * @brief  Private implementation for RetrieveEnvironmentInfoResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RetrieveEnvironmentInfoResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RetrieveEnvironmentInfoResponse instance.
 */
RetrieveEnvironmentInfoResponsePrivate::RetrieveEnvironmentInfoResponsePrivate(
    RetrieveEnvironmentInfoResponse * const q) : ElasticBeanstalkResponsePrivate(q)
{

}

/**
 * @brief  Parse an ElasticBeanstalk RetrieveEnvironmentInfoResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RetrieveEnvironmentInfoResponsePrivate::RetrieveEnvironmentInfoResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RetrieveEnvironmentInfoResponse"));
    /// @todo
}

} // namespace ElasticBeanstalk
} // namespace QtAws
