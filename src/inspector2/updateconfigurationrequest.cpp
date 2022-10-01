// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateconfigurationrequest.h"
#include "updateconfigurationrequest_p.h"
#include "updateconfigurationresponse.h"
#include "inspector2request_p.h"

namespace QtAws {
namespace Inspector2 {

/*!
 * \class QtAws::Inspector2::UpdateConfigurationRequest
 * \brief The UpdateConfigurationRequest class provides an interface for Inspector2 UpdateConfiguration requests.
 *
 * \inmodule QtAwsInspector2
 *
 *  Amazon Inspector is a vulnerability discovery service that automates continuous scanning for security vulnerabilities
 *  within your Amazon EC2 and Amazon ECR
 *
 * \sa Inspector2Client::updateConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateConfigurationRequest::UpdateConfigurationRequest(const UpdateConfigurationRequest &other)
    : Inspector2Request(new UpdateConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateConfigurationRequest object.
 */
UpdateConfigurationRequest::UpdateConfigurationRequest()
    : Inspector2Request(new UpdateConfigurationRequestPrivate(Inspector2Request::UpdateConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new UpdateConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::Inspector2::UpdateConfigurationRequestPrivate
 * \brief The UpdateConfigurationRequestPrivate class provides private implementation for UpdateConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsInspector2
 */

/*!
 * Constructs a UpdateConfigurationRequestPrivate object for Inspector2 \a action,
 * with public implementation \a q.
 */
UpdateConfigurationRequestPrivate::UpdateConfigurationRequestPrivate(
    const Inspector2Request::Action action, UpdateConfigurationRequest * const q)
    : Inspector2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateConfigurationRequest
 * class' copy constructor.
 */
UpdateConfigurationRequestPrivate::UpdateConfigurationRequestPrivate(
    const UpdateConfigurationRequestPrivate &other, UpdateConfigurationRequest * const q)
    : Inspector2RequestPrivate(other, q)
{

}

} // namespace Inspector2
} // namespace QtAws
