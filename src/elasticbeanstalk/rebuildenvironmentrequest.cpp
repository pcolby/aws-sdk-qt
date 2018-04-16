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

#include "rebuildenvironmentrequest.h"
#include "rebuildenvironmentrequest_p.h"
#include "rebuildenvironmentresponse.h"
#include "elasticbeanstalkrequest_p.h"

namespace QtAws {
namespace ElasticBeanstalk {

/*!
 * \class QtAws::ElasticBeanstalk::RebuildEnvironmentRequest
 *
 * \brief The RebuildEnvironmentRequest class provides an interface for ElasticBeanstalk RebuildEnvironment requests.
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
 * \sa ElasticBeanstalkClient::rebuildEnvironment
 */

/*!
 * @brief  Constructs a new RebuildEnvironmentRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RebuildEnvironmentRequest::RebuildEnvironmentRequest(const RebuildEnvironmentRequest &other)
    : ElasticBeanstalkRequest(new RebuildEnvironmentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new RebuildEnvironmentRequest object.
 */
RebuildEnvironmentRequest::RebuildEnvironmentRequest()
    : ElasticBeanstalkRequest(new RebuildEnvironmentRequestPrivate(ElasticBeanstalkRequest::RebuildEnvironmentAction, this))
{

}

/*!
 * \reimp
 */
bool RebuildEnvironmentRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an RebuildEnvironmentResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RebuildEnvironmentResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ElasticBeanstalkClient::send
 */
QtAws::Core::AwsAbstractResponse * RebuildEnvironmentRequest::response(QNetworkReply * const reply) const
{
    return new RebuildEnvironmentResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  RebuildEnvironmentRequestPrivate
 *
 * @brief  Private implementation for RebuildEnvironmentRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new RebuildEnvironmentRequestPrivate object.
 *
 * @param  action  ElasticBeanstalk action being performed.
 * @param  q       Pointer to this object's public RebuildEnvironmentRequest instance.
 */
RebuildEnvironmentRequestPrivate::RebuildEnvironmentRequestPrivate(
    const ElasticBeanstalkRequest::Action action, RebuildEnvironmentRequest * const q)
    : ElasticBeanstalkRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new RebuildEnvironmentRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RebuildEnvironmentRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RebuildEnvironmentRequest instance.
 */
RebuildEnvironmentRequestPrivate::RebuildEnvironmentRequestPrivate(
    const RebuildEnvironmentRequestPrivate &other, RebuildEnvironmentRequest * const q)
    : ElasticBeanstalkRequestPrivate(other, q)
{

}

} // namespace ElasticBeanstalk
} // namespace QtAws
