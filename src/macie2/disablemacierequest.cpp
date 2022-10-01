// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disablemacierequest.h"
#include "disablemacierequest_p.h"
#include "disablemacieresponse.h"
#include "macie2request_p.h"

namespace QtAws {
namespace Macie2 {

/*!
 * \class QtAws::Macie2::DisableMacieRequest
 * \brief The DisableMacieRequest class provides an interface for Macie2 DisableMacie requests.
 *
 * \inmodule QtAwsMacie2
 *
 *  Amazon Macie is a fully managed data security and data privacy service that uses machine learning and pattern matching
 *  to discover and protect your sensitive data in AWS. Macie automates the discovery of sensitive data, such as PII and
 *  intellectual property, to provide you with insight into the data that your organization stores in AWS. Macie also
 *  provides an inventory of your Amazon S3 buckets, which it continually monitors for you. If Macie detects sensitive data
 *  or potential data access issues, it generates detailed findings for you to review and act upon as
 *
 * \sa Macie2Client::disableMacie
 */

/*!
 * Constructs a copy of \a other.
 */
DisableMacieRequest::DisableMacieRequest(const DisableMacieRequest &other)
    : Macie2Request(new DisableMacieRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisableMacieRequest object.
 */
DisableMacieRequest::DisableMacieRequest()
    : Macie2Request(new DisableMacieRequestPrivate(Macie2Request::DisableMacieAction, this))
{

}

/*!
 * \reimp
 */
bool DisableMacieRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisableMacieResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisableMacieRequest::response(QNetworkReply * const reply) const
{
    return new DisableMacieResponse(*this, reply);
}

/*!
 * \class QtAws::Macie2::DisableMacieRequestPrivate
 * \brief The DisableMacieRequestPrivate class provides private implementation for DisableMacieRequest.
 * \internal
 *
 * \inmodule QtAwsMacie2
 */

/*!
 * Constructs a DisableMacieRequestPrivate object for Macie2 \a action,
 * with public implementation \a q.
 */
DisableMacieRequestPrivate::DisableMacieRequestPrivate(
    const Macie2Request::Action action, DisableMacieRequest * const q)
    : Macie2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisableMacieRequest
 * class' copy constructor.
 */
DisableMacieRequestPrivate::DisableMacieRequestPrivate(
    const DisableMacieRequestPrivate &other, DisableMacieRequest * const q)
    : Macie2RequestPrivate(other, q)
{

}

} // namespace Macie2
} // namespace QtAws
