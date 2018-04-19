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

#include "lookuppolicyrequest.h"
#include "lookuppolicyrequest_p.h"
#include "lookuppolicyresponse.h"
#include "clouddirectoryrequest_p.h"

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::LookupPolicyRequest
 * \brief The LookupPolicyRequest class provides an interface for CloudDirectory LookupPolicy requests.
 *
 * \inmodule QtAwsCloudDirectory
 *
 *  <fullname>Amazon Cloud Directory</fullname>
 * 
 *  Amazon Cloud Directory is a component of the AWS Directory Service that simplifies the development and management of
 *  cloud-scale web, mobile, and IoT applications. This guide describes the Cloud Directory operations that you can call
 *  programmatically and includes detailed information on data types and errors. For information about AWS Directory
 *  Services features, see <a href="https://aws.amazon.com/directoryservice/">AWS Directory Service</a> and the <a
 *  href="http://docs.aws.amazon.com/directoryservice/latest/admin-guide/what_is.html">AWS Directory Service Administration
 *
 * \sa CloudDirectoryClient::lookupPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
LookupPolicyRequest::LookupPolicyRequest(const LookupPolicyRequest &other)
    : CloudDirectoryRequest(new LookupPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a LookupPolicyRequest object.
 */
LookupPolicyRequest::LookupPolicyRequest()
    : CloudDirectoryRequest(new LookupPolicyRequestPrivate(CloudDirectoryRequest::LookupPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool LookupPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a LookupPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * LookupPolicyRequest::response(QNetworkReply * const reply) const
{
    return new LookupPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::CloudDirectory::LookupPolicyRequestPrivate
 * \brief The LookupPolicyRequestPrivate class provides private implementation for LookupPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 *
 * Constructs a LookupPolicyRequestPrivate object for CloudDirectory \a action with,
 * public implementation \a q.
 */
LookupPolicyRequestPrivate::LookupPolicyRequestPrivate(
    const CloudDirectoryRequest::Action action, LookupPolicyRequest * const q)
    : CloudDirectoryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the LookupPolicyRequest
 * class' copy constructor.
 */
LookupPolicyRequestPrivate::LookupPolicyRequestPrivate(
    const LookupPolicyRequestPrivate &other, LookupPolicyRequest * const q)
    : CloudDirectoryRequestPrivate(other, q)
{

}

} // namespace CloudDirectory
} // namespace QtAws
