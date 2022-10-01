// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "liststreamingdistributionsrequest.h"
#include "liststreamingdistributionsrequest_p.h"
#include "liststreamingdistributionsresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::ListStreamingDistributionsRequest
 * \brief The ListStreamingDistributionsRequest class provides an interface for CloudFront ListStreamingDistributions requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::listStreamingDistributions
 */

/*!
 * Constructs a copy of \a other.
 */
ListStreamingDistributionsRequest::ListStreamingDistributionsRequest(const ListStreamingDistributionsRequest &other)
    : CloudFrontRequest(new ListStreamingDistributionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListStreamingDistributionsRequest object.
 */
ListStreamingDistributionsRequest::ListStreamingDistributionsRequest()
    : CloudFrontRequest(new ListStreamingDistributionsRequestPrivate(CloudFrontRequest::ListStreamingDistributionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListStreamingDistributionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListStreamingDistributionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListStreamingDistributionsRequest::response(QNetworkReply * const reply) const
{
    return new ListStreamingDistributionsResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::ListStreamingDistributionsRequestPrivate
 * \brief The ListStreamingDistributionsRequestPrivate class provides private implementation for ListStreamingDistributionsRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a ListStreamingDistributionsRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
ListStreamingDistributionsRequestPrivate::ListStreamingDistributionsRequestPrivate(
    const CloudFrontRequest::Action action, ListStreamingDistributionsRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListStreamingDistributionsRequest
 * class' copy constructor.
 */
ListStreamingDistributionsRequestPrivate::ListStreamingDistributionsRequestPrivate(
    const ListStreamingDistributionsRequestPrivate &other, ListStreamingDistributionsRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
