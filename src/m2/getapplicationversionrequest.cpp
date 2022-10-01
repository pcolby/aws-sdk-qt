// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getapplicationversionrequest.h"
#include "getapplicationversionrequest_p.h"
#include "getapplicationversionresponse.h"
#include "m2request_p.h"

namespace QtAws {
namespace M2 {

/*!
 * \class QtAws::M2::GetApplicationVersionRequest
 * \brief The GetApplicationVersionRequest class provides an interface for M2 GetApplicationVersion requests.
 *
 * \inmodule QtAwsM2
 *
 *  Amazon Web Services Mainframe Modernization provides tools and resources to help you plan and implement migration and
 *  modernization from mainframes to Amazon Web Services managed runtime environments. It provides tools for analyzing
 *  existing mainframe applications, developing or updating mainframe applications using COBOL or PL/I, and implementing an
 *  automated pipeline for continuous integration and continuous delivery (CI/CD) of the
 *
 * \sa M2Client::getApplicationVersion
 */

/*!
 * Constructs a copy of \a other.
 */
GetApplicationVersionRequest::GetApplicationVersionRequest(const GetApplicationVersionRequest &other)
    : M2Request(new GetApplicationVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetApplicationVersionRequest object.
 */
GetApplicationVersionRequest::GetApplicationVersionRequest()
    : M2Request(new GetApplicationVersionRequestPrivate(M2Request::GetApplicationVersionAction, this))
{

}

/*!
 * \reimp
 */
bool GetApplicationVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetApplicationVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetApplicationVersionRequest::response(QNetworkReply * const reply) const
{
    return new GetApplicationVersionResponse(*this, reply);
}

/*!
 * \class QtAws::M2::GetApplicationVersionRequestPrivate
 * \brief The GetApplicationVersionRequestPrivate class provides private implementation for GetApplicationVersionRequest.
 * \internal
 *
 * \inmodule QtAwsM2
 */

/*!
 * Constructs a GetApplicationVersionRequestPrivate object for M2 \a action,
 * with public implementation \a q.
 */
GetApplicationVersionRequestPrivate::GetApplicationVersionRequestPrivate(
    const M2Request::Action action, GetApplicationVersionRequest * const q)
    : M2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetApplicationVersionRequest
 * class' copy constructor.
 */
GetApplicationVersionRequestPrivate::GetApplicationVersionRequestPrivate(
    const GetApplicationVersionRequestPrivate &other, GetApplicationVersionRequest * const q)
    : M2RequestPrivate(other, q)
{

}

} // namespace M2
} // namespace QtAws
