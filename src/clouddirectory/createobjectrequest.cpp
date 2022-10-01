// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createobjectrequest.h"
#include "createobjectrequest_p.h"
#include "createobjectresponse.h"
#include "clouddirectoryrequest_p.h"

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::CreateObjectRequest
 * \brief The CreateObjectRequest class provides an interface for CloudDirectory CreateObject requests.
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
 * \sa CloudDirectoryClient::createObject
 */

/*!
 * Constructs a copy of \a other.
 */
CreateObjectRequest::CreateObjectRequest(const CreateObjectRequest &other)
    : CloudDirectoryRequest(new CreateObjectRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateObjectRequest object.
 */
CreateObjectRequest::CreateObjectRequest()
    : CloudDirectoryRequest(new CreateObjectRequestPrivate(CloudDirectoryRequest::CreateObjectAction, this))
{

}

/*!
 * \reimp
 */
bool CreateObjectRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateObjectResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateObjectRequest::response(QNetworkReply * const reply) const
{
    return new CreateObjectResponse(*this, reply);
}

/*!
 * \class QtAws::CloudDirectory::CreateObjectRequestPrivate
 * \brief The CreateObjectRequestPrivate class provides private implementation for CreateObjectRequest.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a CreateObjectRequestPrivate object for CloudDirectory \a action,
 * with public implementation \a q.
 */
CreateObjectRequestPrivate::CreateObjectRequestPrivate(
    const CloudDirectoryRequest::Action action, CreateObjectRequest * const q)
    : CloudDirectoryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateObjectRequest
 * class' copy constructor.
 */
CreateObjectRequestPrivate::CreateObjectRequestPrivate(
    const CreateObjectRequestPrivate &other, CreateObjectRequest * const q)
    : CloudDirectoryRequestPrivate(other, q)
{

}

} // namespace CloudDirectory
} // namespace QtAws
