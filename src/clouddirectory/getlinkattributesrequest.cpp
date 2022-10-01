// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getlinkattributesrequest.h"
#include "getlinkattributesrequest_p.h"
#include "getlinkattributesresponse.h"
#include "clouddirectoryrequest_p.h"

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::GetLinkAttributesRequest
 * \brief The GetLinkAttributesRequest class provides an interface for CloudDirectory GetLinkAttributes requests.
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
 * \sa CloudDirectoryClient::getLinkAttributes
 */

/*!
 * Constructs a copy of \a other.
 */
GetLinkAttributesRequest::GetLinkAttributesRequest(const GetLinkAttributesRequest &other)
    : CloudDirectoryRequest(new GetLinkAttributesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetLinkAttributesRequest object.
 */
GetLinkAttributesRequest::GetLinkAttributesRequest()
    : CloudDirectoryRequest(new GetLinkAttributesRequestPrivate(CloudDirectoryRequest::GetLinkAttributesAction, this))
{

}

/*!
 * \reimp
 */
bool GetLinkAttributesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetLinkAttributesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetLinkAttributesRequest::response(QNetworkReply * const reply) const
{
    return new GetLinkAttributesResponse(*this, reply);
}

/*!
 * \class QtAws::CloudDirectory::GetLinkAttributesRequestPrivate
 * \brief The GetLinkAttributesRequestPrivate class provides private implementation for GetLinkAttributesRequest.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a GetLinkAttributesRequestPrivate object for CloudDirectory \a action,
 * with public implementation \a q.
 */
GetLinkAttributesRequestPrivate::GetLinkAttributesRequestPrivate(
    const CloudDirectoryRequest::Action action, GetLinkAttributesRequest * const q)
    : CloudDirectoryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetLinkAttributesRequest
 * class' copy constructor.
 */
GetLinkAttributesRequestPrivate::GetLinkAttributesRequestPrivate(
    const GetLinkAttributesRequestPrivate &other, GetLinkAttributesRequest * const q)
    : CloudDirectoryRequestPrivate(other, q)
{

}

} // namespace CloudDirectory
} // namespace QtAws
