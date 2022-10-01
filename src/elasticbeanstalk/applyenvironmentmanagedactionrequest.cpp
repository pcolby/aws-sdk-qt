// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "applyenvironmentmanagedactionrequest.h"
#include "applyenvironmentmanagedactionrequest_p.h"
#include "applyenvironmentmanagedactionresponse.h"
#include "elasticbeanstalkrequest_p.h"

namespace QtAws {
namespace ElasticBeanstalk {

/*!
 * \class QtAws::ElasticBeanstalk::ApplyEnvironmentManagedActionRequest
 * \brief The ApplyEnvironmentManagedActionRequest class provides an interface for ElasticBeanstalk ApplyEnvironmentManagedAction requests.
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
 *  href="https://elasticbeanstalk.s3.amazonaws.com/doc/2010-12-01/AWSElasticBeanstalk.wsdl">https://elasticbeanstalk.s3.amazonaws.com/doc/2010-12-01/AWSElasticBeanstalk.wsdl</a>.
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
 *  href="https://docs.aws.amazon.com/general/latest/gr/rande.html#elasticbeanstalk_region">Regions and Endpoints</a> in the
 *  <i>Amazon Web Services
 *
 * \sa ElasticBeanstalkClient::applyEnvironmentManagedAction
 */

/*!
 * Constructs a copy of \a other.
 */
ApplyEnvironmentManagedActionRequest::ApplyEnvironmentManagedActionRequest(const ApplyEnvironmentManagedActionRequest &other)
    : ElasticBeanstalkRequest(new ApplyEnvironmentManagedActionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ApplyEnvironmentManagedActionRequest object.
 */
ApplyEnvironmentManagedActionRequest::ApplyEnvironmentManagedActionRequest()
    : ElasticBeanstalkRequest(new ApplyEnvironmentManagedActionRequestPrivate(ElasticBeanstalkRequest::ApplyEnvironmentManagedActionAction, this))
{

}

/*!
 * \reimp
 */
bool ApplyEnvironmentManagedActionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ApplyEnvironmentManagedActionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ApplyEnvironmentManagedActionRequest::response(QNetworkReply * const reply) const
{
    return new ApplyEnvironmentManagedActionResponse(*this, reply);
}

/*!
 * \class QtAws::ElasticBeanstalk::ApplyEnvironmentManagedActionRequestPrivate
 * \brief The ApplyEnvironmentManagedActionRequestPrivate class provides private implementation for ApplyEnvironmentManagedActionRequest.
 * \internal
 *
 * \inmodule QtAwsElasticBeanstalk
 */

/*!
 * Constructs a ApplyEnvironmentManagedActionRequestPrivate object for ElasticBeanstalk \a action,
 * with public implementation \a q.
 */
ApplyEnvironmentManagedActionRequestPrivate::ApplyEnvironmentManagedActionRequestPrivate(
    const ElasticBeanstalkRequest::Action action, ApplyEnvironmentManagedActionRequest * const q)
    : ElasticBeanstalkRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ApplyEnvironmentManagedActionRequest
 * class' copy constructor.
 */
ApplyEnvironmentManagedActionRequestPrivate::ApplyEnvironmentManagedActionRequestPrivate(
    const ApplyEnvironmentManagedActionRequestPrivate &other, ApplyEnvironmentManagedActionRequest * const q)
    : ElasticBeanstalkRequestPrivate(other, q)
{

}

} // namespace ElasticBeanstalk
} // namespace QtAws
