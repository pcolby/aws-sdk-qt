// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listplatformbranchesrequest.h"
#include "listplatformbranchesrequest_p.h"
#include "listplatformbranchesresponse.h"
#include "elasticbeanstalkrequest_p.h"

namespace QtAws {
namespace ElasticBeanstalk {

/*!
 * \class QtAws::ElasticBeanstalk::ListPlatformBranchesRequest
 * \brief The ListPlatformBranchesRequest class provides an interface for ElasticBeanstalk ListPlatformBranches requests.
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
 * \sa ElasticBeanstalkClient::listPlatformBranches
 */

/*!
 * Constructs a copy of \a other.
 */
ListPlatformBranchesRequest::ListPlatformBranchesRequest(const ListPlatformBranchesRequest &other)
    : ElasticBeanstalkRequest(new ListPlatformBranchesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListPlatformBranchesRequest object.
 */
ListPlatformBranchesRequest::ListPlatformBranchesRequest()
    : ElasticBeanstalkRequest(new ListPlatformBranchesRequestPrivate(ElasticBeanstalkRequest::ListPlatformBranchesAction, this))
{

}

/*!
 * \reimp
 */
bool ListPlatformBranchesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListPlatformBranchesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListPlatformBranchesRequest::response(QNetworkReply * const reply) const
{
    return new ListPlatformBranchesResponse(*this, reply);
}

/*!
 * \class QtAws::ElasticBeanstalk::ListPlatformBranchesRequestPrivate
 * \brief The ListPlatformBranchesRequestPrivate class provides private implementation for ListPlatformBranchesRequest.
 * \internal
 *
 * \inmodule QtAwsElasticBeanstalk
 */

/*!
 * Constructs a ListPlatformBranchesRequestPrivate object for ElasticBeanstalk \a action,
 * with public implementation \a q.
 */
ListPlatformBranchesRequestPrivate::ListPlatformBranchesRequestPrivate(
    const ElasticBeanstalkRequest::Action action, ListPlatformBranchesRequest * const q)
    : ElasticBeanstalkRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListPlatformBranchesRequest
 * class' copy constructor.
 */
ListPlatformBranchesRequestPrivate::ListPlatformBranchesRequestPrivate(
    const ListPlatformBranchesRequestPrivate &other, ListPlatformBranchesRequest * const q)
    : ElasticBeanstalkRequestPrivate(other, q)
{

}

} // namespace ElasticBeanstalk
} // namespace QtAws
