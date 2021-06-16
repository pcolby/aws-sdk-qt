/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listworldtemplatesrequest.h"
#include "listworldtemplatesrequest_p.h"
#include "listworldtemplatesresponse.h"
#include "robomakerrequest_p.h"

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::ListWorldTemplatesRequest
 * \brief The ListWorldTemplatesRequest class provides an interface for RoboMaker ListWorldTemplates requests.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::listWorldTemplates
 */

/*!
 * Constructs a copy of \a other.
 */
ListWorldTemplatesRequest::ListWorldTemplatesRequest(const ListWorldTemplatesRequest &other)
    : RoboMakerRequest(new ListWorldTemplatesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListWorldTemplatesRequest object.
 */
ListWorldTemplatesRequest::ListWorldTemplatesRequest()
    : RoboMakerRequest(new ListWorldTemplatesRequestPrivate(RoboMakerRequest::ListWorldTemplatesAction, this))
{

}

/*!
 * \reimp
 */
bool ListWorldTemplatesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListWorldTemplatesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListWorldTemplatesRequest::response(QNetworkReply * const reply) const
{
    return new ListWorldTemplatesResponse(*this, reply);
}

/*!
 * \class QtAws::RoboMaker::ListWorldTemplatesRequestPrivate
 * \brief The ListWorldTemplatesRequestPrivate class provides private implementation for ListWorldTemplatesRequest.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a ListWorldTemplatesRequestPrivate object for RoboMaker \a action,
 * with public implementation \a q.
 */
ListWorldTemplatesRequestPrivate::ListWorldTemplatesRequestPrivate(
    const RoboMakerRequest::Action action, ListWorldTemplatesRequest * const q)
    : RoboMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListWorldTemplatesRequest
 * class' copy constructor.
 */
ListWorldTemplatesRequestPrivate::ListWorldTemplatesRequestPrivate(
    const ListWorldTemplatesRequestPrivate &other, ListWorldTemplatesRequest * const q)
    : RoboMakerRequestPrivate(other, q)
{

}

} // namespace RoboMaker
} // namespace QtAws
