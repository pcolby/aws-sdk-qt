// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateenvironmentrequest.h"
#include "updateenvironmentrequest_p.h"
#include "updateenvironmentresponse.h"
#include "m2request_p.h"

namespace QtAws {
namespace M2 {

/*!
 * \class QtAws::M2::UpdateEnvironmentRequest
 * \brief The UpdateEnvironmentRequest class provides an interface for M2 UpdateEnvironment requests.
 *
 * \inmodule QtAwsM2
 *
 *  Amazon Web Services Mainframe Modernization provides tools and resources to help you plan and implement migration and
 *  modernization from mainframes to Amazon Web Services managed runtime environments. It provides tools for analyzing
 *  existing mainframe applications, developing or updating mainframe applications using COBOL or PL/I, and implementing an
 *  automated pipeline for continuous integration and continuous delivery (CI/CD) of the
 *
 * \sa M2Client::updateEnvironment
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateEnvironmentRequest::UpdateEnvironmentRequest(const UpdateEnvironmentRequest &other)
    : M2Request(new UpdateEnvironmentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateEnvironmentRequest object.
 */
UpdateEnvironmentRequest::UpdateEnvironmentRequest()
    : M2Request(new UpdateEnvironmentRequestPrivate(M2Request::UpdateEnvironmentAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateEnvironmentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateEnvironmentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateEnvironmentRequest::response(QNetworkReply * const reply) const
{
    return new UpdateEnvironmentResponse(*this, reply);
}

/*!
 * \class QtAws::M2::UpdateEnvironmentRequestPrivate
 * \brief The UpdateEnvironmentRequestPrivate class provides private implementation for UpdateEnvironmentRequest.
 * \internal
 *
 * \inmodule QtAwsM2
 */

/*!
 * Constructs a UpdateEnvironmentRequestPrivate object for M2 \a action,
 * with public implementation \a q.
 */
UpdateEnvironmentRequestPrivate::UpdateEnvironmentRequestPrivate(
    const M2Request::Action action, UpdateEnvironmentRequest * const q)
    : M2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateEnvironmentRequest
 * class' copy constructor.
 */
UpdateEnvironmentRequestPrivate::UpdateEnvironmentRequestPrivate(
    const UpdateEnvironmentRequestPrivate &other, UpdateEnvironmentRequest * const q)
    : M2RequestPrivate(other, q)
{

}

} // namespace M2
} // namespace QtAws
