// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "addfacettoobjectrequest.h"
#include "addfacettoobjectrequest_p.h"
#include "addfacettoobjectresponse.h"
#include "clouddirectoryrequest_p.h"

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::AddFacetToObjectRequest
 * \brief The AddFacetToObjectRequest class provides an interface for CloudDirectory AddFacetToObject requests.
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
 * \sa CloudDirectoryClient::addFacetToObject
 */

/*!
 * Constructs a copy of \a other.
 */
AddFacetToObjectRequest::AddFacetToObjectRequest(const AddFacetToObjectRequest &other)
    : CloudDirectoryRequest(new AddFacetToObjectRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AddFacetToObjectRequest object.
 */
AddFacetToObjectRequest::AddFacetToObjectRequest()
    : CloudDirectoryRequest(new AddFacetToObjectRequestPrivate(CloudDirectoryRequest::AddFacetToObjectAction, this))
{

}

/*!
 * \reimp
 */
bool AddFacetToObjectRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AddFacetToObjectResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AddFacetToObjectRequest::response(QNetworkReply * const reply) const
{
    return new AddFacetToObjectResponse(*this, reply);
}

/*!
 * \class QtAws::CloudDirectory::AddFacetToObjectRequestPrivate
 * \brief The AddFacetToObjectRequestPrivate class provides private implementation for AddFacetToObjectRequest.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a AddFacetToObjectRequestPrivate object for CloudDirectory \a action,
 * with public implementation \a q.
 */
AddFacetToObjectRequestPrivate::AddFacetToObjectRequestPrivate(
    const CloudDirectoryRequest::Action action, AddFacetToObjectRequest * const q)
    : CloudDirectoryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AddFacetToObjectRequest
 * class' copy constructor.
 */
AddFacetToObjectRequestPrivate::AddFacetToObjectRequestPrivate(
    const AddFacetToObjectRequestPrivate &other, AddFacetToObjectRequest * const q)
    : CloudDirectoryRequestPrivate(other, q)
{

}

} // namespace CloudDirectory
} // namespace QtAws
