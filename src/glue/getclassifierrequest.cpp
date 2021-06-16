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

#include "getclassifierrequest.h"
#include "getclassifierrequest_p.h"
#include "getclassifierresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetClassifierRequest
 * \brief The GetClassifierRequest class provides an interface for Glue GetClassifier requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::getClassifier
 */

/*!
 * Constructs a copy of \a other.
 */
GetClassifierRequest::GetClassifierRequest(const GetClassifierRequest &other)
    : GlueRequest(new GetClassifierRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetClassifierRequest object.
 */
GetClassifierRequest::GetClassifierRequest()
    : GlueRequest(new GetClassifierRequestPrivate(GlueRequest::GetClassifierAction, this))
{

}

/*!
 * \reimp
 */
bool GetClassifierRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetClassifierResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetClassifierRequest::response(QNetworkReply * const reply) const
{
    return new GetClassifierResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::GetClassifierRequestPrivate
 * \brief The GetClassifierRequestPrivate class provides private implementation for GetClassifierRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetClassifierRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
GetClassifierRequestPrivate::GetClassifierRequestPrivate(
    const GlueRequest::Action action, GetClassifierRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetClassifierRequest
 * class' copy constructor.
 */
GetClassifierRequestPrivate::GetClassifierRequestPrivate(
    const GetClassifierRequestPrivate &other, GetClassifierRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
