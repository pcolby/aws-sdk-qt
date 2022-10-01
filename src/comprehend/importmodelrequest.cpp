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

#include "importmodelrequest.h"
#include "importmodelrequest_p.h"
#include "importmodelresponse.h"
#include "comprehendrequest_p.h"

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::ImportModelRequest
 * \brief The ImportModelRequest class provides an interface for Comprehend ImportModel requests.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::importModel
 */

/*!
 * Constructs a copy of \a other.
 */
ImportModelRequest::ImportModelRequest(const ImportModelRequest &other)
    : ComprehendRequest(new ImportModelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ImportModelRequest object.
 */
ImportModelRequest::ImportModelRequest()
    : ComprehendRequest(new ImportModelRequestPrivate(ComprehendRequest::ImportModelAction, this))
{

}

/*!
 * \reimp
 */
bool ImportModelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ImportModelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ImportModelRequest::response(QNetworkReply * const reply) const
{
    return new ImportModelResponse(*this, reply);
}

/*!
 * \class QtAws::Comprehend::ImportModelRequestPrivate
 * \brief The ImportModelRequestPrivate class provides private implementation for ImportModelRequest.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a ImportModelRequestPrivate object for Comprehend \a action,
 * with public implementation \a q.
 */
ImportModelRequestPrivate::ImportModelRequestPrivate(
    const ComprehendRequest::Action action, ImportModelRequest * const q)
    : ComprehendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ImportModelRequest
 * class' copy constructor.
 */
ImportModelRequestPrivate::ImportModelRequestPrivate(
    const ImportModelRequestPrivate &other, ImportModelRequest * const q)
    : ComprehendRequestPrivate(other, q)
{

}

} // namespace Comprehend
} // namespace QtAws
