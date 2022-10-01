// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteaccesscontrolconfigurationrequest.h"
#include "deleteaccesscontrolconfigurationrequest_p.h"
#include "deleteaccesscontrolconfigurationresponse.h"
#include "kendrarequest_p.h"

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::DeleteAccessControlConfigurationRequest
 * \brief The DeleteAccessControlConfigurationRequest class provides an interface for Kendra DeleteAccessControlConfiguration requests.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::deleteAccessControlConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteAccessControlConfigurationRequest::DeleteAccessControlConfigurationRequest(const DeleteAccessControlConfigurationRequest &other)
    : KendraRequest(new DeleteAccessControlConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteAccessControlConfigurationRequest object.
 */
DeleteAccessControlConfigurationRequest::DeleteAccessControlConfigurationRequest()
    : KendraRequest(new DeleteAccessControlConfigurationRequestPrivate(KendraRequest::DeleteAccessControlConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteAccessControlConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteAccessControlConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteAccessControlConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new DeleteAccessControlConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::Kendra::DeleteAccessControlConfigurationRequestPrivate
 * \brief The DeleteAccessControlConfigurationRequestPrivate class provides private implementation for DeleteAccessControlConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a DeleteAccessControlConfigurationRequestPrivate object for Kendra \a action,
 * with public implementation \a q.
 */
DeleteAccessControlConfigurationRequestPrivate::DeleteAccessControlConfigurationRequestPrivate(
    const KendraRequest::Action action, DeleteAccessControlConfigurationRequest * const q)
    : KendraRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteAccessControlConfigurationRequest
 * class' copy constructor.
 */
DeleteAccessControlConfigurationRequestPrivate::DeleteAccessControlConfigurationRequestPrivate(
    const DeleteAccessControlConfigurationRequestPrivate &other, DeleteAccessControlConfigurationRequest * const q)
    : KendraRequestPrivate(other, q)
{

}

} // namespace Kendra
} // namespace QtAws
