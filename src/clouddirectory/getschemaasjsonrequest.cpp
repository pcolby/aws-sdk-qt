// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getschemaasjsonrequest.h"
#include "getschemaasjsonrequest_p.h"
#include "getschemaasjsonresponse.h"
#include "clouddirectoryrequest_p.h"

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::GetSchemaAsJsonRequest
 * \brief The GetSchemaAsJsonRequest class provides an interface for CloudDirectory GetSchemaAsJson requests.
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
 * \sa CloudDirectoryClient::getSchemaAsJson
 */

/*!
 * Constructs a copy of \a other.
 */
GetSchemaAsJsonRequest::GetSchemaAsJsonRequest(const GetSchemaAsJsonRequest &other)
    : CloudDirectoryRequest(new GetSchemaAsJsonRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetSchemaAsJsonRequest object.
 */
GetSchemaAsJsonRequest::GetSchemaAsJsonRequest()
    : CloudDirectoryRequest(new GetSchemaAsJsonRequestPrivate(CloudDirectoryRequest::GetSchemaAsJsonAction, this))
{

}

/*!
 * \reimp
 */
bool GetSchemaAsJsonRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetSchemaAsJsonResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSchemaAsJsonRequest::response(QNetworkReply * const reply) const
{
    return new GetSchemaAsJsonResponse(*this, reply);
}

/*!
 * \class QtAws::CloudDirectory::GetSchemaAsJsonRequestPrivate
 * \brief The GetSchemaAsJsonRequestPrivate class provides private implementation for GetSchemaAsJsonRequest.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a GetSchemaAsJsonRequestPrivate object for CloudDirectory \a action,
 * with public implementation \a q.
 */
GetSchemaAsJsonRequestPrivate::GetSchemaAsJsonRequestPrivate(
    const CloudDirectoryRequest::Action action, GetSchemaAsJsonRequest * const q)
    : CloudDirectoryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetSchemaAsJsonRequest
 * class' copy constructor.
 */
GetSchemaAsJsonRequestPrivate::GetSchemaAsJsonRequestPrivate(
    const GetSchemaAsJsonRequestPrivate &other, GetSchemaAsJsonRequest * const q)
    : CloudDirectoryRequestPrivate(other, q)
{

}

} // namespace CloudDirectory
} // namespace QtAws
