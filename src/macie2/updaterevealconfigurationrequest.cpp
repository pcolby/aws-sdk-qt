// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updaterevealconfigurationrequest.h"
#include "updaterevealconfigurationrequest_p.h"
#include "updaterevealconfigurationresponse.h"
#include "macie2request_p.h"

namespace QtAws {
namespace Macie2 {

/*!
 * \class QtAws::Macie2::UpdateRevealConfigurationRequest
 * \brief The UpdateRevealConfigurationRequest class provides an interface for Macie2 UpdateRevealConfiguration requests.
 *
 * \inmodule QtAwsMacie2
 *
 *  Amazon Macie is a fully managed data security and data privacy service that uses machine learning and pattern matching
 *  to discover and protect your sensitive data in AWS. Macie automates the discovery of sensitive data, such as PII and
 *  intellectual property, to provide you with insight into the data that your organization stores in AWS. Macie also
 *  provides an inventory of your Amazon S3 buckets, which it continually monitors for you. If Macie detects sensitive data
 *  or potential data access issues, it generates detailed findings for you to review and act upon as
 *
 * \sa Macie2Client::updateRevealConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateRevealConfigurationRequest::UpdateRevealConfigurationRequest(const UpdateRevealConfigurationRequest &other)
    : Macie2Request(new UpdateRevealConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateRevealConfigurationRequest object.
 */
UpdateRevealConfigurationRequest::UpdateRevealConfigurationRequest()
    : Macie2Request(new UpdateRevealConfigurationRequestPrivate(Macie2Request::UpdateRevealConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateRevealConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateRevealConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateRevealConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new UpdateRevealConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::Macie2::UpdateRevealConfigurationRequestPrivate
 * \brief The UpdateRevealConfigurationRequestPrivate class provides private implementation for UpdateRevealConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsMacie2
 */

/*!
 * Constructs a UpdateRevealConfigurationRequestPrivate object for Macie2 \a action,
 * with public implementation \a q.
 */
UpdateRevealConfigurationRequestPrivate::UpdateRevealConfigurationRequestPrivate(
    const Macie2Request::Action action, UpdateRevealConfigurationRequest * const q)
    : Macie2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateRevealConfigurationRequest
 * class' copy constructor.
 */
UpdateRevealConfigurationRequestPrivate::UpdateRevealConfigurationRequestPrivate(
    const UpdateRevealConfigurationRequestPrivate &other, UpdateRevealConfigurationRequest * const q)
    : Macie2RequestPrivate(other, q)
{

}

} // namespace Macie2
} // namespace QtAws
