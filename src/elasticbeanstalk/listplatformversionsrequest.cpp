// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listplatformversionsrequest.h"
#include "listplatformversionsrequest_p.h"
#include "listplatformversionsresponse.h"
#include "elasticbeanstalkrequest_p.h"

namespace QtAws {
namespace ElasticBeanstalk {

/*!
 * \class QtAws::ElasticBeanstalk::ListPlatformVersionsRequest
 * \brief The ListPlatformVersionsRequest class provides an interface for ElasticBeanstalk ListPlatformVersions requests.
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
 * \sa ElasticBeanstalkClient::listPlatformVersions
 */

/*!
 * Constructs a copy of \a other.
 */
ListPlatformVersionsRequest::ListPlatformVersionsRequest(const ListPlatformVersionsRequest &other)
    : ElasticBeanstalkRequest(new ListPlatformVersionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListPlatformVersionsRequest object.
 */
ListPlatformVersionsRequest::ListPlatformVersionsRequest()
    : ElasticBeanstalkRequest(new ListPlatformVersionsRequestPrivate(ElasticBeanstalkRequest::ListPlatformVersionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListPlatformVersionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListPlatformVersionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListPlatformVersionsRequest::response(QNetworkReply * const reply) const
{
    return new ListPlatformVersionsResponse(*this, reply);
}

/*!
 * \class QtAws::ElasticBeanstalk::ListPlatformVersionsRequestPrivate
 * \brief The ListPlatformVersionsRequestPrivate class provides private implementation for ListPlatformVersionsRequest.
 * \internal
 *
 * \inmodule QtAwsElasticBeanstalk
 */

/*!
 * Constructs a ListPlatformVersionsRequestPrivate object for ElasticBeanstalk \a action,
 * with public implementation \a q.
 */
ListPlatformVersionsRequestPrivate::ListPlatformVersionsRequestPrivate(
    const ElasticBeanstalkRequest::Action action, ListPlatformVersionsRequest * const q)
    : ElasticBeanstalkRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListPlatformVersionsRequest
 * class' copy constructor.
 */
ListPlatformVersionsRequestPrivate::ListPlatformVersionsRequestPrivate(
    const ListPlatformVersionsRequestPrivate &other, ListPlatformVersionsRequest * const q)
    : ElasticBeanstalkRequestPrivate(other, q)
{

}

} // namespace ElasticBeanstalk
} // namespace QtAws
