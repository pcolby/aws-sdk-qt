// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatefilterrequest.h"
#include "updatefilterrequest_p.h"
#include "updatefilterresponse.h"
#include "inspector2request_p.h"

namespace QtAws {
namespace Inspector2 {

/*!
 * \class QtAws::Inspector2::UpdateFilterRequest
 * \brief The UpdateFilterRequest class provides an interface for Inspector2 UpdateFilter requests.
 *
 * \inmodule QtAwsInspector2
 *
 *  Amazon Inspector is a vulnerability discovery service that automates continuous scanning for security vulnerabilities
 *  within your Amazon EC2 and Amazon ECR
 *
 * \sa Inspector2Client::updateFilter
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateFilterRequest::UpdateFilterRequest(const UpdateFilterRequest &other)
    : Inspector2Request(new UpdateFilterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateFilterRequest object.
 */
UpdateFilterRequest::UpdateFilterRequest()
    : Inspector2Request(new UpdateFilterRequestPrivate(Inspector2Request::UpdateFilterAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateFilterRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateFilterResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateFilterRequest::response(QNetworkReply * const reply) const
{
    return new UpdateFilterResponse(*this, reply);
}

/*!
 * \class QtAws::Inspector2::UpdateFilterRequestPrivate
 * \brief The UpdateFilterRequestPrivate class provides private implementation for UpdateFilterRequest.
 * \internal
 *
 * \inmodule QtAwsInspector2
 */

/*!
 * Constructs a UpdateFilterRequestPrivate object for Inspector2 \a action,
 * with public implementation \a q.
 */
UpdateFilterRequestPrivate::UpdateFilterRequestPrivate(
    const Inspector2Request::Action action, UpdateFilterRequest * const q)
    : Inspector2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateFilterRequest
 * class' copy constructor.
 */
UpdateFilterRequestPrivate::UpdateFilterRequestPrivate(
    const UpdateFilterRequestPrivate &other, UpdateFilterRequest * const q)
    : Inspector2RequestPrivate(other, q)
{

}

} // namespace Inspector2
} // namespace QtAws
