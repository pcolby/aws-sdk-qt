// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getobjectinformationrequest.h"
#include "getobjectinformationrequest_p.h"
#include "getobjectinformationresponse.h"
#include "clouddirectoryrequest_p.h"

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::GetObjectInformationRequest
 * \brief The GetObjectInformationRequest class provides an interface for CloudDirectory GetObjectInformation requests.
 *
 * \inmodule QtAwsCloudDirectory
 *
 *  <fullname>Amazon Cloud Directory</fullname>
 * 
 *  Amazon Cloud Directory is a component of the AWS Directory Service that simplifies the development and management of
 *  cloud-scale web, mobile, and IoT applications. This guide describes the Cloud Directory operations that you can call
 *  programmatically and includes detailed information on data types and errors. For information about Cloud Directory
 *  features, see <a href="https://aws.amazon.com/directoryservice/">AWS Directory Service</a> and the <a
 *  href="https://docs.aws.amazon.com/clouddirectory/latest/developerguide/what_is_cloud_directory.html">Amazon Cloud
 *  Directory Developer
 *
 * \sa CloudDirectoryClient::getObjectInformation
 */

/*!
 * Constructs a copy of \a other.
 */
GetObjectInformationRequest::GetObjectInformationRequest(const GetObjectInformationRequest &other)
    : CloudDirectoryRequest(new GetObjectInformationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetObjectInformationRequest object.
 */
GetObjectInformationRequest::GetObjectInformationRequest()
    : CloudDirectoryRequest(new GetObjectInformationRequestPrivate(CloudDirectoryRequest::GetObjectInformationAction, this))
{

}

/*!
 * \reimp
 */
bool GetObjectInformationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetObjectInformationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetObjectInformationRequest::response(QNetworkReply * const reply) const
{
    return new GetObjectInformationResponse(*this, reply);
}

/*!
 * \class QtAws::CloudDirectory::GetObjectInformationRequestPrivate
 * \brief The GetObjectInformationRequestPrivate class provides private implementation for GetObjectInformationRequest.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a GetObjectInformationRequestPrivate object for CloudDirectory \a action,
 * with public implementation \a q.
 */
GetObjectInformationRequestPrivate::GetObjectInformationRequestPrivate(
    const CloudDirectoryRequest::Action action, GetObjectInformationRequest * const q)
    : CloudDirectoryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetObjectInformationRequest
 * class' copy constructor.
 */
GetObjectInformationRequestPrivate::GetObjectInformationRequestPrivate(
    const GetObjectInformationRequestPrivate &other, GetObjectInformationRequest * const q)
    : CloudDirectoryRequestPrivate(other, q)
{

}

} // namespace CloudDirectory
} // namespace QtAws
