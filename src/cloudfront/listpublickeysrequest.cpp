// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listpublickeysrequest.h"
#include "listpublickeysrequest_p.h"
#include "listpublickeysresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::ListPublicKeysRequest
 * \brief The ListPublicKeysRequest class provides an interface for CloudFront ListPublicKeys requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::listPublicKeys
 */

/*!
 * Constructs a copy of \a other.
 */
ListPublicKeysRequest::ListPublicKeysRequest(const ListPublicKeysRequest &other)
    : CloudFrontRequest(new ListPublicKeysRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListPublicKeysRequest object.
 */
ListPublicKeysRequest::ListPublicKeysRequest()
    : CloudFrontRequest(new ListPublicKeysRequestPrivate(CloudFrontRequest::ListPublicKeysAction, this))
{

}

/*!
 * \reimp
 */
bool ListPublicKeysRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListPublicKeysResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListPublicKeysRequest::response(QNetworkReply * const reply) const
{
    return new ListPublicKeysResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::ListPublicKeysRequestPrivate
 * \brief The ListPublicKeysRequestPrivate class provides private implementation for ListPublicKeysRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a ListPublicKeysRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
ListPublicKeysRequestPrivate::ListPublicKeysRequestPrivate(
    const CloudFrontRequest::Action action, ListPublicKeysRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListPublicKeysRequest
 * class' copy constructor.
 */
ListPublicKeysRequestPrivate::ListPublicKeysRequestPrivate(
    const ListPublicKeysRequestPrivate &other, ListPublicKeysRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
