// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putschemafromjsonrequest.h"
#include "putschemafromjsonrequest_p.h"
#include "putschemafromjsonresponse.h"
#include "clouddirectoryrequest_p.h"

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::PutSchemaFromJsonRequest
 * \brief The PutSchemaFromJsonRequest class provides an interface for CloudDirectory PutSchemaFromJson requests.
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
 * \sa CloudDirectoryClient::putSchemaFromJson
 */

/*!
 * Constructs a copy of \a other.
 */
PutSchemaFromJsonRequest::PutSchemaFromJsonRequest(const PutSchemaFromJsonRequest &other)
    : CloudDirectoryRequest(new PutSchemaFromJsonRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutSchemaFromJsonRequest object.
 */
PutSchemaFromJsonRequest::PutSchemaFromJsonRequest()
    : CloudDirectoryRequest(new PutSchemaFromJsonRequestPrivate(CloudDirectoryRequest::PutSchemaFromJsonAction, this))
{

}

/*!
 * \reimp
 */
bool PutSchemaFromJsonRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutSchemaFromJsonResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutSchemaFromJsonRequest::response(QNetworkReply * const reply) const
{
    return new PutSchemaFromJsonResponse(*this, reply);
}

/*!
 * \class QtAws::CloudDirectory::PutSchemaFromJsonRequestPrivate
 * \brief The PutSchemaFromJsonRequestPrivate class provides private implementation for PutSchemaFromJsonRequest.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a PutSchemaFromJsonRequestPrivate object for CloudDirectory \a action,
 * with public implementation \a q.
 */
PutSchemaFromJsonRequestPrivate::PutSchemaFromJsonRequestPrivate(
    const CloudDirectoryRequest::Action action, PutSchemaFromJsonRequest * const q)
    : CloudDirectoryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutSchemaFromJsonRequest
 * class' copy constructor.
 */
PutSchemaFromJsonRequestPrivate::PutSchemaFromJsonRequestPrivate(
    const PutSchemaFromJsonRequestPrivate &other, PutSchemaFromJsonRequest * const q)
    : CloudDirectoryRequestPrivate(other, q)
{

}

} // namespace CloudDirectory
} // namespace QtAws
