// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateorganizationconfigurationrequest.h"
#include "updateorganizationconfigurationrequest_p.h"
#include "updateorganizationconfigurationresponse.h"
#include "inspector2request_p.h"

namespace QtAws {
namespace Inspector2 {

/*!
 * \class QtAws::Inspector2::UpdateOrganizationConfigurationRequest
 * \brief The UpdateOrganizationConfigurationRequest class provides an interface for Inspector2 UpdateOrganizationConfiguration requests.
 *
 * \inmodule QtAwsInspector2
 *
 *  Amazon Inspector is a vulnerability discovery service that automates continuous scanning for security vulnerabilities
 *  within your Amazon EC2 and Amazon ECR
 *
 * \sa Inspector2Client::updateOrganizationConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateOrganizationConfigurationRequest::UpdateOrganizationConfigurationRequest(const UpdateOrganizationConfigurationRequest &other)
    : Inspector2Request(new UpdateOrganizationConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateOrganizationConfigurationRequest object.
 */
UpdateOrganizationConfigurationRequest::UpdateOrganizationConfigurationRequest()
    : Inspector2Request(new UpdateOrganizationConfigurationRequestPrivate(Inspector2Request::UpdateOrganizationConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateOrganizationConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateOrganizationConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateOrganizationConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new UpdateOrganizationConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::Inspector2::UpdateOrganizationConfigurationRequestPrivate
 * \brief The UpdateOrganizationConfigurationRequestPrivate class provides private implementation for UpdateOrganizationConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsInspector2
 */

/*!
 * Constructs a UpdateOrganizationConfigurationRequestPrivate object for Inspector2 \a action,
 * with public implementation \a q.
 */
UpdateOrganizationConfigurationRequestPrivate::UpdateOrganizationConfigurationRequestPrivate(
    const Inspector2Request::Action action, UpdateOrganizationConfigurationRequest * const q)
    : Inspector2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateOrganizationConfigurationRequest
 * class' copy constructor.
 */
UpdateOrganizationConfigurationRequestPrivate::UpdateOrganizationConfigurationRequestPrivate(
    const UpdateOrganizationConfigurationRequestPrivate &other, UpdateOrganizationConfigurationRequest * const q)
    : Inspector2RequestPrivate(other, q)
{

}

} // namespace Inspector2
} // namespace QtAws
