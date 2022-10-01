// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "detectpiientitiesrequest.h"
#include "detectpiientitiesrequest_p.h"
#include "detectpiientitiesresponse.h"
#include "comprehendrequest_p.h"

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::DetectPiiEntitiesRequest
 * \brief The DetectPiiEntitiesRequest class provides an interface for Comprehend DetectPiiEntities requests.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::detectPiiEntities
 */

/*!
 * Constructs a copy of \a other.
 */
DetectPiiEntitiesRequest::DetectPiiEntitiesRequest(const DetectPiiEntitiesRequest &other)
    : ComprehendRequest(new DetectPiiEntitiesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DetectPiiEntitiesRequest object.
 */
DetectPiiEntitiesRequest::DetectPiiEntitiesRequest()
    : ComprehendRequest(new DetectPiiEntitiesRequestPrivate(ComprehendRequest::DetectPiiEntitiesAction, this))
{

}

/*!
 * \reimp
 */
bool DetectPiiEntitiesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DetectPiiEntitiesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DetectPiiEntitiesRequest::response(QNetworkReply * const reply) const
{
    return new DetectPiiEntitiesResponse(*this, reply);
}

/*!
 * \class QtAws::Comprehend::DetectPiiEntitiesRequestPrivate
 * \brief The DetectPiiEntitiesRequestPrivate class provides private implementation for DetectPiiEntitiesRequest.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a DetectPiiEntitiesRequestPrivate object for Comprehend \a action,
 * with public implementation \a q.
 */
DetectPiiEntitiesRequestPrivate::DetectPiiEntitiesRequestPrivate(
    const ComprehendRequest::Action action, DetectPiiEntitiesRequest * const q)
    : ComprehendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DetectPiiEntitiesRequest
 * class' copy constructor.
 */
DetectPiiEntitiesRequestPrivate::DetectPiiEntitiesRequestPrivate(
    const DetectPiiEntitiesRequestPrivate &other, DetectPiiEntitiesRequest * const q)
    : ComprehendRequestPrivate(other, q)
{

}

} // namespace Comprehend
} // namespace QtAws
