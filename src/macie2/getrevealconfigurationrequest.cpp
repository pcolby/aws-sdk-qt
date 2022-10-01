// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getrevealconfigurationrequest.h"
#include "getrevealconfigurationrequest_p.h"
#include "getrevealconfigurationresponse.h"
#include "macie2request_p.h"

namespace QtAws {
namespace Macie2 {

/*!
 * \class QtAws::Macie2::GetRevealConfigurationRequest
 * \brief The GetRevealConfigurationRequest class provides an interface for Macie2 GetRevealConfiguration requests.
 *
 * \inmodule QtAwsMacie2
 *
 *  Amazon Macie is a fully managed data security and data privacy service that uses machine learning and pattern matching
 *  to discover and protect your sensitive data in AWS. Macie automates the discovery of sensitive data, such as PII and
 *  intellectual property, to provide you with insight into the data that your organization stores in AWS. Macie also
 *  provides an inventory of your Amazon S3 buckets, which it continually monitors for you. If Macie detects sensitive data
 *  or potential data access issues, it generates detailed findings for you to review and act upon as
 *
 * \sa Macie2Client::getRevealConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
GetRevealConfigurationRequest::GetRevealConfigurationRequest(const GetRevealConfigurationRequest &other)
    : Macie2Request(new GetRevealConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetRevealConfigurationRequest object.
 */
GetRevealConfigurationRequest::GetRevealConfigurationRequest()
    : Macie2Request(new GetRevealConfigurationRequestPrivate(Macie2Request::GetRevealConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool GetRevealConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetRevealConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetRevealConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new GetRevealConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::Macie2::GetRevealConfigurationRequestPrivate
 * \brief The GetRevealConfigurationRequestPrivate class provides private implementation for GetRevealConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsMacie2
 */

/*!
 * Constructs a GetRevealConfigurationRequestPrivate object for Macie2 \a action,
 * with public implementation \a q.
 */
GetRevealConfigurationRequestPrivate::GetRevealConfigurationRequestPrivate(
    const Macie2Request::Action action, GetRevealConfigurationRequest * const q)
    : Macie2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetRevealConfigurationRequest
 * class' copy constructor.
 */
GetRevealConfigurationRequestPrivate::GetRevealConfigurationRequestPrivate(
    const GetRevealConfigurationRequestPrivate &other, GetRevealConfigurationRequest * const q)
    : Macie2RequestPrivate(other, q)
{

}

} // namespace Macie2
} // namespace QtAws
