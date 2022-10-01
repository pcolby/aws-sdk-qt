// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createcustomentitytyperequest.h"
#include "createcustomentitytyperequest_p.h"
#include "createcustomentitytyperesponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::CreateCustomEntityTypeRequest
 * \brief The CreateCustomEntityTypeRequest class provides an interface for Glue CreateCustomEntityType requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::createCustomEntityType
 */

/*!
 * Constructs a copy of \a other.
 */
CreateCustomEntityTypeRequest::CreateCustomEntityTypeRequest(const CreateCustomEntityTypeRequest &other)
    : GlueRequest(new CreateCustomEntityTypeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateCustomEntityTypeRequest object.
 */
CreateCustomEntityTypeRequest::CreateCustomEntityTypeRequest()
    : GlueRequest(new CreateCustomEntityTypeRequestPrivate(GlueRequest::CreateCustomEntityTypeAction, this))
{

}

/*!
 * \reimp
 */
bool CreateCustomEntityTypeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateCustomEntityTypeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateCustomEntityTypeRequest::response(QNetworkReply * const reply) const
{
    return new CreateCustomEntityTypeResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::CreateCustomEntityTypeRequestPrivate
 * \brief The CreateCustomEntityTypeRequestPrivate class provides private implementation for CreateCustomEntityTypeRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a CreateCustomEntityTypeRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
CreateCustomEntityTypeRequestPrivate::CreateCustomEntityTypeRequestPrivate(
    const GlueRequest::Action action, CreateCustomEntityTypeRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateCustomEntityTypeRequest
 * class' copy constructor.
 */
CreateCustomEntityTypeRequestPrivate::CreateCustomEntityTypeRequestPrivate(
    const CreateCustomEntityTypeRequestPrivate &other, CreateCustomEntityTypeRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
