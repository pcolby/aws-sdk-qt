// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "finalizecutoverrequest.h"
#include "finalizecutoverrequest_p.h"
#include "finalizecutoverresponse.h"
#include "mgnrequest_p.h"

namespace QtAws {
namespace Mgn {

/*!
 * \class QtAws::Mgn::FinalizeCutoverRequest
 * \brief The FinalizeCutoverRequest class provides an interface for Mgn FinalizeCutover requests.
 *
 * \inmodule QtAwsMgn
 *
 *  The Application Migration Service
 *
 * \sa MgnClient::finalizeCutover
 */

/*!
 * Constructs a copy of \a other.
 */
FinalizeCutoverRequest::FinalizeCutoverRequest(const FinalizeCutoverRequest &other)
    : MgnRequest(new FinalizeCutoverRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a FinalizeCutoverRequest object.
 */
FinalizeCutoverRequest::FinalizeCutoverRequest()
    : MgnRequest(new FinalizeCutoverRequestPrivate(MgnRequest::FinalizeCutoverAction, this))
{

}

/*!
 * \reimp
 */
bool FinalizeCutoverRequest::isValid() const
{
    return false;
}


/*!
 * Returns a FinalizeCutoverResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * FinalizeCutoverRequest::response(QNetworkReply * const reply) const
{
    return new FinalizeCutoverResponse(*this, reply);
}

/*!
 * \class QtAws::Mgn::FinalizeCutoverRequestPrivate
 * \brief The FinalizeCutoverRequestPrivate class provides private implementation for FinalizeCutoverRequest.
 * \internal
 *
 * \inmodule QtAwsMgn
 */

/*!
 * Constructs a FinalizeCutoverRequestPrivate object for Mgn \a action,
 * with public implementation \a q.
 */
FinalizeCutoverRequestPrivate::FinalizeCutoverRequestPrivate(
    const MgnRequest::Action action, FinalizeCutoverRequest * const q)
    : MgnRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the FinalizeCutoverRequest
 * class' copy constructor.
 */
FinalizeCutoverRequestPrivate::FinalizeCutoverRequestPrivate(
    const FinalizeCutoverRequestPrivate &other, FinalizeCutoverRequest * const q)
    : MgnRequestPrivate(other, q)
{

}

} // namespace Mgn
} // namespace QtAws
