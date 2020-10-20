/*
    Copyright 2013-2020 Paul Colby

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

#include "createscriptrequest.h"
#include "createscriptrequest_p.h"
#include "createscriptresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::CreateScriptRequest
 * \brief The CreateScriptRequest class provides an interface for Glue CreateScript requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::createScript
 */

/*!
 * Constructs a copy of \a other.
 */
CreateScriptRequest::CreateScriptRequest(const CreateScriptRequest &other)
    : GlueRequest(new CreateScriptRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateScriptRequest object.
 */
CreateScriptRequest::CreateScriptRequest()
    : GlueRequest(new CreateScriptRequestPrivate(GlueRequest::CreateScriptAction, this))
{

}

/*!
 * \reimp
 */
bool CreateScriptRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateScriptResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateScriptRequest::response(QNetworkReply * const reply) const
{
    return new CreateScriptResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::CreateScriptRequestPrivate
 * \brief The CreateScriptRequestPrivate class provides private implementation for CreateScriptRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a CreateScriptRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
CreateScriptRequestPrivate::CreateScriptRequestPrivate(
    const GlueRequest::Action action, CreateScriptRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateScriptRequest
 * class' copy constructor.
 */
CreateScriptRequestPrivate::CreateScriptRequestPrivate(
    const CreateScriptRequestPrivate &other, CreateScriptRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
