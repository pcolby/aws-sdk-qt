// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "gettypedlinkfacetinformationrequest.h"
#include "gettypedlinkfacetinformationrequest_p.h"
#include "gettypedlinkfacetinformationresponse.h"
#include "clouddirectoryrequest_p.h"

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::GetTypedLinkFacetInformationRequest
 * \brief The GetTypedLinkFacetInformationRequest class provides an interface for CloudDirectory GetTypedLinkFacetInformation requests.
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
 * \sa CloudDirectoryClient::getTypedLinkFacetInformation
 */

/*!
 * Constructs a copy of \a other.
 */
GetTypedLinkFacetInformationRequest::GetTypedLinkFacetInformationRequest(const GetTypedLinkFacetInformationRequest &other)
    : CloudDirectoryRequest(new GetTypedLinkFacetInformationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetTypedLinkFacetInformationRequest object.
 */
GetTypedLinkFacetInformationRequest::GetTypedLinkFacetInformationRequest()
    : CloudDirectoryRequest(new GetTypedLinkFacetInformationRequestPrivate(CloudDirectoryRequest::GetTypedLinkFacetInformationAction, this))
{

}

/*!
 * \reimp
 */
bool GetTypedLinkFacetInformationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetTypedLinkFacetInformationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetTypedLinkFacetInformationRequest::response(QNetworkReply * const reply) const
{
    return new GetTypedLinkFacetInformationResponse(*this, reply);
}

/*!
 * \class QtAws::CloudDirectory::GetTypedLinkFacetInformationRequestPrivate
 * \brief The GetTypedLinkFacetInformationRequestPrivate class provides private implementation for GetTypedLinkFacetInformationRequest.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a GetTypedLinkFacetInformationRequestPrivate object for CloudDirectory \a action,
 * with public implementation \a q.
 */
GetTypedLinkFacetInformationRequestPrivate::GetTypedLinkFacetInformationRequestPrivate(
    const CloudDirectoryRequest::Action action, GetTypedLinkFacetInformationRequest * const q)
    : CloudDirectoryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetTypedLinkFacetInformationRequest
 * class' copy constructor.
 */
GetTypedLinkFacetInformationRequestPrivate::GetTypedLinkFacetInformationRequestPrivate(
    const GetTypedLinkFacetInformationRequestPrivate &other, GetTypedLinkFacetInformationRequest * const q)
    : CloudDirectoryRequestPrivate(other, q)
{

}

} // namespace CloudDirectory
} // namespace QtAws
