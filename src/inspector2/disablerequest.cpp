// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disablerequest.h"
#include "disablerequest_p.h"
#include "disableresponse.h"
#include "inspector2request_p.h"

namespace QtAws {
namespace Inspector2 {

/*!
 * \class QtAws::Inspector2::DisableRequest
 * \brief The DisableRequest class provides an interface for Inspector2 Disable requests.
 *
 * \inmodule QtAwsInspector2
 *
 *  Amazon Inspector is a vulnerability discovery service that automates continuous scanning for security vulnerabilities
 *  within your Amazon EC2 and Amazon ECR
 *
 * \sa Inspector2Client::disable
 */

/*!
 * Constructs a copy of \a other.
 */
DisableRequest::DisableRequest(const DisableRequest &other)
    : Inspector2Request(new DisableRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisableRequest object.
 */
DisableRequest::DisableRequest()
    : Inspector2Request(new DisableRequestPrivate(Inspector2Request::DisableAction, this))
{

}

/*!
 * \reimp
 */
bool DisableRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisableResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisableRequest::response(QNetworkReply * const reply) const
{
    return new DisableResponse(*this, reply);
}

/*!
 * \class QtAws::Inspector2::DisableRequestPrivate
 * \brief The DisableRequestPrivate class provides private implementation for DisableRequest.
 * \internal
 *
 * \inmodule QtAwsInspector2
 */

/*!
 * Constructs a DisableRequestPrivate object for Inspector2 \a action,
 * with public implementation \a q.
 */
DisableRequestPrivate::DisableRequestPrivate(
    const Inspector2Request::Action action, DisableRequest * const q)
    : Inspector2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisableRequest
 * class' copy constructor.
 */
DisableRequestPrivate::DisableRequestPrivate(
    const DisableRequestPrivate &other, DisableRequest * const q)
    : Inspector2RequestPrivate(other, q)
{

}

} // namespace Inspector2
} // namespace QtAws
