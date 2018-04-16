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

#include "validateconfigurationsettingsrequest.h"
#include "validateconfigurationsettingsrequest_p.h"
#include "validateconfigurationsettingsresponse.h"
#include "elasticbeanstalkrequest_p.h"

namespace QtAws {
namespace ElasticBeanstalk {

/*!
 * \class QtAws::ElasticBeanstalk::ValidateConfigurationSettingsRequest
 *
 * \brief The ValidateConfigurationSettingsRequest class encapsulates ElasticBeanstalk ValidateConfigurationSettings requests.
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
 * \sa ElasticBeanstalkClient::validateConfigurationSettings
 */

/*!
 * @brief  Constructs a new ValidateConfigurationSettingsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ValidateConfigurationSettingsRequest::ValidateConfigurationSettingsRequest(const ValidateConfigurationSettingsRequest &other)
    : ElasticBeanstalkRequest(new ValidateConfigurationSettingsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ValidateConfigurationSettingsRequest object.
 */
ValidateConfigurationSettingsRequest::ValidateConfigurationSettingsRequest()
    : ElasticBeanstalkRequest(new ValidateConfigurationSettingsRequestPrivate(ElasticBeanstalkRequest::ValidateConfigurationSettingsAction, this))
{

}

/*!
 * \reimp
 */
bool ValidateConfigurationSettingsRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ValidateConfigurationSettingsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ValidateConfigurationSettingsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ElasticBeanstalkClient::send
 */
QtAws::Core::AwsAbstractResponse * ValidateConfigurationSettingsRequest::response(QNetworkReply * const reply) const
{
    return new ValidateConfigurationSettingsResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ValidateConfigurationSettingsRequestPrivate
 *
 * @brief  Private implementation for ValidateConfigurationSettingsRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ValidateConfigurationSettingsRequestPrivate object.
 *
 * @param  action  ElasticBeanstalk action being performed.
 * @param  q       Pointer to this object's public ValidateConfigurationSettingsRequest instance.
 */
ValidateConfigurationSettingsRequestPrivate::ValidateConfigurationSettingsRequestPrivate(
    const ElasticBeanstalkRequest::Action action, ValidateConfigurationSettingsRequest * const q)
    : ElasticBeanstalkRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ValidateConfigurationSettingsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ValidateConfigurationSettingsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ValidateConfigurationSettingsRequest instance.
 */
ValidateConfigurationSettingsRequestPrivate::ValidateConfigurationSettingsRequestPrivate(
    const ValidateConfigurationSettingsRequestPrivate &other, ValidateConfigurationSettingsRequest * const q)
    : ElasticBeanstalkRequestPrivate(other, q)
{

}

} // namespace ElasticBeanstalk
} // namespace QtAws
