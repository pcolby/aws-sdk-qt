// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateanswerrequest.h"
#include "updateanswerrequest_p.h"
#include "updateanswerresponse.h"
#include "wellarchitectedrequest_p.h"

namespace QtAws {
namespace WellArchitected {

/*!
 * \class QtAws::WellArchitected::UpdateAnswerRequest
 * \brief The UpdateAnswerRequest class provides an interface for WellArchitected UpdateAnswer requests.
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
 * \sa WellArchitectedClient::updateAnswer
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateAnswerRequest::UpdateAnswerRequest(const UpdateAnswerRequest &other)
    : WellArchitectedRequest(new UpdateAnswerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateAnswerRequest object.
 */
UpdateAnswerRequest::UpdateAnswerRequest()
    : WellArchitectedRequest(new UpdateAnswerRequestPrivate(WellArchitectedRequest::UpdateAnswerAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateAnswerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateAnswerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateAnswerRequest::response(QNetworkReply * const reply) const
{
    return new UpdateAnswerResponse(*this, reply);
}

/*!
 * \class QtAws::WellArchitected::UpdateAnswerRequestPrivate
 * \brief The UpdateAnswerRequestPrivate class provides private implementation for UpdateAnswerRequest.
 * \internal
 *
 * \inmodule QtAwsWellArchitected
 */

/*!
 * Constructs a UpdateAnswerRequestPrivate object for WellArchitected \a action,
 * with public implementation \a q.
 */
UpdateAnswerRequestPrivate::UpdateAnswerRequestPrivate(
    const WellArchitectedRequest::Action action, UpdateAnswerRequest * const q)
    : WellArchitectedRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateAnswerRequest
 * class' copy constructor.
 */
UpdateAnswerRequestPrivate::UpdateAnswerRequestPrivate(
    const UpdateAnswerRequestPrivate &other, UpdateAnswerRequest * const q)
    : WellArchitectedRequestPrivate(other, q)
{

}

} // namespace WellArchitected
} // namespace QtAws
