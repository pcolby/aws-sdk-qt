// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createallowlistrequest.h"
#include "createallowlistrequest_p.h"
#include "createallowlistresponse.h"
#include "macie2request_p.h"

namespace QtAws {
namespace Macie2 {

/*!
 * \class QtAws::Macie2::CreateAllowListRequest
 * \brief The CreateAllowListRequest class provides an interface for Macie2 CreateAllowList requests.
 *
 * \inmodule QtAwsMacie2
 *
 *  Amazon Macie is a fully managed data security and data privacy service that uses machine learning and pattern matching
 *  to discover and protect your sensitive data in AWS. Macie automates the discovery of sensitive data, such as PII and
 *  intellectual property, to provide you with insight into the data that your organization stores in AWS. Macie also
 *  provides an inventory of your Amazon S3 buckets, which it continually monitors for you. If Macie detects sensitive data
 *  or potential data access issues, it generates detailed findings for you to review and act upon as
 *
 * \sa Macie2Client::createAllowList
 */

/*!
 * Constructs a copy of \a other.
 */
CreateAllowListRequest::CreateAllowListRequest(const CreateAllowListRequest &other)
    : Macie2Request(new CreateAllowListRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateAllowListRequest object.
 */
CreateAllowListRequest::CreateAllowListRequest()
    : Macie2Request(new CreateAllowListRequestPrivate(Macie2Request::CreateAllowListAction, this))
{

}

/*!
 * \reimp
 */
bool CreateAllowListRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateAllowListResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateAllowListRequest::response(QNetworkReply * const reply) const
{
    return new CreateAllowListResponse(*this, reply);
}

/*!
 * \class QtAws::Macie2::CreateAllowListRequestPrivate
 * \brief The CreateAllowListRequestPrivate class provides private implementation for CreateAllowListRequest.
 * \internal
 *
 * \inmodule QtAwsMacie2
 */

/*!
 * Constructs a CreateAllowListRequestPrivate object for Macie2 \a action,
 * with public implementation \a q.
 */
CreateAllowListRequestPrivate::CreateAllowListRequestPrivate(
    const Macie2Request::Action action, CreateAllowListRequest * const q)
    : Macie2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateAllowListRequest
 * class' copy constructor.
 */
CreateAllowListRequestPrivate::CreateAllowListRequestPrivate(
    const CreateAllowListRequestPrivate &other, CreateAllowListRequest * const q)
    : Macie2RequestPrivate(other, q)
{

}

} // namespace Macie2
} // namespace QtAws
