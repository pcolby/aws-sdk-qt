// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listconflictingaliasesrequest.h"
#include "listconflictingaliasesrequest_p.h"
#include "listconflictingaliasesresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/*!
 * \class QtAws::CloudFront::ListConflictingAliasesRequest
 * \brief The ListConflictingAliasesRequest class provides an interface for CloudFront ListConflictingAliases requests.
 *
 * \inmodule QtAwsCloudFront
 *
 *  <fullname>Amazon CloudFront</fullname>
 * 
 *  This is the <i>Amazon CloudFront API Reference</i>. This guide is for developers who need detailed information about
 *  CloudFront API actions, data types, and errors. For detailed information about CloudFront features, see the <i>Amazon
 *  CloudFront Developer
 *
 * \sa CloudFrontClient::listConflictingAliases
 */

/*!
 * Constructs a copy of \a other.
 */
ListConflictingAliasesRequest::ListConflictingAliasesRequest(const ListConflictingAliasesRequest &other)
    : CloudFrontRequest(new ListConflictingAliasesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListConflictingAliasesRequest object.
 */
ListConflictingAliasesRequest::ListConflictingAliasesRequest()
    : CloudFrontRequest(new ListConflictingAliasesRequestPrivate(CloudFrontRequest::ListConflictingAliasesAction, this))
{

}

/*!
 * \reimp
 */
bool ListConflictingAliasesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListConflictingAliasesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListConflictingAliasesRequest::response(QNetworkReply * const reply) const
{
    return new ListConflictingAliasesResponse(*this, reply);
}

/*!
 * \class QtAws::CloudFront::ListConflictingAliasesRequestPrivate
 * \brief The ListConflictingAliasesRequestPrivate class provides private implementation for ListConflictingAliasesRequest.
 * \internal
 *
 * \inmodule QtAwsCloudFront
 */

/*!
 * Constructs a ListConflictingAliasesRequestPrivate object for CloudFront \a action,
 * with public implementation \a q.
 */
ListConflictingAliasesRequestPrivate::ListConflictingAliasesRequestPrivate(
    const CloudFrontRequest::Action action, ListConflictingAliasesRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListConflictingAliasesRequest
 * class' copy constructor.
 */
ListConflictingAliasesRequestPrivate::ListConflictingAliasesRequestPrivate(
    const ListConflictingAliasesRequestPrivate &other, ListConflictingAliasesRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
