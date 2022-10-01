// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createfindingsfilterrequest.h"
#include "createfindingsfilterrequest_p.h"
#include "createfindingsfilterresponse.h"
#include "macie2request_p.h"

namespace QtAws {
namespace Macie2 {

/*!
 * \class QtAws::Macie2::CreateFindingsFilterRequest
 * \brief The CreateFindingsFilterRequest class provides an interface for Macie2 CreateFindingsFilter requests.
 *
 * \inmodule QtAwsMacie2
 *
 *  Amazon Macie is a fully managed data security and data privacy service that uses machine learning and pattern matching
 *  to discover and protect your sensitive data in AWS. Macie automates the discovery of sensitive data, such as PII and
 *  intellectual property, to provide you with insight into the data that your organization stores in AWS. Macie also
 *  provides an inventory of your Amazon S3 buckets, which it continually monitors for you. If Macie detects sensitive data
 *  or potential data access issues, it generates detailed findings for you to review and act upon as
 *
 * \sa Macie2Client::createFindingsFilter
 */

/*!
 * Constructs a copy of \a other.
 */
CreateFindingsFilterRequest::CreateFindingsFilterRequest(const CreateFindingsFilterRequest &other)
    : Macie2Request(new CreateFindingsFilterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateFindingsFilterRequest object.
 */
CreateFindingsFilterRequest::CreateFindingsFilterRequest()
    : Macie2Request(new CreateFindingsFilterRequestPrivate(Macie2Request::CreateFindingsFilterAction, this))
{

}

/*!
 * \reimp
 */
bool CreateFindingsFilterRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateFindingsFilterResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateFindingsFilterRequest::response(QNetworkReply * const reply) const
{
    return new CreateFindingsFilterResponse(*this, reply);
}

/*!
 * \class QtAws::Macie2::CreateFindingsFilterRequestPrivate
 * \brief The CreateFindingsFilterRequestPrivate class provides private implementation for CreateFindingsFilterRequest.
 * \internal
 *
 * \inmodule QtAwsMacie2
 */

/*!
 * Constructs a CreateFindingsFilterRequestPrivate object for Macie2 \a action,
 * with public implementation \a q.
 */
CreateFindingsFilterRequestPrivate::CreateFindingsFilterRequestPrivate(
    const Macie2Request::Action action, CreateFindingsFilterRequest * const q)
    : Macie2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateFindingsFilterRequest
 * class' copy constructor.
 */
CreateFindingsFilterRequestPrivate::CreateFindingsFilterRequestPrivate(
    const CreateFindingsFilterRequestPrivate &other, CreateFindingsFilterRequest * const q)
    : Macie2RequestPrivate(other, q)
{

}

} // namespace Macie2
} // namespace QtAws
