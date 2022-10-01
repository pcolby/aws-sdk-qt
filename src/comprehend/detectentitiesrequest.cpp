// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "detectentitiesrequest.h"
#include "detectentitiesrequest_p.h"
#include "detectentitiesresponse.h"
#include "comprehendrequest_p.h"

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::DetectEntitiesRequest
 * \brief The DetectEntitiesRequest class provides an interface for Comprehend DetectEntities requests.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::detectEntities
 */

/*!
 * Constructs a copy of \a other.
 */
DetectEntitiesRequest::DetectEntitiesRequest(const DetectEntitiesRequest &other)
    : ComprehendRequest(new DetectEntitiesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DetectEntitiesRequest object.
 */
DetectEntitiesRequest::DetectEntitiesRequest()
    : ComprehendRequest(new DetectEntitiesRequestPrivate(ComprehendRequest::DetectEntitiesAction, this))
{

}

/*!
 * \reimp
 */
bool DetectEntitiesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DetectEntitiesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DetectEntitiesRequest::response(QNetworkReply * const reply) const
{
    return new DetectEntitiesResponse(*this, reply);
}

/*!
 * \class QtAws::Comprehend::DetectEntitiesRequestPrivate
 * \brief The DetectEntitiesRequestPrivate class provides private implementation for DetectEntitiesRequest.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a DetectEntitiesRequestPrivate object for Comprehend \a action,
 * with public implementation \a q.
 */
DetectEntitiesRequestPrivate::DetectEntitiesRequestPrivate(
    const ComprehendRequest::Action action, DetectEntitiesRequest * const q)
    : ComprehendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DetectEntitiesRequest
 * class' copy constructor.
 */
DetectEntitiesRequestPrivate::DetectEntitiesRequestPrivate(
    const DetectEntitiesRequestPrivate &other, DetectEntitiesRequest * const q)
    : ComprehendRequestPrivate(other, q)
{

}

} // namespace Comprehend
} // namespace QtAws
