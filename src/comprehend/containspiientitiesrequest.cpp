// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "containspiientitiesrequest.h"
#include "containspiientitiesrequest_p.h"
#include "containspiientitiesresponse.h"
#include "comprehendrequest_p.h"

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::ContainsPiiEntitiesRequest
 * \brief The ContainsPiiEntitiesRequest class provides an interface for Comprehend ContainsPiiEntities requests.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::containsPiiEntities
 */

/*!
 * Constructs a copy of \a other.
 */
ContainsPiiEntitiesRequest::ContainsPiiEntitiesRequest(const ContainsPiiEntitiesRequest &other)
    : ComprehendRequest(new ContainsPiiEntitiesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ContainsPiiEntitiesRequest object.
 */
ContainsPiiEntitiesRequest::ContainsPiiEntitiesRequest()
    : ComprehendRequest(new ContainsPiiEntitiesRequestPrivate(ComprehendRequest::ContainsPiiEntitiesAction, this))
{

}

/*!
 * \reimp
 */
bool ContainsPiiEntitiesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ContainsPiiEntitiesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ContainsPiiEntitiesRequest::response(QNetworkReply * const reply) const
{
    return new ContainsPiiEntitiesResponse(*this, reply);
}

/*!
 * \class QtAws::Comprehend::ContainsPiiEntitiesRequestPrivate
 * \brief The ContainsPiiEntitiesRequestPrivate class provides private implementation for ContainsPiiEntitiesRequest.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a ContainsPiiEntitiesRequestPrivate object for Comprehend \a action,
 * with public implementation \a q.
 */
ContainsPiiEntitiesRequestPrivate::ContainsPiiEntitiesRequestPrivate(
    const ComprehendRequest::Action action, ContainsPiiEntitiesRequest * const q)
    : ComprehendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ContainsPiiEntitiesRequest
 * class' copy constructor.
 */
ContainsPiiEntitiesRequestPrivate::ContainsPiiEntitiesRequestPrivate(
    const ContainsPiiEntitiesRequestPrivate &other, ContainsPiiEntitiesRequest * const q)
    : ComprehendRequestPrivate(other, q)
{

}

} // namespace Comprehend
} // namespace QtAws
