// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletereplicationconfigurationrequest.h"
#include "deletereplicationconfigurationrequest_p.h"
#include "deletereplicationconfigurationresponse.h"
#include "efsrequest_p.h"

namespace QtAws {
namespace Efs {

/*!
 * \class QtAws::Efs::DeleteReplicationConfigurationRequest
 * \brief The DeleteReplicationConfigurationRequest class provides an interface for Efs DeleteReplicationConfiguration requests.
 *
 * \inmodule QtAwsEfs
 *
 *  <fullname>Amazon Elastic File System</fullname>
 * 
 *  Amazon Elastic File System (Amazon EFS) provides simple, scalable file storage for use with Amazon EC2 Linux and Mac
 *  instances in the Amazon Web Services Cloud. With Amazon EFS, storage capacity is elastic, growing and shrinking
 *  automatically as you add and remove files, so that your applications have the storage they need, when they need it. For
 *  more information, see the <a href="https://docs.aws.amazon.com/efs/latest/ug/api-reference.html">Amazon Elastic File
 *  System API Reference</a> and the <a href="https://docs.aws.amazon.com/efs/latest/ug/whatisefs.html">Amazon Elastic File
 *  System User
 *
 * \sa EfsClient::deleteReplicationConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteReplicationConfigurationRequest::DeleteReplicationConfigurationRequest(const DeleteReplicationConfigurationRequest &other)
    : EfsRequest(new DeleteReplicationConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteReplicationConfigurationRequest object.
 */
DeleteReplicationConfigurationRequest::DeleteReplicationConfigurationRequest()
    : EfsRequest(new DeleteReplicationConfigurationRequestPrivate(EfsRequest::DeleteReplicationConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteReplicationConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteReplicationConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteReplicationConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new DeleteReplicationConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::Efs::DeleteReplicationConfigurationRequestPrivate
 * \brief The DeleteReplicationConfigurationRequestPrivate class provides private implementation for DeleteReplicationConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsEfs
 */

/*!
 * Constructs a DeleteReplicationConfigurationRequestPrivate object for Efs \a action,
 * with public implementation \a q.
 */
DeleteReplicationConfigurationRequestPrivate::DeleteReplicationConfigurationRequestPrivate(
    const EfsRequest::Action action, DeleteReplicationConfigurationRequest * const q)
    : EfsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteReplicationConfigurationRequest
 * class' copy constructor.
 */
DeleteReplicationConfigurationRequestPrivate::DeleteReplicationConfigurationRequestPrivate(
    const DeleteReplicationConfigurationRequestPrivate &other, DeleteReplicationConfigurationRequest * const q)
    : EfsRequestPrivate(other, q)
{

}

} // namespace Efs
} // namespace QtAws
