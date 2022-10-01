// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getfacetrequest.h"
#include "getfacetrequest_p.h"
#include "getfacetresponse.h"
#include "clouddirectoryrequest_p.h"

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::GetFacetRequest
 * \brief The GetFacetRequest class provides an interface for CloudDirectory GetFacet requests.
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
 * \sa CloudDirectoryClient::getFacet
 */

/*!
 * Constructs a copy of \a other.
 */
GetFacetRequest::GetFacetRequest(const GetFacetRequest &other)
    : CloudDirectoryRequest(new GetFacetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetFacetRequest object.
 */
GetFacetRequest::GetFacetRequest()
    : CloudDirectoryRequest(new GetFacetRequestPrivate(CloudDirectoryRequest::GetFacetAction, this))
{

}

/*!
 * \reimp
 */
bool GetFacetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetFacetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetFacetRequest::response(QNetworkReply * const reply) const
{
    return new GetFacetResponse(*this, reply);
}

/*!
 * \class QtAws::CloudDirectory::GetFacetRequestPrivate
 * \brief The GetFacetRequestPrivate class provides private implementation for GetFacetRequest.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a GetFacetRequestPrivate object for CloudDirectory \a action,
 * with public implementation \a q.
 */
GetFacetRequestPrivate::GetFacetRequestPrivate(
    const CloudDirectoryRequest::Action action, GetFacetRequest * const q)
    : CloudDirectoryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetFacetRequest
 * class' copy constructor.
 */
GetFacetRequestPrivate::GetFacetRequestPrivate(
    const GetFacetRequestPrivate &other, GetFacetRequest * const q)
    : CloudDirectoryRequestPrivate(other, q)
{

}

} // namespace CloudDirectory
} // namespace QtAws
