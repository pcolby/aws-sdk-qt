// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "enablerequest.h"
#include "enablerequest_p.h"
#include "enableresponse.h"
#include "inspector2request_p.h"

namespace QtAws {
namespace Inspector2 {

/*!
 * \class QtAws::Inspector2::EnableRequest
 * \brief The EnableRequest class provides an interface for Inspector2 Enable requests.
 *
 * \inmodule QtAwsInspector2
 *
 *  Amazon Inspector is a vulnerability discovery service that automates continuous scanning for security vulnerabilities
 *  within your Amazon EC2 and Amazon ECR
 *
 * \sa Inspector2Client::enable
 */

/*!
 * Constructs a copy of \a other.
 */
EnableRequest::EnableRequest(const EnableRequest &other)
    : Inspector2Request(new EnableRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a EnableRequest object.
 */
EnableRequest::EnableRequest()
    : Inspector2Request(new EnableRequestPrivate(Inspector2Request::EnableAction, this))
{

}

/*!
 * \reimp
 */
bool EnableRequest::isValid() const
{
    return false;
}


/*!
 * Returns a EnableResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * EnableRequest::response(QNetworkReply * const reply) const
{
    return new EnableResponse(*this, reply);
}

/*!
 * \class QtAws::Inspector2::EnableRequestPrivate
 * \brief The EnableRequestPrivate class provides private implementation for EnableRequest.
 * \internal
 *
 * \inmodule QtAwsInspector2
 */

/*!
 * Constructs a EnableRequestPrivate object for Inspector2 \a action,
 * with public implementation \a q.
 */
EnableRequestPrivate::EnableRequestPrivate(
    const Inspector2Request::Action action, EnableRequest * const q)
    : Inspector2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the EnableRequest
 * class' copy constructor.
 */
EnableRequestPrivate::EnableRequestPrivate(
    const EnableRequestPrivate &other, EnableRequest * const q)
    : Inspector2RequestPrivate(other, q)
{

}

} // namespace Inspector2
} // namespace QtAws
