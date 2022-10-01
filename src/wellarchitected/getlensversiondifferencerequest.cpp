// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getlensversiondifferencerequest.h"
#include "getlensversiondifferencerequest_p.h"
#include "getlensversiondifferenceresponse.h"
#include "wellarchitectedrequest_p.h"

namespace QtAws {
namespace WellArchitected {

/*!
 * \class QtAws::WellArchitected::GetLensVersionDifferenceRequest
 * \brief The GetLensVersionDifferenceRequest class provides an interface for WellArchitected GetLensVersionDifference requests.
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
 * \sa WellArchitectedClient::getLensVersionDifference
 */

/*!
 * Constructs a copy of \a other.
 */
GetLensVersionDifferenceRequest::GetLensVersionDifferenceRequest(const GetLensVersionDifferenceRequest &other)
    : WellArchitectedRequest(new GetLensVersionDifferenceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetLensVersionDifferenceRequest object.
 */
GetLensVersionDifferenceRequest::GetLensVersionDifferenceRequest()
    : WellArchitectedRequest(new GetLensVersionDifferenceRequestPrivate(WellArchitectedRequest::GetLensVersionDifferenceAction, this))
{

}

/*!
 * \reimp
 */
bool GetLensVersionDifferenceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetLensVersionDifferenceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetLensVersionDifferenceRequest::response(QNetworkReply * const reply) const
{
    return new GetLensVersionDifferenceResponse(*this, reply);
}

/*!
 * \class QtAws::WellArchitected::GetLensVersionDifferenceRequestPrivate
 * \brief The GetLensVersionDifferenceRequestPrivate class provides private implementation for GetLensVersionDifferenceRequest.
 * \internal
 *
 * \inmodule QtAwsWellArchitected
 */

/*!
 * Constructs a GetLensVersionDifferenceRequestPrivate object for WellArchitected \a action,
 * with public implementation \a q.
 */
GetLensVersionDifferenceRequestPrivate::GetLensVersionDifferenceRequestPrivate(
    const WellArchitectedRequest::Action action, GetLensVersionDifferenceRequest * const q)
    : WellArchitectedRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetLensVersionDifferenceRequest
 * class' copy constructor.
 */
GetLensVersionDifferenceRequestPrivate::GetLensVersionDifferenceRequestPrivate(
    const GetLensVersionDifferenceRequestPrivate &other, GetLensVersionDifferenceRequest * const q)
    : WellArchitectedRequestPrivate(other, q)
{

}

} // namespace WellArchitected
} // namespace QtAws
