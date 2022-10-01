// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createschemarequest.h"
#include "createschemarequest_p.h"
#include "createschemaresponse.h"
#include "clouddirectoryrequest_p.h"

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::CreateSchemaRequest
 * \brief The CreateSchemaRequest class provides an interface for CloudDirectory CreateSchema requests.
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
 * \sa CloudDirectoryClient::createSchema
 */

/*!
 * Constructs a copy of \a other.
 */
CreateSchemaRequest::CreateSchemaRequest(const CreateSchemaRequest &other)
    : CloudDirectoryRequest(new CreateSchemaRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateSchemaRequest object.
 */
CreateSchemaRequest::CreateSchemaRequest()
    : CloudDirectoryRequest(new CreateSchemaRequestPrivate(CloudDirectoryRequest::CreateSchemaAction, this))
{

}

/*!
 * \reimp
 */
bool CreateSchemaRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateSchemaResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateSchemaRequest::response(QNetworkReply * const reply) const
{
    return new CreateSchemaResponse(*this, reply);
}

/*!
 * \class QtAws::CloudDirectory::CreateSchemaRequestPrivate
 * \brief The CreateSchemaRequestPrivate class provides private implementation for CreateSchemaRequest.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a CreateSchemaRequestPrivate object for CloudDirectory \a action,
 * with public implementation \a q.
 */
CreateSchemaRequestPrivate::CreateSchemaRequestPrivate(
    const CloudDirectoryRequest::Action action, CreateSchemaRequest * const q)
    : CloudDirectoryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateSchemaRequest
 * class' copy constructor.
 */
CreateSchemaRequestPrivate::CreateSchemaRequestPrivate(
    const CreateSchemaRequestPrivate &other, CreateSchemaRequest * const q)
    : CloudDirectoryRequestPrivate(other, q)
{

}

} // namespace CloudDirectory
} // namespace QtAws
