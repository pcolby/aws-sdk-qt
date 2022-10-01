// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getsensitivedataoccurrencesrequest.h"
#include "getsensitivedataoccurrencesrequest_p.h"
#include "getsensitivedataoccurrencesresponse.h"
#include "macie2request_p.h"

namespace QtAws {
namespace Macie2 {

/*!
 * \class QtAws::Macie2::GetSensitiveDataOccurrencesRequest
 * \brief The GetSensitiveDataOccurrencesRequest class provides an interface for Macie2 GetSensitiveDataOccurrences requests.
 *
 * \inmodule QtAwsMacie2
 *
 *  Amazon Macie is a fully managed data security and data privacy service that uses machine learning and pattern matching
 *  to discover and protect your sensitive data in AWS. Macie automates the discovery of sensitive data, such as PII and
 *  intellectual property, to provide you with insight into the data that your organization stores in AWS. Macie also
 *  provides an inventory of your Amazon S3 buckets, which it continually monitors for you. If Macie detects sensitive data
 *  or potential data access issues, it generates detailed findings for you to review and act upon as
 *
 * \sa Macie2Client::getSensitiveDataOccurrences
 */

/*!
 * Constructs a copy of \a other.
 */
GetSensitiveDataOccurrencesRequest::GetSensitiveDataOccurrencesRequest(const GetSensitiveDataOccurrencesRequest &other)
    : Macie2Request(new GetSensitiveDataOccurrencesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetSensitiveDataOccurrencesRequest object.
 */
GetSensitiveDataOccurrencesRequest::GetSensitiveDataOccurrencesRequest()
    : Macie2Request(new GetSensitiveDataOccurrencesRequestPrivate(Macie2Request::GetSensitiveDataOccurrencesAction, this))
{

}

/*!
 * \reimp
 */
bool GetSensitiveDataOccurrencesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetSensitiveDataOccurrencesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSensitiveDataOccurrencesRequest::response(QNetworkReply * const reply) const
{
    return new GetSensitiveDataOccurrencesResponse(*this, reply);
}

/*!
 * \class QtAws::Macie2::GetSensitiveDataOccurrencesRequestPrivate
 * \brief The GetSensitiveDataOccurrencesRequestPrivate class provides private implementation for GetSensitiveDataOccurrencesRequest.
 * \internal
 *
 * \inmodule QtAwsMacie2
 */

/*!
 * Constructs a GetSensitiveDataOccurrencesRequestPrivate object for Macie2 \a action,
 * with public implementation \a q.
 */
GetSensitiveDataOccurrencesRequestPrivate::GetSensitiveDataOccurrencesRequestPrivate(
    const Macie2Request::Action action, GetSensitiveDataOccurrencesRequest * const q)
    : Macie2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetSensitiveDataOccurrencesRequest
 * class' copy constructor.
 */
GetSensitiveDataOccurrencesRequestPrivate::GetSensitiveDataOccurrencesRequestPrivate(
    const GetSensitiveDataOccurrencesRequestPrivate &other, GetSensitiveDataOccurrencesRequest * const q)
    : Macie2RequestPrivate(other, q)
{

}

} // namespace Macie2
} // namespace QtAws
