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

#include "createregistryrequest.h"
#include "createregistryrequest_p.h"
#include "createregistryresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::CreateRegistryRequest
 * \brief The CreateRegistryRequest class provides an interface for Glue CreateRegistry requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::createRegistry
 */

/*!
 * Constructs a copy of \a other.
 */
CreateRegistryRequest::CreateRegistryRequest(const CreateRegistryRequest &other)
    : GlueRequest(new CreateRegistryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateRegistryRequest object.
 */
CreateRegistryRequest::CreateRegistryRequest()
    : GlueRequest(new CreateRegistryRequestPrivate(GlueRequest::CreateRegistryAction, this))
{

}

/*!
 * \reimp
 */
bool CreateRegistryRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateRegistryResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateRegistryRequest::response(QNetworkReply * const reply) const
{
    return new CreateRegistryResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::CreateRegistryRequestPrivate
 * \brief The CreateRegistryRequestPrivate class provides private implementation for CreateRegistryRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a CreateRegistryRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
CreateRegistryRequestPrivate::CreateRegistryRequestPrivate(
    const GlueRequest::Action action, CreateRegistryRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateRegistryRequest
 * class' copy constructor.
 */
CreateRegistryRequestPrivate::CreateRegistryRequestPrivate(
    const CreateRegistryRequestPrivate &other, CreateRegistryRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
