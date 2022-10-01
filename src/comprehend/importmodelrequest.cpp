// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
