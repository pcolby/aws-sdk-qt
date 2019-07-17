/*
    Copyright 2013-2019 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "checkdnsavailabilityrequest.h"
#include "checkdnsavailabilityrequest_p.h"
#include "checkdnsavailabilityresponse.h"
#include "elasticbeanstalkrequest_p.h"

namespace QtAws {
namespace ElasticBeanstalk {

/*!
 * \class QtAws::ElasticBeanstalk::CheckDNSAvailabilityRequest
 * \brief The CheckDNSAvailabilityRequest class provides an interface for ElasticBeanstalk CheckDNSAvailability requests.
 *
 * \inmodule QtAwsElasticBeanstalk
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
 * \sa ElasticBeanstalkClient::checkDNSAvailability
 */

/*!
 * Constructs a copy of \a other.
 */
CheckDNSAvailabilityRequest::CheckDNSAvailabilityRequest(const CheckDNSAvailabilityRequest &other)
    : ElasticBeanstalkRequest(new CheckDNSAvailabilityRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CheckDNSAvailabilityRequest object.
 */
CheckDNSAvailabilityRequest::CheckDNSAvailabilityRequest()
    : ElasticBeanstalkRequest(new CheckDNSAvailabilityRequestPrivate(ElasticBeanstalkRequest::CheckDNSAvailabilityAction, this))
{

}

/*!
 * \reimp
 */
bool CheckDNSAvailabilityRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CheckDNSAvailabilityResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CheckDNSAvailabilityRequest::response(QNetworkReply * const reply) const
{
    return new CheckDNSAvailabilityResponse(*this, reply);
}

/*!
 * \class QtAws::ElasticBeanstalk::CheckDNSAvailabilityRequestPrivate
 * \brief The CheckDNSAvailabilityRequestPrivate class provides private implementation for CheckDNSAvailabilityRequest.
 * \internal
 *
 * \inmodule QtAwsElasticBeanstalk
 */

/*!
 * Constructs a CheckDNSAvailabilityRequestPrivate object for ElasticBeanstalk \a action,
 * with public implementation \a q.
 */
CheckDNSAvailabilityRequestPrivate::CheckDNSAvailabilityRequestPrivate(
    const ElasticBeanstalkRequest::Action action, CheckDNSAvailabilityRequest * const q)
    : ElasticBeanstalkRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CheckDNSAvailabilityRequest
 * class' copy constructor.
 */
CheckDNSAvailabilityRequestPrivate::CheckDNSAvailabilityRequestPrivate(
    const CheckDNSAvailabilityRequestPrivate &other, CheckDNSAvailabilityRequest * const q)
    : ElasticBeanstalkRequestPrivate(other, q)
{

}

} // namespace ElasticBeanstalk
} // namespace QtAws
