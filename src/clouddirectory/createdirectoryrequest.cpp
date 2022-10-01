// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createdirectoryrequest.h"
#include "createdirectoryrequest_p.h"
#include "createdirectoryresponse.h"
#include "clouddirectoryrequest_p.h"

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::CreateDirectoryRequest
 * \brief The CreateDirectoryRequest class provides an interface for CloudDirectory CreateDirectory requests.
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
 * \sa CloudDirectoryClient::createDirectory
 */

/*!
 * Constructs a copy of \a other.
 */
CreateDirectoryRequest::CreateDirectoryRequest(const CreateDirectoryRequest &other)
    : CloudDirectoryRequest(new CreateDirectoryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateDirectoryRequest object.
 */
CreateDirectoryRequest::CreateDirectoryRequest()
    : CloudDirectoryRequest(new CreateDirectoryRequestPrivate(CloudDirectoryRequest::CreateDirectoryAction, this))
{

}

/*!
 * \reimp
 */
bool CreateDirectoryRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateDirectoryResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateDirectoryRequest::response(QNetworkReply * const reply) const
{
    return new CreateDirectoryResponse(*this, reply);
}

/*!
 * \class QtAws::CloudDirectory::CreateDirectoryRequestPrivate
 * \brief The CreateDirectoryRequestPrivate class provides private implementation for CreateDirectoryRequest.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a CreateDirectoryRequestPrivate object for CloudDirectory \a action,
 * with public implementation \a q.
 */
CreateDirectoryRequestPrivate::CreateDirectoryRequestPrivate(
    const CloudDirectoryRequest::Action action, CreateDirectoryRequest * const q)
    : CloudDirectoryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateDirectoryRequest
 * class' copy constructor.
 */
CreateDirectoryRequestPrivate::CreateDirectoryRequestPrivate(
    const CreateDirectoryRequestPrivate &other, CreateDirectoryRequest * const q)
    : CloudDirectoryRequestPrivate(other, q)
{

}

} // namespace CloudDirectory
} // namespace QtAws
