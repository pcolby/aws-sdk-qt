// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateaccesscontrolconfigurationrequest.h"
#include "updateaccesscontrolconfigurationrequest_p.h"
#include "updateaccesscontrolconfigurationresponse.h"
#include "kendrarequest_p.h"

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::UpdateAccessControlConfigurationRequest
 * \brief The UpdateAccessControlConfigurationRequest class provides an interface for Kendra UpdateAccessControlConfiguration requests.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::updateAccessControlConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateAccessControlConfigurationRequest::UpdateAccessControlConfigurationRequest(const UpdateAccessControlConfigurationRequest &other)
    : KendraRequest(new UpdateAccessControlConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateAccessControlConfigurationRequest object.
 */
UpdateAccessControlConfigurationRequest::UpdateAccessControlConfigurationRequest()
    : KendraRequest(new UpdateAccessControlConfigurationRequestPrivate(KendraRequest::UpdateAccessControlConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateAccessControlConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateAccessControlConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateAccessControlConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new UpdateAccessControlConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::Kendra::UpdateAccessControlConfigurationRequestPrivate
 * \brief The UpdateAccessControlConfigurationRequestPrivate class provides private implementation for UpdateAccessControlConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a UpdateAccessControlConfigurationRequestPrivate object for Kendra \a action,
 * with public implementation \a q.
 */
UpdateAccessControlConfigurationRequestPrivate::UpdateAccessControlConfigurationRequestPrivate(
    const KendraRequest::Action action, UpdateAccessControlConfigurationRequest * const q)
    : KendraRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateAccessControlConfigurationRequest
 * class' copy constructor.
 */
UpdateAccessControlConfigurationRequestPrivate::UpdateAccessControlConfigurationRequestPrivate(
    const UpdateAccessControlConfigurationRequestPrivate &other, UpdateAccessControlConfigurationRequest * const q)
    : KendraRequestPrivate(other, q)
{

}

} // namespace Kendra
} // namespace QtAws
