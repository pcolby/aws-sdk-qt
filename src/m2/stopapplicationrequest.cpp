// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopapplicationrequest.h"
#include "stopapplicationrequest_p.h"
#include "stopapplicationresponse.h"
#include "m2request_p.h"

namespace QtAws {
namespace M2 {

/*!
 * \class QtAws::M2::StopApplicationRequest
 * \brief The StopApplicationRequest class provides an interface for M2 StopApplication requests.
 *
 * \inmodule QtAwsM2
 *
 *  Amazon Web Services Mainframe Modernization provides tools and resources to help you plan and implement migration and
 *  modernization from mainframes to Amazon Web Services managed runtime environments. It provides tools for analyzing
 *  existing mainframe applications, developing or updating mainframe applications using COBOL or PL/I, and implementing an
 *  automated pipeline for continuous integration and continuous delivery (CI/CD) of the
 *
 * \sa M2Client::stopApplication
 */

/*!
 * Constructs a copy of \a other.
 */
StopApplicationRequest::StopApplicationRequest(const StopApplicationRequest &other)
    : M2Request(new StopApplicationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopApplicationRequest object.
 */
StopApplicationRequest::StopApplicationRequest()
    : M2Request(new StopApplicationRequestPrivate(M2Request::StopApplicationAction, this))
{

}

/*!
 * \reimp
 */
bool StopApplicationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopApplicationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopApplicationRequest::response(QNetworkReply * const reply) const
{
    return new StopApplicationResponse(*this, reply);
}

/*!
 * \class QtAws::M2::StopApplicationRequestPrivate
 * \brief The StopApplicationRequestPrivate class provides private implementation for StopApplicationRequest.
 * \internal
 *
 * \inmodule QtAwsM2
 */

/*!
 * Constructs a StopApplicationRequestPrivate object for M2 \a action,
 * with public implementation \a q.
 */
StopApplicationRequestPrivate::StopApplicationRequestPrivate(
    const M2Request::Action action, StopApplicationRequest * const q)
    : M2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopApplicationRequest
 * class' copy constructor.
 */
StopApplicationRequestPrivate::StopApplicationRequestPrivate(
    const StopApplicationRequestPrivate &other, StopApplicationRequest * const q)
    : M2RequestPrivate(other, q)
{

}

} // namespace M2
} // namespace QtAws
