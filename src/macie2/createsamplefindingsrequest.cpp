// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createsamplefindingsrequest.h"
#include "createsamplefindingsrequest_p.h"
#include "createsamplefindingsresponse.h"
#include "macie2request_p.h"

namespace QtAws {
namespace Macie2 {

/*!
 * \class QtAws::Macie2::CreateSampleFindingsRequest
 * \brief The CreateSampleFindingsRequest class provides an interface for Macie2 CreateSampleFindings requests.
 *
 * \inmodule QtAwsMacie2
 *
 *  Amazon Macie is a fully managed data security and data privacy service that uses machine learning and pattern matching
 *  to discover and protect your sensitive data in AWS. Macie automates the discovery of sensitive data, such as PII and
 *  intellectual property, to provide you with insight into the data that your organization stores in AWS. Macie also
 *  provides an inventory of your Amazon S3 buckets, which it continually monitors for you. If Macie detects sensitive data
 *  or potential data access issues, it generates detailed findings for you to review and act upon as
 *
 * \sa Macie2Client::createSampleFindings
 */

/*!
 * Constructs a copy of \a other.
 */
CreateSampleFindingsRequest::CreateSampleFindingsRequest(const CreateSampleFindingsRequest &other)
    : Macie2Request(new CreateSampleFindingsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateSampleFindingsRequest object.
 */
CreateSampleFindingsRequest::CreateSampleFindingsRequest()
    : Macie2Request(new CreateSampleFindingsRequestPrivate(Macie2Request::CreateSampleFindingsAction, this))
{

}

/*!
 * \reimp
 */
bool CreateSampleFindingsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateSampleFindingsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateSampleFindingsRequest::response(QNetworkReply * const reply) const
{
    return new CreateSampleFindingsResponse(*this, reply);
}

/*!
 * \class QtAws::Macie2::CreateSampleFindingsRequestPrivate
 * \brief The CreateSampleFindingsRequestPrivate class provides private implementation for CreateSampleFindingsRequest.
 * \internal
 *
 * \inmodule QtAwsMacie2
 */

/*!
 * Constructs a CreateSampleFindingsRequestPrivate object for Macie2 \a action,
 * with public implementation \a q.
 */
CreateSampleFindingsRequestPrivate::CreateSampleFindingsRequestPrivate(
    const Macie2Request::Action action, CreateSampleFindingsRequest * const q)
    : Macie2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateSampleFindingsRequest
 * class' copy constructor.
 */
CreateSampleFindingsRequestPrivate::CreateSampleFindingsRequestPrivate(
    const CreateSampleFindingsRequestPrivate &other, CreateSampleFindingsRequest * const q)
    : Macie2RequestPrivate(other, q)
{

}

} // namespace Macie2
} // namespace QtAws
