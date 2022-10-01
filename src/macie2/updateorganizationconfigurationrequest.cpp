// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateorganizationconfigurationrequest.h"
#include "updateorganizationconfigurationrequest_p.h"
#include "updateorganizationconfigurationresponse.h"
#include "macie2request_p.h"

namespace QtAws {
namespace Macie2 {

/*!
 * \class QtAws::Macie2::UpdateOrganizationConfigurationRequest
 * \brief The UpdateOrganizationConfigurationRequest class provides an interface for Macie2 UpdateOrganizationConfiguration requests.
 *
 * \inmodule QtAwsMacie2
 *
 *  Amazon Macie is a fully managed data security and data privacy service that uses machine learning and pattern matching
 *  to discover and protect your sensitive data in AWS. Macie automates the discovery of sensitive data, such as PII and
 *  intellectual property, to provide you with insight into the data that your organization stores in AWS. Macie also
 *  provides an inventory of your Amazon S3 buckets, which it continually monitors for you. If Macie detects sensitive data
 *  or potential data access issues, it generates detailed findings for you to review and act upon as
 *
 * \sa Macie2Client::updateOrganizationConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateOrganizationConfigurationRequest::UpdateOrganizationConfigurationRequest(const UpdateOrganizationConfigurationRequest &other)
    : Macie2Request(new UpdateOrganizationConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateOrganizationConfigurationRequest object.
 */
UpdateOrganizationConfigurationRequest::UpdateOrganizationConfigurationRequest()
    : Macie2Request(new UpdateOrganizationConfigurationRequestPrivate(Macie2Request::UpdateOrganizationConfigurationAction, this))
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
 * \class QtAws::Macie2::UpdateOrganizationConfigurationRequestPrivate
 * \brief The UpdateOrganizationConfigurationRequestPrivate class provides private implementation for UpdateOrganizationConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsMacie2
 */

/*!
 * Constructs a UpdateOrganizationConfigurationRequestPrivate object for Macie2 \a action,
 * with public implementation \a q.
 */
UpdateOrganizationConfigurationRequestPrivate::UpdateOrganizationConfigurationRequestPrivate(
    const Macie2Request::Action action, UpdateOrganizationConfigurationRequest * const q)
    : Macie2RequestPrivate(action, q)
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
    : Macie2RequestPrivate(other, q)
{

}

} // namespace Macie2
} // namespace QtAws
