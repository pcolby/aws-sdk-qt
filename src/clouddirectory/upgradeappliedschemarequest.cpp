// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "upgradeappliedschemarequest.h"
#include "upgradeappliedschemarequest_p.h"
#include "upgradeappliedschemaresponse.h"
#include "clouddirectoryrequest_p.h"

namespace QtAws {
namespace CloudDirectory {

/*!
 * \class QtAws::CloudDirectory::UpgradeAppliedSchemaRequest
 * \brief The UpgradeAppliedSchemaRequest class provides an interface for CloudDirectory UpgradeAppliedSchema requests.
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
 * \sa CloudDirectoryClient::upgradeAppliedSchema
 */

/*!
 * Constructs a copy of \a other.
 */
UpgradeAppliedSchemaRequest::UpgradeAppliedSchemaRequest(const UpgradeAppliedSchemaRequest &other)
    : CloudDirectoryRequest(new UpgradeAppliedSchemaRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpgradeAppliedSchemaRequest object.
 */
UpgradeAppliedSchemaRequest::UpgradeAppliedSchemaRequest()
    : CloudDirectoryRequest(new UpgradeAppliedSchemaRequestPrivate(CloudDirectoryRequest::UpgradeAppliedSchemaAction, this))
{

}

/*!
 * \reimp
 */
bool UpgradeAppliedSchemaRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpgradeAppliedSchemaResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpgradeAppliedSchemaRequest::response(QNetworkReply * const reply) const
{
    return new UpgradeAppliedSchemaResponse(*this, reply);
}

/*!
 * \class QtAws::CloudDirectory::UpgradeAppliedSchemaRequestPrivate
 * \brief The UpgradeAppliedSchemaRequestPrivate class provides private implementation for UpgradeAppliedSchemaRequest.
 * \internal
 *
 * \inmodule QtAwsCloudDirectory
 */

/*!
 * Constructs a UpgradeAppliedSchemaRequestPrivate object for CloudDirectory \a action,
 * with public implementation \a q.
 */
UpgradeAppliedSchemaRequestPrivate::UpgradeAppliedSchemaRequestPrivate(
    const CloudDirectoryRequest::Action action, UpgradeAppliedSchemaRequest * const q)
    : CloudDirectoryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpgradeAppliedSchemaRequest
 * class' copy constructor.
 */
UpgradeAppliedSchemaRequestPrivate::UpgradeAppliedSchemaRequestPrivate(
    const UpgradeAppliedSchemaRequestPrivate &other, UpgradeAppliedSchemaRequest * const q)
    : CloudDirectoryRequestPrivate(other, q)
{

}

} // namespace CloudDirectory
} // namespace QtAws
