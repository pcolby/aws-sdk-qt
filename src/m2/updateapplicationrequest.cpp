// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateapplicationrequest.h"
#include "updateapplicationrequest_p.h"
#include "updateapplicationresponse.h"
#include "m2request_p.h"

namespace QtAws {
namespace M2 {

/*!
 * \class QtAws::M2::UpdateApplicationRequest
 * \brief The UpdateApplicationRequest class provides an interface for M2 UpdateApplication requests.
 *
 * \inmodule QtAwsM2
 *
 *  Amazon Web Services Mainframe Modernization provides tools and resources to help you plan and implement migration and
 *  modernization from mainframes to Amazon Web Services managed runtime environments. It provides tools for analyzing
 *  existing mainframe applications, developing or updating mainframe applications using COBOL or PL/I, and implementing an
 *  automated pipeline for continuous integration and continuous delivery (CI/CD) of the
 *
 * \sa M2Client::updateApplication
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateApplicationRequest::UpdateApplicationRequest(const UpdateApplicationRequest &other)
    : M2Request(new UpdateApplicationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateApplicationRequest object.
 */
UpdateApplicationRequest::UpdateApplicationRequest()
    : M2Request(new UpdateApplicationRequestPrivate(M2Request::UpdateApplicationAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateApplicationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateApplicationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateApplicationRequest::response(QNetworkReply * const reply) const
{
    return new UpdateApplicationResponse(*this, reply);
}

/*!
 * \class QtAws::M2::UpdateApplicationRequestPrivate
 * \brief The UpdateApplicationRequestPrivate class provides private implementation for UpdateApplicationRequest.
 * \internal
 *
 * \inmodule QtAwsM2
 */

/*!
 * Constructs a UpdateApplicationRequestPrivate object for M2 \a action,
 * with public implementation \a q.
 */
UpdateApplicationRequestPrivate::UpdateApplicationRequestPrivate(
    const M2Request::Action action, UpdateApplicationRequest * const q)
    : M2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateApplicationRequest
 * class' copy constructor.
 */
UpdateApplicationRequestPrivate::UpdateApplicationRequestPrivate(
    const UpdateApplicationRequestPrivate &other, UpdateApplicationRequest * const q)
    : M2RequestPrivate(other, q)
{

}

} // namespace M2
} // namespace QtAws
