// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchgetcustomdataidentifiersrequest.h"
#include "batchgetcustomdataidentifiersrequest_p.h"
#include "batchgetcustomdataidentifiersresponse.h"
#include "macie2request_p.h"

namespace QtAws {
namespace Macie2 {

/*!
 * \class QtAws::Macie2::BatchGetCustomDataIdentifiersRequest
 * \brief The BatchGetCustomDataIdentifiersRequest class provides an interface for Macie2 BatchGetCustomDataIdentifiers requests.
 *
 * \inmodule QtAwsMacie2
 *
 *  Amazon Macie is a fully managed data security and data privacy service that uses machine learning and pattern matching
 *  to discover and protect your sensitive data in AWS. Macie automates the discovery of sensitive data, such as PII and
 *  intellectual property, to provide you with insight into the data that your organization stores in AWS. Macie also
 *  provides an inventory of your Amazon S3 buckets, which it continually monitors for you. If Macie detects sensitive data
 *  or potential data access issues, it generates detailed findings for you to review and act upon as
 *
 * \sa Macie2Client::batchGetCustomDataIdentifiers
 */

/*!
 * Constructs a copy of \a other.
 */
BatchGetCustomDataIdentifiersRequest::BatchGetCustomDataIdentifiersRequest(const BatchGetCustomDataIdentifiersRequest &other)
    : Macie2Request(new BatchGetCustomDataIdentifiersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchGetCustomDataIdentifiersRequest object.
 */
BatchGetCustomDataIdentifiersRequest::BatchGetCustomDataIdentifiersRequest()
    : Macie2Request(new BatchGetCustomDataIdentifiersRequestPrivate(Macie2Request::BatchGetCustomDataIdentifiersAction, this))
{

}

/*!
 * \reimp
 */
bool BatchGetCustomDataIdentifiersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchGetCustomDataIdentifiersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchGetCustomDataIdentifiersRequest::response(QNetworkReply * const reply) const
{
    return new BatchGetCustomDataIdentifiersResponse(*this, reply);
}

/*!
 * \class QtAws::Macie2::BatchGetCustomDataIdentifiersRequestPrivate
 * \brief The BatchGetCustomDataIdentifiersRequestPrivate class provides private implementation for BatchGetCustomDataIdentifiersRequest.
 * \internal
 *
 * \inmodule QtAwsMacie2
 */

/*!
 * Constructs a BatchGetCustomDataIdentifiersRequestPrivate object for Macie2 \a action,
 * with public implementation \a q.
 */
BatchGetCustomDataIdentifiersRequestPrivate::BatchGetCustomDataIdentifiersRequestPrivate(
    const Macie2Request::Action action, BatchGetCustomDataIdentifiersRequest * const q)
    : Macie2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchGetCustomDataIdentifiersRequest
 * class' copy constructor.
 */
BatchGetCustomDataIdentifiersRequestPrivate::BatchGetCustomDataIdentifiersRequestPrivate(
    const BatchGetCustomDataIdentifiersRequestPrivate &other, BatchGetCustomDataIdentifiersRequest * const q)
    : Macie2RequestPrivate(other, q)
{

}

} // namespace Macie2
} // namespace QtAws
