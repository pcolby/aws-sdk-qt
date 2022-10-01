// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startcutoverrequest.h"
#include "startcutoverrequest_p.h"
#include "startcutoverresponse.h"
#include "mgnrequest_p.h"

namespace QtAws {
namespace Mgn {

/*!
 * \class QtAws::Mgn::StartCutoverRequest
 * \brief The StartCutoverRequest class provides an interface for Mgn StartCutover requests.
 *
 * \inmodule QtAwsMgn
 *
 *  The Application Migration Service
 *
 * \sa MgnClient::startCutover
 */

/*!
 * Constructs a copy of \a other.
 */
StartCutoverRequest::StartCutoverRequest(const StartCutoverRequest &other)
    : MgnRequest(new StartCutoverRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartCutoverRequest object.
 */
StartCutoverRequest::StartCutoverRequest()
    : MgnRequest(new StartCutoverRequestPrivate(MgnRequest::StartCutoverAction, this))
{

}

/*!
 * \reimp
 */
bool StartCutoverRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartCutoverResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartCutoverRequest::response(QNetworkReply * const reply) const
{
    return new StartCutoverResponse(*this, reply);
}

/*!
 * \class QtAws::Mgn::StartCutoverRequestPrivate
 * \brief The StartCutoverRequestPrivate class provides private implementation for StartCutoverRequest.
 * \internal
 *
 * \inmodule QtAwsMgn
 */

/*!
 * Constructs a StartCutoverRequestPrivate object for Mgn \a action,
 * with public implementation \a q.
 */
StartCutoverRequestPrivate::StartCutoverRequestPrivate(
    const MgnRequest::Action action, StartCutoverRequest * const q)
    : MgnRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartCutoverRequest
 * class' copy constructor.
 */
StartCutoverRequestPrivate::StartCutoverRequestPrivate(
    const StartCutoverRequestPrivate &other, StartCutoverRequest * const q)
    : MgnRequestPrivate(other, q)
{

}

} // namespace Mgn
} // namespace QtAws
