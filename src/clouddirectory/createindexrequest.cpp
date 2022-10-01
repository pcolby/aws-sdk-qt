// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createindexrequest.h"
#include "createindexrequest_p.h"
#include "createindexresponse.h"
#include "clouddirectoryrequest_p.h"

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::CreateIndexRequest
 * \brief The CreateIndexRequest class provides an interface for CloudDirectory CreateIndex requests.
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
 * \sa CloudDirectoryClient::createIndex
 */

/*!
 * Constructs a copy of \a other.
 */
CreateIndexRequest::CreateIndexRequest(const CreateIndexRequest &other)
    : CloudDirectoryRequest(new CreateIndexRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateIndexRequest object.
 */
CreateIndexRequest::CreateIndexRequest()
    : CloudDirectoryRequest(new CreateIndexRequestPrivate(CloudDirectoryRequest::CreateIndexAction, this))
{

}

/*!
 * \reimp
 */
bool CreateIndexRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateIndexResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateIndexRequest::response(QNetworkReply * const reply) const
{
    return new CreateIndexResponse(*this, reply);
}

/*!
 * \class QtAws::CloudDirectory::CreateIndexRequestPrivate
 * \brief The CreateIndexRequestPrivate class provides private implementation for CreateIndexRequest.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a CreateIndexRequestPrivate object for CloudDirectory \a action,
 * with public implementation \a q.
 */
CreateIndexRequestPrivate::CreateIndexRequestPrivate(
    const CloudDirectoryRequest::Action action, CreateIndexRequest * const q)
    : CloudDirectoryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateIndexRequest
 * class' copy constructor.
 */
CreateIndexRequestPrivate::CreateIndexRequestPrivate(
    const CreateIndexRequestPrivate &other, CreateIndexRequest * const q)
    : CloudDirectoryRequestPrivate(other, q)
{

}

} // namespace CloudDirectory
} // namespace QtAws
