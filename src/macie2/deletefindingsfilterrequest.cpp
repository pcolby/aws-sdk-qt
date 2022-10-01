// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletefindingsfilterrequest.h"
#include "deletefindingsfilterrequest_p.h"
#include "deletefindingsfilterresponse.h"
#include "macie2request_p.h"

namespace QtAws {
namespace Macie2 {

/*!
 * \class QtAws::Macie2::DeleteFindingsFilterRequest
 * \brief The DeleteFindingsFilterRequest class provides an interface for Macie2 DeleteFindingsFilter requests.
 *
 * \inmodule QtAwsMacie2
 *
 *  Amazon Macie is a fully managed data security and data privacy service that uses machine learning and pattern matching
 *  to discover and protect your sensitive data in AWS. Macie automates the discovery of sensitive data, such as PII and
 *  intellectual property, to provide you with insight into the data that your organization stores in AWS. Macie also
 *  provides an inventory of your Amazon S3 buckets, which it continually monitors for you. If Macie detects sensitive data
 *  or potential data access issues, it generates detailed findings for you to review and act upon as
 *
 * \sa Macie2Client::deleteFindingsFilter
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteFindingsFilterRequest::DeleteFindingsFilterRequest(const DeleteFindingsFilterRequest &other)
    : Macie2Request(new DeleteFindingsFilterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteFindingsFilterRequest object.
 */
DeleteFindingsFilterRequest::DeleteFindingsFilterRequest()
    : Macie2Request(new DeleteFindingsFilterRequestPrivate(Macie2Request::DeleteFindingsFilterAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteFindingsFilterRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteFindingsFilterResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteFindingsFilterRequest::response(QNetworkReply * const reply) const
{
    return new DeleteFindingsFilterResponse(*this, reply);
}

/*!
 * \class QtAws::Macie2::DeleteFindingsFilterRequestPrivate
 * \brief The DeleteFindingsFilterRequestPrivate class provides private implementation for DeleteFindingsFilterRequest.
 * \internal
 *
 * \inmodule QtAwsMacie2
 */

/*!
 * Constructs a DeleteFindingsFilterRequestPrivate object for Macie2 \a action,
 * with public implementation \a q.
 */
DeleteFindingsFilterRequestPrivate::DeleteFindingsFilterRequestPrivate(
    const Macie2Request::Action action, DeleteFindingsFilterRequest * const q)
    : Macie2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteFindingsFilterRequest
 * class' copy constructor.
 */
DeleteFindingsFilterRequestPrivate::DeleteFindingsFilterRequestPrivate(
    const DeleteFindingsFilterRequestPrivate &other, DeleteFindingsFilterRequest * const q)
    : Macie2RequestPrivate(other, q)
{

}

} // namespace Macie2
} // namespace QtAws
