// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getsensitivedataoccurrencesavailabilityrequest.h"
#include "getsensitivedataoccurrencesavailabilityrequest_p.h"
#include "getsensitivedataoccurrencesavailabilityresponse.h"
#include "macie2request_p.h"

namespace QtAws {
namespace Macie2 {

/*!
 * \class QtAws::Macie2::GetSensitiveDataOccurrencesAvailabilityRequest
 * \brief The GetSensitiveDataOccurrencesAvailabilityRequest class provides an interface for Macie2 GetSensitiveDataOccurrencesAvailability requests.
 *
 * \inmodule QtAwsMacie2
 *
 *  Amazon Macie is a fully managed data security and data privacy service that uses machine learning and pattern matching
 *  to discover and protect your sensitive data in AWS. Macie automates the discovery of sensitive data, such as PII and
 *  intellectual property, to provide you with insight into the data that your organization stores in AWS. Macie also
 *  provides an inventory of your Amazon S3 buckets, which it continually monitors for you. If Macie detects sensitive data
 *  or potential data access issues, it generates detailed findings for you to review and act upon as
 *
 * \sa Macie2Client::getSensitiveDataOccurrencesAvailability
 */

/*!
 * Constructs a copy of \a other.
 */
GetSensitiveDataOccurrencesAvailabilityRequest::GetSensitiveDataOccurrencesAvailabilityRequest(const GetSensitiveDataOccurrencesAvailabilityRequest &other)
    : Macie2Request(new GetSensitiveDataOccurrencesAvailabilityRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetSensitiveDataOccurrencesAvailabilityRequest object.
 */
GetSensitiveDataOccurrencesAvailabilityRequest::GetSensitiveDataOccurrencesAvailabilityRequest()
    : Macie2Request(new GetSensitiveDataOccurrencesAvailabilityRequestPrivate(Macie2Request::GetSensitiveDataOccurrencesAvailabilityAction, this))
{

}

/*!
 * \reimp
 */
bool GetSensitiveDataOccurrencesAvailabilityRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetSensitiveDataOccurrencesAvailabilityResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSensitiveDataOccurrencesAvailabilityRequest::response(QNetworkReply * const reply) const
{
    return new GetSensitiveDataOccurrencesAvailabilityResponse(*this, reply);
}

/*!
 * \class QtAws::Macie2::GetSensitiveDataOccurrencesAvailabilityRequestPrivate
 * \brief The GetSensitiveDataOccurrencesAvailabilityRequestPrivate class provides private implementation for GetSensitiveDataOccurrencesAvailabilityRequest.
 * \internal
 *
 * \inmodule QtAwsMacie2
 */

/*!
 * Constructs a GetSensitiveDataOccurrencesAvailabilityRequestPrivate object for Macie2 \a action,
 * with public implementation \a q.
 */
GetSensitiveDataOccurrencesAvailabilityRequestPrivate::GetSensitiveDataOccurrencesAvailabilityRequestPrivate(
    const Macie2Request::Action action, GetSensitiveDataOccurrencesAvailabilityRequest * const q)
    : Macie2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetSensitiveDataOccurrencesAvailabilityRequest
 * class' copy constructor.
 */
GetSensitiveDataOccurrencesAvailabilityRequestPrivate::GetSensitiveDataOccurrencesAvailabilityRequestPrivate(
    const GetSensitiveDataOccurrencesAvailabilityRequestPrivate &other, GetSensitiveDataOccurrencesAvailabilityRequest * const q)
    : Macie2RequestPrivate(other, q)
{

}

} // namespace Macie2
} // namespace QtAws
