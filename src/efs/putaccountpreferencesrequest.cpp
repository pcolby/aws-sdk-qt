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

#include "putaccountpreferencesrequest.h"
#include "putaccountpreferencesrequest_p.h"
#include "putaccountpreferencesresponse.h"
#include "efsrequest_p.h"

namespace QtAws {
namespace EFS {

/*!
 * \class QtAws::EFS::PutAccountPreferencesRequest
 * \brief The PutAccountPreferencesRequest class provides an interface for EFS PutAccountPreferences requests.
 *
 * \inmodule QtAwsEFS
 *
 *  <fullname>Amazon Elastic File System</fullname>
 * 
 *  Amazon Elastic File System (Amazon EFS) provides simple, scalable file storage for use with Amazon EC2 instances in the
 *  AWS Cloud. With Amazon EFS, storage capacity is elastic, growing and shrinking automatically as you add and remove
 *  files, so your applications have the storage they need, when they need it. For more information, see the <a
 *  href="https://docs.aws.amazon.com/efs/latest/ug/api-reference.html">Amazon Elastic File System API Reference</a> and the
 *  <a href="https://docs.aws.amazon.com/efs/latest/ug/whatisefs.html">Amazon Elastic File System User
 *
 * \sa EfsClient::putAccountPreferences
 */

/*!
 * Constructs a copy of \a other.
 */
PutAccountPreferencesRequest::PutAccountPreferencesRequest(const PutAccountPreferencesRequest &other)
    : EfsRequest(new PutAccountPreferencesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutAccountPreferencesRequest object.
 */
PutAccountPreferencesRequest::PutAccountPreferencesRequest()
    : EfsRequest(new PutAccountPreferencesRequestPrivate(EfsRequest::PutAccountPreferencesAction, this))
{

}

/*!
 * \reimp
 */
bool PutAccountPreferencesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutAccountPreferencesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutAccountPreferencesRequest::response(QNetworkReply * const reply) const
{
    return new PutAccountPreferencesResponse(*this, reply);
}

/*!
 * \class QtAws::EFS::PutAccountPreferencesRequestPrivate
 * \brief The PutAccountPreferencesRequestPrivate class provides private implementation for PutAccountPreferencesRequest.
 * \internal
 *
 * \inmodule QtAwsEFS
 */

/*!
 * Constructs a PutAccountPreferencesRequestPrivate object for Efs \a action,
 * with public implementation \a q.
 */
PutAccountPreferencesRequestPrivate::PutAccountPreferencesRequestPrivate(
    const EfsRequest::Action action, PutAccountPreferencesRequest * const q)
    : EfsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutAccountPreferencesRequest
 * class' copy constructor.
 */
PutAccountPreferencesRequestPrivate::PutAccountPreferencesRequestPrivate(
    const PutAccountPreferencesRequestPrivate &other, PutAccountPreferencesRequest * const q)
    : EfsRequestPrivate(other, q)
{

}

} // namespace EFS
} // namespace QtAws
