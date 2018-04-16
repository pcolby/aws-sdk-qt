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

#include "updateapplicationversionresponse.h"
#include "updateapplicationversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticBeanstalk {

/*!
 * \class QtAws::ElasticBeanstalk::UpdateApplicationVersionResponse
 *
 * \brief The UpdateApplicationVersionResponse class encapsulates ElasticBeanstalk UpdateApplicationVersion responses.
 *
 * \ingroup ElasticBeanstalk
 *
 *  <fullname>AWS Elastic Beanstalk</fullname>
 * 
 *  AWS Elastic Beanstalk makes it easy for you to create, deploy, and manage scalable, fault-tolerant applications running
 *  on the Amazon Web Services
 * 
 *  cloud>
 * 
 *  For more information about this product, go to the <a href="http://aws.amazon.com/elasticbeanstalk/">AWS Elastic
 *  Beanstalk</a> details page. The location of the latest AWS Elastic Beanstalk WSDL is <a
 *  href="http://elasticbeanstalk.s3.amazonaws.com/doc/2010-12-01/AWSElasticBeanstalk.wsdl">http://elasticbeanstalk.s3.amazonaws.com/doc/2010-12-01/AWSElasticBeanstalk.wsdl</a>.
 *  To install the Software Development Kits (SDKs), Integrated Development Environment (IDE) Toolkits, and command line
 *  tools that enable you to access the API, go to <a href="http://aws.amazon.com/tools/">Tools for Amazon Web
 * 
 *  Services</a>>
 * 
 *  <b>Endpoints</b>
 * 
 *  </p
 * 
 *  For a list of region-specific endpoints that AWS Elastic Beanstalk supports, go to <a
 *  href="http://docs.aws.amazon.com/general/latest/gr/rande.html#elasticbeanstalk_region">Regions and Endpoints</a> in the
 *  <i>Amazon Web Services
 *
 * \sa ElasticBeanstalkClient::updateApplicationVersion
 */

/*!
 * @brief  Constructs a new UpdateApplicationVersionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateApplicationVersionResponse::UpdateApplicationVersionResponse(
        const UpdateApplicationVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticBeanstalkResponse(new UpdateApplicationVersionResponsePrivate(this), parent)
{
    setRequest(new UpdateApplicationVersionRequest(request));
    setReply(reply);
}

const UpdateApplicationVersionRequest * UpdateApplicationVersionResponse::request() const
{
    Q_D(const UpdateApplicationVersionResponse);
    return static_cast<const UpdateApplicationVersionRequest *>(d->request);
}

/*!
 * @brief  Parse a ElasticBeanstalk UpdateApplicationVersion response.
 *
 * @param  response  Response to parse.
 */
void UpdateApplicationVersionResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateApplicationVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class UpdateApplicationVersionResponsePrivate
 *
 * \brief Private implementation for UpdateApplicationVersionResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new UpdateApplicationVersionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateApplicationVersionResponse instance.
 */
UpdateApplicationVersionResponsePrivate::UpdateApplicationVersionResponsePrivate(
    UpdateApplicationVersionResponse * const q) : ElasticBeanstalkResponsePrivate(q)
{

}

/*!
 * @brief  Parse an ElasticBeanstalk UpdateApplicationVersionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateApplicationVersionResponsePrivate::parseUpdateApplicationVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateApplicationVersionResponse"));
    /// @todo
}

} // namespace ElasticBeanstalk
} // namespace QtAws
