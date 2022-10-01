/*
    Copyright 2013-2021 Paul Colby

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
