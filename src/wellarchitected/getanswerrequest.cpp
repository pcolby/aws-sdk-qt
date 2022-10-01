// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getanswerrequest.h"
#include "getanswerrequest_p.h"
#include "getanswerresponse.h"
#include "wellarchitectedrequest_p.h"

namespace QtAws {
namespace WellArchitected {

/*!
 * \class QtAws::WellArchitected::GetAnswerRequest
 * \brief The GetAnswerRequest class provides an interface for WellArchitected GetAnswer requests.
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
 * \sa WellArchitectedClient::getAnswer
 */

/*!
 * Constructs a copy of \a other.
 */
GetAnswerRequest::GetAnswerRequest(const GetAnswerRequest &other)
    : WellArchitectedRequest(new GetAnswerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetAnswerRequest object.
 */
GetAnswerRequest::GetAnswerRequest()
    : WellArchitectedRequest(new GetAnswerRequestPrivate(WellArchitectedRequest::GetAnswerAction, this))
{

}

/*!
 * \reimp
 */
bool GetAnswerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetAnswerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetAnswerRequest::response(QNetworkReply * const reply) const
{
    return new GetAnswerResponse(*this, reply);
}

/*!
 * \class QtAws::WellArchitected::GetAnswerRequestPrivate
 * \brief The GetAnswerRequestPrivate class provides private implementation for GetAnswerRequest.
 * \internal
 *
 * \inmodule QtAwsWellArchitected
 */

/*!
 * Constructs a GetAnswerRequestPrivate object for WellArchitected \a action,
 * with public implementation \a q.
 */
GetAnswerRequestPrivate::GetAnswerRequestPrivate(
    const WellArchitectedRequest::Action action, GetAnswerRequest * const q)
    : WellArchitectedRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetAnswerRequest
 * class' copy constructor.
 */
GetAnswerRequestPrivate::GetAnswerRequestPrivate(
    const GetAnswerRequestPrivate &other, GetAnswerRequest * const q)
    : WellArchitectedRequestPrivate(other, q)
{

}

} // namespace WellArchitected
} // namespace QtAws
