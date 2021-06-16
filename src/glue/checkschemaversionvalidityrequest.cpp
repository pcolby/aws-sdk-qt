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

#include "checkschemaversionvalidityrequest.h"
#include "checkschemaversionvalidityrequest_p.h"
#include "checkschemaversionvalidityresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::CheckSchemaVersionValidityRequest
 * \brief The CheckSchemaVersionValidityRequest class provides an interface for Glue CheckSchemaVersionValidity requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::checkSchemaVersionValidity
 */

/*!
 * Constructs a copy of \a other.
 */
CheckSchemaVersionValidityRequest::CheckSchemaVersionValidityRequest(const CheckSchemaVersionValidityRequest &other)
    : GlueRequest(new CheckSchemaVersionValidityRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CheckSchemaVersionValidityRequest object.
 */
CheckSchemaVersionValidityRequest::CheckSchemaVersionValidityRequest()
    : GlueRequest(new CheckSchemaVersionValidityRequestPrivate(GlueRequest::CheckSchemaVersionValidityAction, this))
{

}

/*!
 * \reimp
 */
bool CheckSchemaVersionValidityRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CheckSchemaVersionValidityResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CheckSchemaVersionValidityRequest::response(QNetworkReply * const reply) const
{
    return new CheckSchemaVersionValidityResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::CheckSchemaVersionValidityRequestPrivate
 * \brief The CheckSchemaVersionValidityRequestPrivate class provides private implementation for CheckSchemaVersionValidityRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a CheckSchemaVersionValidityRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
CheckSchemaVersionValidityRequestPrivate::CheckSchemaVersionValidityRequestPrivate(
    const GlueRequest::Action action, CheckSchemaVersionValidityRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CheckSchemaVersionValidityRequest
 * class' copy constructor.
 */
CheckSchemaVersionValidityRequestPrivate::CheckSchemaVersionValidityRequestPrivate(
    const CheckSchemaVersionValidityRequestPrivate &other, CheckSchemaVersionValidityRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
