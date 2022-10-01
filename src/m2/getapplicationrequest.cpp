// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getapplicationrequest.h"
#include "getapplicationrequest_p.h"
#include "getapplicationresponse.h"
#include "m2request_p.h"

namespace QtAws {
namespace M2 {

/*!
 * \class QtAws::M2::GetApplicationRequest
 * \brief The GetApplicationRequest class provides an interface for M2 GetApplication requests.
 *
 * \inmodule QtAwsM2
 *
 *  Amazon Web Services Mainframe Modernization provides tools and resources to help you plan and implement migration and
 *  modernization from mainframes to Amazon Web Services managed runtime environments. It provides tools for analyzing
 *  existing mainframe applications, developing or updating mainframe applications using COBOL or PL/I, and implementing an
 *  automated pipeline for continuous integration and continuous delivery (CI/CD) of the
 *
 * \sa M2Client::getApplication
 */

/*!
 * Constructs a copy of \a other.
 */
GetApplicationRequest::GetApplicationRequest(const GetApplicationRequest &other)
    : M2Request(new GetApplicationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetApplicationRequest object.
 */
GetApplicationRequest::GetApplicationRequest()
    : M2Request(new GetApplicationRequestPrivate(M2Request::GetApplicationAction, this))
{

}

/*!
 * \reimp
 */
bool GetApplicationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetApplicationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetApplicationRequest::response(QNetworkReply * const reply) const
{
    return new GetApplicationResponse(*this, reply);
}

/*!
 * \class QtAws::M2::GetApplicationRequestPrivate
 * \brief The GetApplicationRequestPrivate class provides private implementation for GetApplicationRequest.
 * \internal
 *
 * \inmodule QtAwsM2
 */

/*!
 * Constructs a GetApplicationRequestPrivate object for M2 \a action,
 * with public implementation \a q.
 */
GetApplicationRequestPrivate::GetApplicationRequestPrivate(
    const M2Request::Action action, GetApplicationRequest * const q)
    : M2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetApplicationRequest
 * class' copy constructor.
 */
GetApplicationRequestPrivate::GetApplicationRequestPrivate(
    const GetApplicationRequestPrivate &other, GetApplicationRequest * const q)
    : M2RequestPrivate(other, q)
{

}

} // namespace M2
} // namespace QtAws
