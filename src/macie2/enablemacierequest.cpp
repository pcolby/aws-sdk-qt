// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "enablemacierequest.h"
#include "enablemacierequest_p.h"
#include "enablemacieresponse.h"
#include "macie2request_p.h"

namespace QtAws {
namespace Macie2 {

/*!
 * \class QtAws::Macie2::EnableMacieRequest
 * \brief The EnableMacieRequest class provides an interface for Macie2 EnableMacie requests.
 *
 * \inmodule QtAwsMacie2
 *
 *  Amazon Macie is a fully managed data security and data privacy service that uses machine learning and pattern matching
 *  to discover and protect your sensitive data in AWS. Macie automates the discovery of sensitive data, such as PII and
 *  intellectual property, to provide you with insight into the data that your organization stores in AWS. Macie also
 *  provides an inventory of your Amazon S3 buckets, which it continually monitors for you. If Macie detects sensitive data
 *  or potential data access issues, it generates detailed findings for you to review and act upon as
 *
 * \sa Macie2Client::enableMacie
 */

/*!
 * Constructs a copy of \a other.
 */
EnableMacieRequest::EnableMacieRequest(const EnableMacieRequest &other)
    : Macie2Request(new EnableMacieRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a EnableMacieRequest object.
 */
EnableMacieRequest::EnableMacieRequest()
    : Macie2Request(new EnableMacieRequestPrivate(Macie2Request::EnableMacieAction, this))
{

}

/*!
 * \reimp
 */
bool EnableMacieRequest::isValid() const
{
    return false;
}


/*!
 * Returns a EnableMacieResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * EnableMacieRequest::response(QNetworkReply * const reply) const
{
    return new EnableMacieResponse(*this, reply);
}

/*!
 * \class QtAws::Macie2::EnableMacieRequestPrivate
 * \brief The EnableMacieRequestPrivate class provides private implementation for EnableMacieRequest.
 * \internal
 *
 * \inmodule QtAwsMacie2
 */

/*!
 * Constructs a EnableMacieRequestPrivate object for Macie2 \a action,
 * with public implementation \a q.
 */
EnableMacieRequestPrivate::EnableMacieRequestPrivate(
    const Macie2Request::Action action, EnableMacieRequest * const q)
    : Macie2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the EnableMacieRequest
 * class' copy constructor.
 */
EnableMacieRequestPrivate::EnableMacieRequestPrivate(
    const EnableMacieRequestPrivate &other, EnableMacieRequest * const q)
    : Macie2RequestPrivate(other, q)
{

}

} // namespace Macie2
} // namespace QtAws
