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

#include "deleteconfigurationtemplateresponse.h"
#include "deleteconfigurationtemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticBeanstalk {

/**
 * @class  DeleteConfigurationTemplateResponse
 *
 * @brief  Handles ElasticBeanstalk DeleteConfigurationTemplate responses.
 *
 * @see    ElasticBeanstalkClient::deleteConfigurationTemplate
 */

/**
 * @brief  Constructs a new DeleteConfigurationTemplateResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteConfigurationTemplateResponse::DeleteConfigurationTemplateResponse(
        const DeleteConfigurationTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticBeanstalkResponse(new DeleteConfigurationTemplateResponsePrivate(this), parent)
{
    setRequest(new DeleteConfigurationTemplateRequest(request));
    setReply(reply);
}

const DeleteConfigurationTemplateRequest * DeleteConfigurationTemplateResponse::request() const
{
    Q_D(const DeleteConfigurationTemplateResponse);
    return static_cast<const DeleteConfigurationTemplateRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticBeanstalk DeleteConfigurationTemplate response.
 *
 * @param  response  Response to parse.
 */
void DeleteConfigurationTemplateResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteConfigurationTemplateResponsePrivate
 *
 * @brief  Private implementation for DeleteConfigurationTemplateResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteConfigurationTemplateResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteConfigurationTemplateResponse instance.
 */
DeleteConfigurationTemplateResponsePrivate::DeleteConfigurationTemplateResponsePrivate(
    DeleteConfigurationTemplateQueueResponse * const q) : DeleteConfigurationTemplatePrivate(q)
{

}

/**
 * @brief  Parse an ElasticBeanstalk DeleteConfigurationTemplateResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteConfigurationTemplateResponsePrivate::DeleteConfigurationTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteConfigurationTemplateResponse"));
    /// @todo
}

} // namespace ElasticBeanstalk
} // namespace QtAws
