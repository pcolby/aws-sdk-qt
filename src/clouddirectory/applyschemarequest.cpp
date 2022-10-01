// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "applyschemarequest.h"
#include "applyschemarequest_p.h"
#include "applyschemaresponse.h"
#include "clouddirectoryrequest_p.h"

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::ApplySchemaRequest
 * \brief The ApplySchemaRequest class provides an interface for CloudDirectory ApplySchema requests.
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
 * \sa CloudDirectoryClient::applySchema
 */

/*!
 * Constructs a copy of \a other.
 */
ApplySchemaRequest::ApplySchemaRequest(const ApplySchemaRequest &other)
    : CloudDirectoryRequest(new ApplySchemaRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ApplySchemaRequest object.
 */
ApplySchemaRequest::ApplySchemaRequest()
    : CloudDirectoryRequest(new ApplySchemaRequestPrivate(CloudDirectoryRequest::ApplySchemaAction, this))
{

}

/*!
 * \reimp
 */
bool ApplySchemaRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ApplySchemaResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ApplySchemaRequest::response(QNetworkReply * const reply) const
{
    return new ApplySchemaResponse(*this, reply);
}

/*!
 * \class QtAws::CloudDirectory::ApplySchemaRequestPrivate
 * \brief The ApplySchemaRequestPrivate class provides private implementation for ApplySchemaRequest.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a ApplySchemaRequestPrivate object for CloudDirectory \a action,
 * with public implementation \a q.
 */
ApplySchemaRequestPrivate::ApplySchemaRequestPrivate(
    const CloudDirectoryRequest::Action action, ApplySchemaRequest * const q)
    : CloudDirectoryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ApplySchemaRequest
 * class' copy constructor.
 */
ApplySchemaRequestPrivate::ApplySchemaRequestPrivate(
    const ApplySchemaRequestPrivate &other, ApplySchemaRequest * const q)
    : CloudDirectoryRequestPrivate(other, q)
{

}

} // namespace CloudDirectory
} // namespace QtAws
