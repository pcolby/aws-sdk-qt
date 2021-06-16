/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "detectsyntaxrequest.h"
#include "detectsyntaxrequest_p.h"
#include "detectsyntaxresponse.h"
#include "comprehendrequest_p.h"

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::DetectSyntaxRequest
 * \brief The DetectSyntaxRequest class provides an interface for Comprehend DetectSyntax requests.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::detectSyntax
 */

/*!
 * Constructs a copy of \a other.
 */
DetectSyntaxRequest::DetectSyntaxRequest(const DetectSyntaxRequest &other)
    : ComprehendRequest(new DetectSyntaxRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DetectSyntaxRequest object.
 */
DetectSyntaxRequest::DetectSyntaxRequest()
    : ComprehendRequest(new DetectSyntaxRequestPrivate(ComprehendRequest::DetectSyntaxAction, this))
{

}

/*!
 * \reimp
 */
bool DetectSyntaxRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DetectSyntaxResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DetectSyntaxRequest::response(QNetworkReply * const reply) const
{
    return new DetectSyntaxResponse(*this, reply);
}

/*!
 * \class QtAws::Comprehend::DetectSyntaxRequestPrivate
 * \brief The DetectSyntaxRequestPrivate class provides private implementation for DetectSyntaxRequest.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a DetectSyntaxRequestPrivate object for Comprehend \a action,
 * with public implementation \a q.
 */
DetectSyntaxRequestPrivate::DetectSyntaxRequestPrivate(
    const ComprehendRequest::Action action, DetectSyntaxRequest * const q)
    : ComprehendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DetectSyntaxRequest
 * class' copy constructor.
 */
DetectSyntaxRequestPrivate::DetectSyntaxRequestPrivate(
    const DetectSyntaxRequestPrivate &other, DetectSyntaxRequest * const q)
    : ComprehendRequestPrivate(other, q)
{

}

} // namespace Comprehend
} // namespace QtAws
