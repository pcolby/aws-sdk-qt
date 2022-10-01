// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createtriggerrequest.h"
#include "createtriggerrequest_p.h"
#include "createtriggerresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::CreateTriggerRequest
 * \brief The CreateTriggerRequest class provides an interface for Glue CreateTrigger requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::createTrigger
 */

/*!
 * Constructs a copy of \a other.
 */
CreateTriggerRequest::CreateTriggerRequest(const CreateTriggerRequest &other)
    : GlueRequest(new CreateTriggerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateTriggerRequest object.
 */
CreateTriggerRequest::CreateTriggerRequest()
    : GlueRequest(new CreateTriggerRequestPrivate(GlueRequest::CreateTriggerAction, this))
{

}

/*!
 * \reimp
 */
bool CreateTriggerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateTriggerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateTriggerRequest::response(QNetworkReply * const reply) const
{
    return new CreateTriggerResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::CreateTriggerRequestPrivate
 * \brief The CreateTriggerRequestPrivate class provides private implementation for CreateTriggerRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a CreateTriggerRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
CreateTriggerRequestPrivate::CreateTriggerRequestPrivate(
    const GlueRequest::Action action, CreateTriggerRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateTriggerRequest
 * class' copy constructor.
 */
CreateTriggerRequestPrivate::CreateTriggerRequestPrivate(
    const CreateTriggerRequestPrivate &other, CreateTriggerRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
