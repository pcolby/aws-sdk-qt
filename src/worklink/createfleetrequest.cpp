// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createfleetrequest.h"
#include "createfleetrequest_p.h"
#include "createfleetresponse.h"
#include "worklinkrequest_p.h"

namespace QtAws {
namespace WorkLink {

/*!
 * \class QtAws::WorkLink::CreateFleetRequest
 * \brief The CreateFleetRequest class provides an interface for WorkLink CreateFleet requests.
 *
 * \inmodule QtAwsWorkLink
 *
 *  Amazon WorkLink is a cloud-based service that provides secure access to internal websites and web apps from iOS and
 *  Android phones. In a single step, your users, such as employees, can access internal websites as efficiently as they
 *  access any other public website. They enter a URL in their web browser, or choose a link to an internal website in an
 *  email. Amazon WorkLink authenticates the user's access and securely renders authorized internal web content in a secure
 *  rendering service in the AWS cloud. Amazon WorkLink doesn't download or store any internal web content on mobile
 *
 * \sa WorkLinkClient::createFleet
 */

/*!
 * Constructs a copy of \a other.
 */
CreateFleetRequest::CreateFleetRequest(const CreateFleetRequest &other)
    : WorkLinkRequest(new CreateFleetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateFleetRequest object.
 */
CreateFleetRequest::CreateFleetRequest()
    : WorkLinkRequest(new CreateFleetRequestPrivate(WorkLinkRequest::CreateFleetAction, this))
{

}

/*!
 * \reimp
 */
bool CreateFleetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateFleetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateFleetRequest::response(QNetworkReply * const reply) const
{
    return new CreateFleetResponse(*this, reply);
}

/*!
 * \class QtAws::WorkLink::CreateFleetRequestPrivate
 * \brief The CreateFleetRequestPrivate class provides private implementation for CreateFleetRequest.
 * \internal
 *
 * \inmodule QtAwsWorkLink
 */

/*!
 * Constructs a CreateFleetRequestPrivate object for WorkLink \a action,
 * with public implementation \a q.
 */
CreateFleetRequestPrivate::CreateFleetRequestPrivate(
    const WorkLinkRequest::Action action, CreateFleetRequest * const q)
    : WorkLinkRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateFleetRequest
 * class' copy constructor.
 */
CreateFleetRequestPrivate::CreateFleetRequestPrivate(
    const CreateFleetRequestPrivate &other, CreateFleetRequest * const q)
    : WorkLinkRequestPrivate(other, q)
{

}

} // namespace WorkLink
} // namespace QtAws
