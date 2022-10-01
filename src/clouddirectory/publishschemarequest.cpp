// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "publishschemarequest.h"
#include "publishschemarequest_p.h"
#include "publishschemaresponse.h"
#include "clouddirectoryrequest_p.h"

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::PublishSchemaRequest
 * \brief The PublishSchemaRequest class provides an interface for CloudDirectory PublishSchema requests.
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
 * \sa CloudDirectoryClient::publishSchema
 */

/*!
 * Constructs a copy of \a other.
 */
PublishSchemaRequest::PublishSchemaRequest(const PublishSchemaRequest &other)
    : CloudDirectoryRequest(new PublishSchemaRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PublishSchemaRequest object.
 */
PublishSchemaRequest::PublishSchemaRequest()
    : CloudDirectoryRequest(new PublishSchemaRequestPrivate(CloudDirectoryRequest::PublishSchemaAction, this))
{

}

/*!
 * \reimp
 */
bool PublishSchemaRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PublishSchemaResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PublishSchemaRequest::response(QNetworkReply * const reply) const
{
    return new PublishSchemaResponse(*this, reply);
}

/*!
 * \class QtAws::CloudDirectory::PublishSchemaRequestPrivate
 * \brief The PublishSchemaRequestPrivate class provides private implementation for PublishSchemaRequest.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a PublishSchemaRequestPrivate object for CloudDirectory \a action,
 * with public implementation \a q.
 */
PublishSchemaRequestPrivate::PublishSchemaRequestPrivate(
    const CloudDirectoryRequest::Action action, PublishSchemaRequest * const q)
    : CloudDirectoryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PublishSchemaRequest
 * class' copy constructor.
 */
PublishSchemaRequestPrivate::PublishSchemaRequestPrivate(
    const PublishSchemaRequestPrivate &other, PublishSchemaRequest * const q)
    : CloudDirectoryRequestPrivate(other, q)
{

}

} // namespace CloudDirectory
} // namespace QtAws
