// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listrobotsrequest.h"
#include "listrobotsrequest_p.h"
#include "listrobotsresponse.h"
#include "robomakerrequest_p.h"

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::ListRobotsRequest
 * \brief The ListRobotsRequest class provides an interface for RoboMaker ListRobots requests.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::listRobots
 */

/*!
 * Constructs a copy of \a other.
 */
ListRobotsRequest::ListRobotsRequest(const ListRobotsRequest &other)
    : RoboMakerRequest(new ListRobotsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListRobotsRequest object.
 */
ListRobotsRequest::ListRobotsRequest()
    : RoboMakerRequest(new ListRobotsRequestPrivate(RoboMakerRequest::ListRobotsAction, this))
{

}

/*!
 * \reimp
 */
bool ListRobotsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListRobotsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListRobotsRequest::response(QNetworkReply * const reply) const
{
    return new ListRobotsResponse(*this, reply);
}

/*!
 * \class QtAws::RoboMaker::ListRobotsRequestPrivate
 * \brief The ListRobotsRequestPrivate class provides private implementation for ListRobotsRequest.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a ListRobotsRequestPrivate object for RoboMaker \a action,
 * with public implementation \a q.
 */
ListRobotsRequestPrivate::ListRobotsRequestPrivate(
    const RoboMakerRequest::Action action, ListRobotsRequest * const q)
    : RoboMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListRobotsRequest
 * class' copy constructor.
 */
ListRobotsRequestPrivate::ListRobotsRequestPrivate(
    const ListRobotsRequestPrivate &other, ListRobotsRequest * const q)
    : RoboMakerRequestPrivate(other, q)
{

}

} // namespace RoboMaker
} // namespace QtAws
