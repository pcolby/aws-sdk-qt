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

#include "gettablerequest.h"
#include "gettablerequest_p.h"
#include "gettableresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetTableRequest
 * \brief The GetTableRequest class provides an interface for Glue GetTable requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::getTable
 */

/*!
 * Constructs a copy of \a other.
 */
GetTableRequest::GetTableRequest(const GetTableRequest &other)
    : GlueRequest(new GetTableRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetTableRequest object.
 */
GetTableRequest::GetTableRequest()
    : GlueRequest(new GetTableRequestPrivate(GlueRequest::GetTableAction, this))
{

}

/*!
 * \reimp
 */
bool GetTableRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetTableResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetTableRequest::response(QNetworkReply * const reply) const
{
    return new GetTableResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::GetTableRequestPrivate
 * \brief The GetTableRequestPrivate class provides private implementation for GetTableRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 *
 * Constructs a GetTableRequestPrivate object for Glue \a action with,
 * public implementation \a q.
 */
GetTableRequestPrivate::GetTableRequestPrivate(
    const GlueRequest::Action action, GetTableRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetTableRequest
 * class' copy constructor.
 */
GetTableRequestPrivate::GetTableRequestPrivate(
    const GetTableRequestPrivate &other, GetTableRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
