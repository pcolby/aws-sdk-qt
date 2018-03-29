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

#include "applyenvironmentmanagedactionresponse.h"
#include "applyenvironmentmanagedactionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticBeanstalk {

/**
 * @class  ApplyEnvironmentManagedActionResponse
 *
 * @brief  Handles ElasticBeanstalk ApplyEnvironmentManagedAction responses.
 *
 * @see    ElasticBeanstalkClient::applyEnvironmentManagedAction
 */

/**
 * @brief  Constructs a new ApplyEnvironmentManagedActionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ApplyEnvironmentManagedActionResponse::ApplyEnvironmentManagedActionResponse(
        const ApplyEnvironmentManagedActionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApplyEnvironmentManagedActionResponse(new ApplyEnvironmentManagedActionResponsePrivate(this), parent)
{
    setRequest(new ApplyEnvironmentManagedActionRequest(request));
    setReply(reply);
}

const ApplyEnvironmentManagedActionRequest * ApplyEnvironmentManagedActionResponse::request() const
{
    Q_D(const ApplyEnvironmentManagedActionResponse);
    return static_cast<const ApplyEnvironmentManagedActionRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticBeanstalk ApplyEnvironmentManagedAction response.
 *
 * @param  response  Response to parse.
 */
void ApplyEnvironmentManagedActionResponse::parseSuccess(QIODevice &response)
{
    Q_D(ApplyEnvironmentManagedActionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ApplyEnvironmentManagedActionResponsePrivate
 *
 * @brief  Private implementation for ApplyEnvironmentManagedActionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ApplyEnvironmentManagedActionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ApplyEnvironmentManagedActionResponse instance.
 */
ApplyEnvironmentManagedActionResponsePrivate::ApplyEnvironmentManagedActionResponsePrivate(
    ApplyEnvironmentManagedActionResponse * const q) : ElasticBeanstalkResponsePrivate(q)
{

}

/**
 * @brief  Parse an ElasticBeanstalk ApplyEnvironmentManagedActionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ApplyEnvironmentManagedActionResponsePrivate::parseApplyEnvironmentManagedActionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ApplyEnvironmentManagedActionResponse"));
    /// @todo
}

} // namespace ElasticBeanstalk
} // namespace QtAws
