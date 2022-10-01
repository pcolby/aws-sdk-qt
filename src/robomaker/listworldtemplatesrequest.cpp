// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
