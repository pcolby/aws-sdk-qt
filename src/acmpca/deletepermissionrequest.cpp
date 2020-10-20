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

#include "deletepermissionrequest.h"
#include "deletepermissionrequest_p.h"
#include "deletepermissionresponse.h"
#include "acmpcarequest_p.h"

namespace QtAws {
namespace ACMPCA {

/*!
 * \class QtAws::ACMPCA::DeletePermissionRequest
 * \brief The DeletePermissionRequest class provides an interface for ACMPCA DeletePermission requests.
 *
 * \inmodule QtAwsACMPCA
 *
 *  This is the <i>ACM Private CA API Reference</i>. It provides descriptions, syntax, and usage examples for each of the
 *  actions and data types involved in creating and managing private certificate authorities (CA) for your
 * 
 *  organization>
 * 
 *  The documentation for each action shows the Query API request parameters and the XML response. Alternatively, you can
 *  use one of the AWS SDKs to access an API that's tailored to the programming language or platform that you're using. For
 *  more information, see <a href="https://aws.amazon.com/tools/#SDKs">AWS
 * 
 *  SDKs</a>> <note>
 * 
 *  Each ACM Private CA API action has a throttling limit which determines the number of times the action can be called per
 *  second. For more information, see <a
 *  href="https://docs.aws.amazon.com/acm-pca/latest/userguide/PcaLimits.html#PcaLimits-api">API Rate Limits in ACM Private
 *  CA</a> in the ACM Private CA user
 *
 * \sa AcmpcaClient::deletePermission
 */

/*!
 * Constructs a copy of \a other.
 */
DeletePermissionRequest::DeletePermissionRequest(const DeletePermissionRequest &other)
    : AcmpcaRequest(new DeletePermissionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeletePermissionRequest object.
 */
DeletePermissionRequest::DeletePermissionRequest()
    : AcmpcaRequest(new DeletePermissionRequestPrivate(AcmpcaRequest::DeletePermissionAction, this))
{

}

/*!
 * \reimp
 */
bool DeletePermissionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeletePermissionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeletePermissionRequest::response(QNetworkReply * const reply) const
{
    return new DeletePermissionResponse(*this, reply);
}

/*!
 * \class QtAws::ACMPCA::DeletePermissionRequestPrivate
 * \brief The DeletePermissionRequestPrivate class provides private implementation for DeletePermissionRequest.
 * \internal
 *
 * \inmodule QtAwsACMPCA
 */

/*!
 * Constructs a DeletePermissionRequestPrivate object for Acmpca \a action,
 * with public implementation \a q.
 */
DeletePermissionRequestPrivate::DeletePermissionRequestPrivate(
    const AcmpcaRequest::Action action, DeletePermissionRequest * const q)
    : AcmpcaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeletePermissionRequest
 * class' copy constructor.
 */
DeletePermissionRequestPrivate::DeletePermissionRequestPrivate(
    const DeletePermissionRequestPrivate &other, DeletePermissionRequest * const q)
    : AcmpcaRequestPrivate(other, q)
{

}

} // namespace ACMPCA
} // namespace QtAws
