/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

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
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
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
 *
 * Constructs a CreateTriggerRequestPrivate object for Glue \a action with,
 * public implementation \a q.
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
