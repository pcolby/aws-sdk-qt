// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcontentsummaryrequest.h"
#include "getcontentsummaryrequest_p.h"
#include "getcontentsummaryresponse.h"
#include "wisdomrequest_p.h"

namespace QtAws {
namespace Wisdom {

/*!
 * \class QtAws::Wisdom::GetContentSummaryRequest
 * \brief The GetContentSummaryRequest class provides an interface for Wisdom GetContentSummary requests.
 *
 * \inmodule QtAwsWisdom
 *
 *  Amazon Connect Wisdom delivers agents the information they need to solve customer issues as they're actively speaking
 *  with customers. Agents can search across connected repositories from within their agent desktop to find answers quickly.
 *  Use the Amazon Connect Wisdom APIs to create an assistant and a knowledge base, for example, or manage content by
 *  uploading custom
 *
 * \sa WisdomClient::getContentSummary
 */

/*!
 * Constructs a copy of \a other.
 */
GetContentSummaryRequest::GetContentSummaryRequest(const GetContentSummaryRequest &other)
    : WisdomRequest(new GetContentSummaryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetContentSummaryRequest object.
 */
GetContentSummaryRequest::GetContentSummaryRequest()
    : WisdomRequest(new GetContentSummaryRequestPrivate(WisdomRequest::GetContentSummaryAction, this))
{

}

/*!
 * \reimp
 */
bool GetContentSummaryRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetContentSummaryResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetContentSummaryRequest::response(QNetworkReply * const reply) const
{
    return new GetContentSummaryResponse(*this, reply);
}

/*!
 * \class QtAws::Wisdom::GetContentSummaryRequestPrivate
 * \brief The GetContentSummaryRequestPrivate class provides private implementation for GetContentSummaryRequest.
 * \internal
 *
 * \inmodule QtAwsWisdom
 */

/*!
 * Constructs a GetContentSummaryRequestPrivate object for Wisdom \a action,
 * with public implementation \a q.
 */
GetContentSummaryRequestPrivate::GetContentSummaryRequestPrivate(
    const WisdomRequest::Action action, GetContentSummaryRequest * const q)
    : WisdomRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetContentSummaryRequest
 * class' copy constructor.
 */
GetContentSummaryRequestPrivate::GetContentSummaryRequestPrivate(
    const GetContentSummaryRequestPrivate &other, GetContentSummaryRequest * const q)
    : WisdomRequestPrivate(other, q)
{

}

} // namespace Wisdom
} // namespace QtAws
