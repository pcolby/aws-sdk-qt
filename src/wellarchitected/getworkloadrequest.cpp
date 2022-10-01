// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getworkloadrequest.h"
#include "getworkloadrequest_p.h"
#include "getworkloadresponse.h"
#include "wellarchitectedrequest_p.h"

namespace QtAws {
namespace WellArchitected {

/*!
 * \class QtAws::WellArchitected::GetWorkloadRequest
 * \brief The GetWorkloadRequest class provides an interface for WellArchitected GetWorkload requests.
 *
 * \inmodule QtAwsWellArchitected
 *
 *  <fullname>Well-Architected Tool</fullname>
 * 
 *  This is the <i>Well-Architected Tool API Reference</i>. The WA Tool API provides programmatic access to the <a
 *  href="http://aws.amazon.com/well-architected-tool">Well-Architected Tool</a> in the <a
 *  href="https://console.aws.amazon.com/wellarchitected">Amazon Web Services Management Console</a>. For information about
 *  the Well-Architected Tool, see the <a
 *  href="https://docs.aws.amazon.com/wellarchitected/latest/userguide/intro.html">Well-Architected Tool User
 *
 * \sa WellArchitectedClient::getWorkload
 */

/*!
 * Constructs a copy of \a other.
 */
GetWorkloadRequest::GetWorkloadRequest(const GetWorkloadRequest &other)
    : WellArchitectedRequest(new GetWorkloadRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetWorkloadRequest object.
 */
GetWorkloadRequest::GetWorkloadRequest()
    : WellArchitectedRequest(new GetWorkloadRequestPrivate(WellArchitectedRequest::GetWorkloadAction, this))
{

}

/*!
 * \reimp
 */
bool GetWorkloadRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetWorkloadResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetWorkloadRequest::response(QNetworkReply * const reply) const
{
    return new GetWorkloadResponse(*this, reply);
}

/*!
 * \class QtAws::WellArchitected::GetWorkloadRequestPrivate
 * \brief The GetWorkloadRequestPrivate class provides private implementation for GetWorkloadRequest.
 * \internal
 *
 * \inmodule QtAwsWellArchitected
 */

/*!
 * Constructs a GetWorkloadRequestPrivate object for WellArchitected \a action,
 * with public implementation \a q.
 */
GetWorkloadRequestPrivate::GetWorkloadRequestPrivate(
    const WellArchitectedRequest::Action action, GetWorkloadRequest * const q)
    : WellArchitectedRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetWorkloadRequest
 * class' copy constructor.
 */
GetWorkloadRequestPrivate::GetWorkloadRequestPrivate(
    const GetWorkloadRequestPrivate &other, GetWorkloadRequest * const q)
    : WellArchitectedRequestPrivate(other, q)
{

}

} // namespace WellArchitected
} // namespace QtAws
