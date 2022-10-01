// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletefilterrequest.h"
#include "deletefilterrequest_p.h"
#include "deletefilterresponse.h"
#include "inspector2request_p.h"

namespace QtAws {
namespace Inspector2 {

/*!
 * \class QtAws::Inspector2::DeleteFilterRequest
 * \brief The DeleteFilterRequest class provides an interface for Inspector2 DeleteFilter requests.
 *
 * \inmodule QtAwsInspector2
 *
 *  Amazon Inspector is a vulnerability discovery service that automates continuous scanning for security vulnerabilities
 *  within your Amazon EC2 and Amazon ECR
 *
 * \sa Inspector2Client::deleteFilter
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteFilterRequest::DeleteFilterRequest(const DeleteFilterRequest &other)
    : Inspector2Request(new DeleteFilterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteFilterRequest object.
 */
DeleteFilterRequest::DeleteFilterRequest()
    : Inspector2Request(new DeleteFilterRequestPrivate(Inspector2Request::DeleteFilterAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteFilterRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteFilterResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteFilterRequest::response(QNetworkReply * const reply) const
{
    return new DeleteFilterResponse(*this, reply);
}

/*!
 * \class QtAws::Inspector2::DeleteFilterRequestPrivate
 * \brief The DeleteFilterRequestPrivate class provides private implementation for DeleteFilterRequest.
 * \internal
 *
 * \inmodule QtAwsInspector2
 */

/*!
 * Constructs a DeleteFilterRequestPrivate object for Inspector2 \a action,
 * with public implementation \a q.
 */
DeleteFilterRequestPrivate::DeleteFilterRequestPrivate(
    const Inspector2Request::Action action, DeleteFilterRequest * const q)
    : Inspector2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteFilterRequest
 * class' copy constructor.
 */
DeleteFilterRequestPrivate::DeleteFilterRequestPrivate(
    const DeleteFilterRequestPrivate &other, DeleteFilterRequest * const q)
    : Inspector2RequestPrivate(other, q)
{

}

} // namespace Inspector2
} // namespace QtAws
