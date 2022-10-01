// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listoriginaccesscontrolsrequest.h"
#include "listoriginaccesscontrolsrequest_p.h"
#include "listoriginaccesscontrolsresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::ListOriginAccessControlsRequest
 * \brief The ListOriginAccessControlsRequest class provides an interface for CloudFront ListOriginAccessControls requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::listOriginAccessControls
 */

/*!
 * Constructs a copy of \a other.
 */
ListOriginAccessControlsRequest::ListOriginAccessControlsRequest(const ListOriginAccessControlsRequest &other)
    : CloudFrontRequest(new ListOriginAccessControlsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListOriginAccessControlsRequest object.
 */
ListOriginAccessControlsRequest::ListOriginAccessControlsRequest()
    : CloudFrontRequest(new ListOriginAccessControlsRequestPrivate(CloudFrontRequest::ListOriginAccessControlsAction, this))
{

}

/*!
 * \reimp
 */
bool ListOriginAccessControlsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListOriginAccessControlsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListOriginAccessControlsRequest::response(QNetworkReply * const reply) const
{
    return new ListOriginAccessControlsResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::ListOriginAccessControlsRequestPrivate
 * \brief The ListOriginAccessControlsRequestPrivate class provides private implementation for ListOriginAccessControlsRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a ListOriginAccessControlsRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
ListOriginAccessControlsRequestPrivate::ListOriginAccessControlsRequestPrivate(
    const CloudFrontRequest::Action action, ListOriginAccessControlsRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListOriginAccessControlsRequest
 * class' copy constructor.
 */
ListOriginAccessControlsRequestPrivate::ListOriginAccessControlsRequestPrivate(
    const ListOriginAccessControlsRequestPrivate &other, ListOriginAccessControlsRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
