// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listcloudfrontoriginaccessidentitiesrequest.h"
#include "listcloudfrontoriginaccessidentitiesrequest_p.h"
#include "listcloudfrontoriginaccessidentitiesresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::ListCloudFrontOriginAccessIdentitiesRequest
 * \brief The ListCloudFrontOriginAccessIdentitiesRequest class provides an interface for CloudFront ListCloudFrontOriginAccessIdentities requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::listCloudFrontOriginAccessIdentities
 */

/*!
 * Constructs a copy of \a other.
 */
ListCloudFrontOriginAccessIdentitiesRequest::ListCloudFrontOriginAccessIdentitiesRequest(const ListCloudFrontOriginAccessIdentitiesRequest &other)
    : CloudFrontRequest(new ListCloudFrontOriginAccessIdentitiesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListCloudFrontOriginAccessIdentitiesRequest object.
 */
ListCloudFrontOriginAccessIdentitiesRequest::ListCloudFrontOriginAccessIdentitiesRequest()
    : CloudFrontRequest(new ListCloudFrontOriginAccessIdentitiesRequestPrivate(CloudFrontRequest::ListCloudFrontOriginAccessIdentitiesAction, this))
{

}

/*!
 * \reimp
 */
bool ListCloudFrontOriginAccessIdentitiesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListCloudFrontOriginAccessIdentitiesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListCloudFrontOriginAccessIdentitiesRequest::response(QNetworkReply * const reply) const
{
    return new ListCloudFrontOriginAccessIdentitiesResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::ListCloudFrontOriginAccessIdentitiesRequestPrivate
 * \brief The ListCloudFrontOriginAccessIdentitiesRequestPrivate class provides private implementation for ListCloudFrontOriginAccessIdentitiesRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a ListCloudFrontOriginAccessIdentitiesRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
ListCloudFrontOriginAccessIdentitiesRequestPrivate::ListCloudFrontOriginAccessIdentitiesRequestPrivate(
    const CloudFrontRequest::Action action, ListCloudFrontOriginAccessIdentitiesRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListCloudFrontOriginAccessIdentitiesRequest
 * class' copy constructor.
 */
ListCloudFrontOriginAccessIdentitiesRequestPrivate::ListCloudFrontOriginAccessIdentitiesRequestPrivate(
    const ListCloudFrontOriginAccessIdentitiesRequestPrivate &other, ListCloudFrontOriginAccessIdentitiesRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
