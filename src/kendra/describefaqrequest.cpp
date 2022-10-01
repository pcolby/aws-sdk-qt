// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describefaqrequest.h"
#include "describefaqrequest_p.h"
#include "describefaqresponse.h"
#include "kendrarequest_p.h"

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::DescribeFaqRequest
 * \brief The DescribeFaqRequest class provides an interface for Kendra DescribeFaq requests.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::describeFaq
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeFaqRequest::DescribeFaqRequest(const DescribeFaqRequest &other)
    : KendraRequest(new DescribeFaqRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeFaqRequest object.
 */
DescribeFaqRequest::DescribeFaqRequest()
    : KendraRequest(new DescribeFaqRequestPrivate(KendraRequest::DescribeFaqAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeFaqRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeFaqResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeFaqRequest::response(QNetworkReply * const reply) const
{
    return new DescribeFaqResponse(*this, reply);
}

/*!
 * \class QtAws::Kendra::DescribeFaqRequestPrivate
 * \brief The DescribeFaqRequestPrivate class provides private implementation for DescribeFaqRequest.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a DescribeFaqRequestPrivate object for Kendra \a action,
 * with public implementation \a q.
 */
DescribeFaqRequestPrivate::DescribeFaqRequestPrivate(
    const KendraRequest::Action action, DescribeFaqRequest * const q)
    : KendraRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeFaqRequest
 * class' copy constructor.
 */
DescribeFaqRequestPrivate::DescribeFaqRequestPrivate(
    const DescribeFaqRequestPrivate &other, DescribeFaqRequest * const q)
    : KendraRequestPrivate(other, q)
{

}

} // namespace Kendra
} // namespace QtAws
