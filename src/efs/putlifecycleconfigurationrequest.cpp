// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putlifecycleconfigurationrequest.h"
#include "putlifecycleconfigurationrequest_p.h"
#include "putlifecycleconfigurationresponse.h"
#include "efsrequest_p.h"

namespace QtAws {
namespace Efs {

/*!
 * \class QtAws::Efs::PutLifecycleConfigurationRequest
 * \brief The PutLifecycleConfigurationRequest class provides an interface for Efs PutLifecycleConfiguration requests.
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
 * \sa EfsClient::putLifecycleConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
PutLifecycleConfigurationRequest::PutLifecycleConfigurationRequest(const PutLifecycleConfigurationRequest &other)
    : EfsRequest(new PutLifecycleConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutLifecycleConfigurationRequest object.
 */
PutLifecycleConfigurationRequest::PutLifecycleConfigurationRequest()
    : EfsRequest(new PutLifecycleConfigurationRequestPrivate(EfsRequest::PutLifecycleConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool PutLifecycleConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutLifecycleConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutLifecycleConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new PutLifecycleConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::Efs::PutLifecycleConfigurationRequestPrivate
 * \brief The PutLifecycleConfigurationRequestPrivate class provides private implementation for PutLifecycleConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsEfs
 */

/*!
 * Constructs a PutLifecycleConfigurationRequestPrivate object for Efs \a action,
 * with public implementation \a q.
 */
PutLifecycleConfigurationRequestPrivate::PutLifecycleConfigurationRequestPrivate(
    const EfsRequest::Action action, PutLifecycleConfigurationRequest * const q)
    : EfsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutLifecycleConfigurationRequest
 * class' copy constructor.
 */
PutLifecycleConfigurationRequestPrivate::PutLifecycleConfigurationRequestPrivate(
    const PutLifecycleConfigurationRequestPrivate &other, PutLifecycleConfigurationRequest * const q)
    : EfsRequestPrivate(other, q)
{

}

} // namespace Efs
} // namespace QtAws
