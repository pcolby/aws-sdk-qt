// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getconfigurationrequest.h"
#include "getconfigurationrequest_p.h"
#include "getconfigurationresponse.h"
#include "inspector2request_p.h"

namespace QtAws {
namespace Inspector2 {

/*!
 * \class QtAws::Inspector2::GetConfigurationRequest
 * \brief The GetConfigurationRequest class provides an interface for Inspector2 GetConfiguration requests.
 *
 * \inmodule QtAwsInspector2
 *
 *  Amazon Inspector is a vulnerability discovery service that automates continuous scanning for security vulnerabilities
 *  within your Amazon EC2 and Amazon ECR
 *
 * \sa Inspector2Client::getConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
GetConfigurationRequest::GetConfigurationRequest(const GetConfigurationRequest &other)
    : Inspector2Request(new GetConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetConfigurationRequest object.
 */
GetConfigurationRequest::GetConfigurationRequest()
    : Inspector2Request(new GetConfigurationRequestPrivate(Inspector2Request::GetConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool GetConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new GetConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::Inspector2::GetConfigurationRequestPrivate
 * \brief The GetConfigurationRequestPrivate class provides private implementation for GetConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsInspector2
 */

/*!
 * Constructs a GetConfigurationRequestPrivate object for Inspector2 \a action,
 * with public implementation \a q.
 */
GetConfigurationRequestPrivate::GetConfigurationRequestPrivate(
    const Inspector2Request::Action action, GetConfigurationRequest * const q)
    : Inspector2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetConfigurationRequest
 * class' copy constructor.
 */
GetConfigurationRequestPrivate::GetConfigurationRequestPrivate(
    const GetConfigurationRequestPrivate &other, GetConfigurationRequest * const q)
    : Inspector2RequestPrivate(other, q)
{

}

} // namespace Inspector2
} // namespace QtAws
