// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteapplicationfromenvironmentrequest.h"
#include "deleteapplicationfromenvironmentrequest_p.h"
#include "deleteapplicationfromenvironmentresponse.h"
#include "m2request_p.h"

namespace QtAws {
namespace M2 {

/*!
 * \class QtAws::M2::DeleteApplicationFromEnvironmentRequest
 * \brief The DeleteApplicationFromEnvironmentRequest class provides an interface for M2 DeleteApplicationFromEnvironment requests.
 *
 * \inmodule QtAwsM2
 *
 *  Amazon Web Services Mainframe Modernization provides tools and resources to help you plan and implement migration and
 *  modernization from mainframes to Amazon Web Services managed runtime environments. It provides tools for analyzing
 *  existing mainframe applications, developing or updating mainframe applications using COBOL or PL/I, and implementing an
 *  automated pipeline for continuous integration and continuous delivery (CI/CD) of the
 *
 * \sa M2Client::deleteApplicationFromEnvironment
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteApplicationFromEnvironmentRequest::DeleteApplicationFromEnvironmentRequest(const DeleteApplicationFromEnvironmentRequest &other)
    : M2Request(new DeleteApplicationFromEnvironmentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteApplicationFromEnvironmentRequest object.
 */
DeleteApplicationFromEnvironmentRequest::DeleteApplicationFromEnvironmentRequest()
    : M2Request(new DeleteApplicationFromEnvironmentRequestPrivate(M2Request::DeleteApplicationFromEnvironmentAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteApplicationFromEnvironmentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteApplicationFromEnvironmentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteApplicationFromEnvironmentRequest::response(QNetworkReply * const reply) const
{
    return new DeleteApplicationFromEnvironmentResponse(*this, reply);
}

/*!
 * \class QtAws::M2::DeleteApplicationFromEnvironmentRequestPrivate
 * \brief The DeleteApplicationFromEnvironmentRequestPrivate class provides private implementation for DeleteApplicationFromEnvironmentRequest.
 * \internal
 *
 * \inmodule QtAwsM2
 */

/*!
 * Constructs a DeleteApplicationFromEnvironmentRequestPrivate object for M2 \a action,
 * with public implementation \a q.
 */
DeleteApplicationFromEnvironmentRequestPrivate::DeleteApplicationFromEnvironmentRequestPrivate(
    const M2Request::Action action, DeleteApplicationFromEnvironmentRequest * const q)
    : M2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteApplicationFromEnvironmentRequest
 * class' copy constructor.
 */
DeleteApplicationFromEnvironmentRequestPrivate::DeleteApplicationFromEnvironmentRequestPrivate(
    const DeleteApplicationFromEnvironmentRequestPrivate &other, DeleteApplicationFromEnvironmentRequest * const q)
    : M2RequestPrivate(other, q)
{

}

} // namespace M2
} // namespace QtAws
