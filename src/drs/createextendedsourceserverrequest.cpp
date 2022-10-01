// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createextendedsourceserverrequest.h"
#include "createextendedsourceserverrequest_p.h"
#include "createextendedsourceserverresponse.h"
#include "drsrequest_p.h"

namespace QtAws {
namespace Drs {

/*!
 * \class QtAws::Drs::CreateExtendedSourceServerRequest
 * \brief The CreateExtendedSourceServerRequest class provides an interface for Drs CreateExtendedSourceServer requests.
 *
 * \inmodule QtAwsDrs
 *
 *  AWS Elastic Disaster Recovery
 *
 * \sa DrsClient::createExtendedSourceServer
 */

/*!
 * Constructs a copy of \a other.
 */
CreateExtendedSourceServerRequest::CreateExtendedSourceServerRequest(const CreateExtendedSourceServerRequest &other)
    : DrsRequest(new CreateExtendedSourceServerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateExtendedSourceServerRequest object.
 */
CreateExtendedSourceServerRequest::CreateExtendedSourceServerRequest()
    : DrsRequest(new CreateExtendedSourceServerRequestPrivate(DrsRequest::CreateExtendedSourceServerAction, this))
{

}

/*!
 * \reimp
 */
bool CreateExtendedSourceServerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateExtendedSourceServerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateExtendedSourceServerRequest::response(QNetworkReply * const reply) const
{
    return new CreateExtendedSourceServerResponse(*this, reply);
}

/*!
 * \class QtAws::Drs::CreateExtendedSourceServerRequestPrivate
 * \brief The CreateExtendedSourceServerRequestPrivate class provides private implementation for CreateExtendedSourceServerRequest.
 * \internal
 *
 * \inmodule QtAwsDrs
 */

/*!
 * Constructs a CreateExtendedSourceServerRequestPrivate object for Drs \a action,
 * with public implementation \a q.
 */
CreateExtendedSourceServerRequestPrivate::CreateExtendedSourceServerRequestPrivate(
    const DrsRequest::Action action, CreateExtendedSourceServerRequest * const q)
    : DrsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateExtendedSourceServerRequest
 * class' copy constructor.
 */
CreateExtendedSourceServerRequestPrivate::CreateExtendedSourceServerRequestPrivate(
    const CreateExtendedSourceServerRequestPrivate &other, CreateExtendedSourceServerRequest * const q)
    : DrsRequestPrivate(other, q)
{

}

} // namespace Drs
} // namespace QtAws
