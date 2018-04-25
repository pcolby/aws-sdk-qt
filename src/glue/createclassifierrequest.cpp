/*
    Copyright 2013-2018 Paul Colby

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

#include "createclassifierrequest.h"
#include "createclassifierrequest_p.h"
#include "createclassifierresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::CreateClassifierRequest
 * \brief The CreateClassifierRequest class provides an interface for Glue CreateClassifier requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::createClassifier
 */

/*!
 * Constructs a copy of \a other.
 */
CreateClassifierRequest::CreateClassifierRequest(const CreateClassifierRequest &other)
    : GlueRequest(new CreateClassifierRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateClassifierRequest object.
 */
CreateClassifierRequest::CreateClassifierRequest()
    : GlueRequest(new CreateClassifierRequestPrivate(GlueRequest::CreateClassifierAction, this))
{

}

/*!
 * \reimp
 */
bool CreateClassifierRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateClassifierResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateClassifierRequest::response(QNetworkReply * const reply) const
{
    return new CreateClassifierResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::CreateClassifierRequestPrivate
 * \brief The CreateClassifierRequestPrivate class provides private implementation for CreateClassifierRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a CreateClassifierRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
CreateClassifierRequestPrivate::CreateClassifierRequestPrivate(
    const GlueRequest::Action action, CreateClassifierRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateClassifierRequest
 * class' copy constructor.
 */
CreateClassifierRequestPrivate::CreateClassifierRequestPrivate(
    const CreateClassifierRequestPrivate &other, CreateClassifierRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
