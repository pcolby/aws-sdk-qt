// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "starttestrequest.h"
#include "starttestrequest_p.h"
#include "starttestresponse.h"
#include "mgnrequest_p.h"

namespace QtAws {
namespace Mgn {

/*!
 * \class QtAws::Mgn::StartTestRequest
 * \brief The StartTestRequest class provides an interface for Mgn StartTest requests.
 *
 * \inmodule QtAwsMgn
 *
 *  The Application Migration Service
 *
 * \sa MgnClient::startTest
 */

/*!
 * Constructs a copy of \a other.
 */
StartTestRequest::StartTestRequest(const StartTestRequest &other)
    : MgnRequest(new StartTestRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartTestRequest object.
 */
StartTestRequest::StartTestRequest()
    : MgnRequest(new StartTestRequestPrivate(MgnRequest::StartTestAction, this))
{

}

/*!
 * \reimp
 */
bool StartTestRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartTestResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartTestRequest::response(QNetworkReply * const reply) const
{
    return new StartTestResponse(*this, reply);
}

/*!
 * \class QtAws::Mgn::StartTestRequestPrivate
 * \brief The StartTestRequestPrivate class provides private implementation for StartTestRequest.
 * \internal
 *
 * \inmodule QtAwsMgn
 */

/*!
 * Constructs a StartTestRequestPrivate object for Mgn \a action,
 * with public implementation \a q.
 */
StartTestRequestPrivate::StartTestRequestPrivate(
    const MgnRequest::Action action, StartTestRequest * const q)
    : MgnRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartTestRequest
 * class' copy constructor.
 */
StartTestRequestPrivate::StartTestRequestPrivate(
    const StartTestRequestPrivate &other, StartTestRequest * const q)
    : MgnRequestPrivate(other, q)
{

}

} // namespace Mgn
} // namespace QtAws
