// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getfindingspublicationconfigurationrequest.h"
#include "getfindingspublicationconfigurationrequest_p.h"
#include "getfindingspublicationconfigurationresponse.h"
#include "macie2request_p.h"

namespace QtAws {
namespace Macie2 {

/*!
 * \class QtAws::Macie2::GetFindingsPublicationConfigurationRequest
 * \brief The GetFindingsPublicationConfigurationRequest class provides an interface for Macie2 GetFindingsPublicationConfiguration requests.
 *
 * \inmodule QtAwsMacie2
 *
 *  Amazon Macie is a fully managed data security and data privacy service that uses machine learning and pattern matching
 *  to discover and protect your sensitive data in AWS. Macie automates the discovery of sensitive data, such as PII and
 *  intellectual property, to provide you with insight into the data that your organization stores in AWS. Macie also
 *  provides an inventory of your Amazon S3 buckets, which it continually monitors for you. If Macie detects sensitive data
 *  or potential data access issues, it generates detailed findings for you to review and act upon as
 *
 * \sa Macie2Client::getFindingsPublicationConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
GetFindingsPublicationConfigurationRequest::GetFindingsPublicationConfigurationRequest(const GetFindingsPublicationConfigurationRequest &other)
    : Macie2Request(new GetFindingsPublicationConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetFindingsPublicationConfigurationRequest object.
 */
GetFindingsPublicationConfigurationRequest::GetFindingsPublicationConfigurationRequest()
    : Macie2Request(new GetFindingsPublicationConfigurationRequestPrivate(Macie2Request::GetFindingsPublicationConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool GetFindingsPublicationConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetFindingsPublicationConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetFindingsPublicationConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new GetFindingsPublicationConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::Macie2::GetFindingsPublicationConfigurationRequestPrivate
 * \brief The GetFindingsPublicationConfigurationRequestPrivate class provides private implementation for GetFindingsPublicationConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsMacie2
 */

/*!
 * Constructs a GetFindingsPublicationConfigurationRequestPrivate object for Macie2 \a action,
 * with public implementation \a q.
 */
GetFindingsPublicationConfigurationRequestPrivate::GetFindingsPublicationConfigurationRequestPrivate(
    const Macie2Request::Action action, GetFindingsPublicationConfigurationRequest * const q)
    : Macie2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetFindingsPublicationConfigurationRequest
 * class' copy constructor.
 */
GetFindingsPublicationConfigurationRequestPrivate::GetFindingsPublicationConfigurationRequestPrivate(
    const GetFindingsPublicationConfigurationRequestPrivate &other, GetFindingsPublicationConfigurationRequest * const q)
    : Macie2RequestPrivate(other, q)
{

}

} // namespace Macie2
} // namespace QtAws
