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

#include "createblueprintrequest.h"
#include "createblueprintrequest_p.h"
#include "createblueprintresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::CreateBlueprintRequest
 * \brief The CreateBlueprintRequest class provides an interface for Glue CreateBlueprint requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::createBlueprint
 */

/*!
 * Constructs a copy of \a other.
 */
CreateBlueprintRequest::CreateBlueprintRequest(const CreateBlueprintRequest &other)
    : GlueRequest(new CreateBlueprintRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateBlueprintRequest object.
 */
CreateBlueprintRequest::CreateBlueprintRequest()
    : GlueRequest(new CreateBlueprintRequestPrivate(GlueRequest::CreateBlueprintAction, this))
{

}

/*!
 * \reimp
 */
bool CreateBlueprintRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateBlueprintResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateBlueprintRequest::response(QNetworkReply * const reply) const
{
    return new CreateBlueprintResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::CreateBlueprintRequestPrivate
 * \brief The CreateBlueprintRequestPrivate class provides private implementation for CreateBlueprintRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a CreateBlueprintRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
CreateBlueprintRequestPrivate::CreateBlueprintRequestPrivate(
    const GlueRequest::Action action, CreateBlueprintRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateBlueprintRequest
 * class' copy constructor.
 */
CreateBlueprintRequestPrivate::CreateBlueprintRequestPrivate(
    const CreateBlueprintRequestPrivate &other, CreateBlueprintRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
