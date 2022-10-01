// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdatasetdetailsrequest.h"
#include "getdatasetdetailsrequest_p.h"
#include "getdatasetdetailsresponse.h"
#include "m2request_p.h"

namespace QtAws {
namespace M2 {

/*!
 * \class QtAws::M2::GetDataSetDetailsRequest
 * \brief The GetDataSetDetailsRequest class provides an interface for M2 GetDataSetDetails requests.
 *
 * \inmodule QtAwsM2
 *
 *  Amazon Web Services Mainframe Modernization provides tools and resources to help you plan and implement migration and
 *  modernization from mainframes to Amazon Web Services managed runtime environments. It provides tools for analyzing
 *  existing mainframe applications, developing or updating mainframe applications using COBOL or PL/I, and implementing an
 *  automated pipeline for continuous integration and continuous delivery (CI/CD) of the
 *
 * \sa M2Client::getDataSetDetails
 */

/*!
 * Constructs a copy of \a other.
 */
GetDataSetDetailsRequest::GetDataSetDetailsRequest(const GetDataSetDetailsRequest &other)
    : M2Request(new GetDataSetDetailsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDataSetDetailsRequest object.
 */
GetDataSetDetailsRequest::GetDataSetDetailsRequest()
    : M2Request(new GetDataSetDetailsRequestPrivate(M2Request::GetDataSetDetailsAction, this))
{

}

/*!
 * \reimp
 */
bool GetDataSetDetailsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDataSetDetailsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDataSetDetailsRequest::response(QNetworkReply * const reply) const
{
    return new GetDataSetDetailsResponse(*this, reply);
}

/*!
 * \class QtAws::M2::GetDataSetDetailsRequestPrivate
 * \brief The GetDataSetDetailsRequestPrivate class provides private implementation for GetDataSetDetailsRequest.
 * \internal
 *
 * \inmodule QtAwsM2
 */

/*!
 * Constructs a GetDataSetDetailsRequestPrivate object for M2 \a action,
 * with public implementation \a q.
 */
GetDataSetDetailsRequestPrivate::GetDataSetDetailsRequestPrivate(
    const M2Request::Action action, GetDataSetDetailsRequest * const q)
    : M2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDataSetDetailsRequest
 * class' copy constructor.
 */
GetDataSetDetailsRequestPrivate::GetDataSetDetailsRequestPrivate(
    const GetDataSetDetailsRequestPrivate &other, GetDataSetDetailsRequest * const q)
    : M2RequestPrivate(other, q)
{

}

} // namespace M2
} // namespace QtAws
