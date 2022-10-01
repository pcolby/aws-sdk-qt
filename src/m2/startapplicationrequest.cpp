// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startapplicationrequest.h"
#include "startapplicationrequest_p.h"
#include "startapplicationresponse.h"
#include "m2request_p.h"

namespace QtAws {
namespace M2 {

/*!
 * \class QtAws::M2::StartApplicationRequest
 * \brief The StartApplicationRequest class provides an interface for M2 StartApplication requests.
 *
 * \inmodule QtAwsM2
 *
 *  Amazon Web Services Mainframe Modernization provides tools and resources to help you plan and implement migration and
 *  modernization from mainframes to Amazon Web Services managed runtime environments. It provides tools for analyzing
 *  existing mainframe applications, developing or updating mainframe applications using COBOL or PL/I, and implementing an
 *  automated pipeline for continuous integration and continuous delivery (CI/CD) of the
 *
 * \sa M2Client::startApplication
 */

/*!
 * Constructs a copy of \a other.
 */
StartApplicationRequest::StartApplicationRequest(const StartApplicationRequest &other)
    : M2Request(new StartApplicationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartApplicationRequest object.
 */
StartApplicationRequest::StartApplicationRequest()
    : M2Request(new StartApplicationRequestPrivate(M2Request::StartApplicationAction, this))
{

}

/*!
 * \reimp
 */
bool StartApplicationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartApplicationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartApplicationRequest::response(QNetworkReply * const reply) const
{
    return new StartApplicationResponse(*this, reply);
}

/*!
 * \class QtAws::M2::StartApplicationRequestPrivate
 * \brief The StartApplicationRequestPrivate class provides private implementation for StartApplicationRequest.
 * \internal
 *
 * \inmodule QtAwsM2
 */

/*!
 * Constructs a StartApplicationRequestPrivate object for M2 \a action,
 * with public implementation \a q.
 */
StartApplicationRequestPrivate::StartApplicationRequestPrivate(
    const M2Request::Action action, StartApplicationRequest * const q)
    : M2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartApplicationRequest
 * class' copy constructor.
 */
StartApplicationRequestPrivate::StartApplicationRequestPrivate(
    const StartApplicationRequestPrivate &other, StartApplicationRequest * const q)
    : M2RequestPrivate(other, q)
{

}

} // namespace M2
} // namespace QtAws
