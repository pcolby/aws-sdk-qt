/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listspeechsynthesistasksrequest.h"
#include "listspeechsynthesistasksrequest_p.h"
#include "listspeechsynthesistasksresponse.h"
#include "pollyrequest_p.h"

namespace QtAws {
namespace Polly {

/*!
 * \class QtAws::Polly::ListSpeechSynthesisTasksRequest
 * \brief The ListSpeechSynthesisTasksRequest class provides an interface for Polly ListSpeechSynthesisTasks requests.
 *
 * \inmodule QtAwsPolly
 *
 *  Amazon Polly is a web service that makes it easy to synthesize speech from
 * 
 *  text>
 * 
 *  The Amazon Polly service provides API operations for synthesizing high-quality speech from plain text and Speech
 *  Synthesis Markup Language (SSML), along with managing pronunciations lexicons that enable you to get the best results
 *  for your application
 *
 * \sa PollyClient::listSpeechSynthesisTasks
 */

/*!
 * Constructs a copy of \a other.
 */
ListSpeechSynthesisTasksRequest::ListSpeechSynthesisTasksRequest(const ListSpeechSynthesisTasksRequest &other)
    : PollyRequest(new ListSpeechSynthesisTasksRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListSpeechSynthesisTasksRequest object.
 */
ListSpeechSynthesisTasksRequest::ListSpeechSynthesisTasksRequest()
    : PollyRequest(new ListSpeechSynthesisTasksRequestPrivate(PollyRequest::ListSpeechSynthesisTasksAction, this))
{

}

/*!
 * \reimp
 */
bool ListSpeechSynthesisTasksRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListSpeechSynthesisTasksResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListSpeechSynthesisTasksRequest::response(QNetworkReply * const reply) const
{
    return new ListSpeechSynthesisTasksResponse(*this, reply);
}

/*!
 * \class QtAws::Polly::ListSpeechSynthesisTasksRequestPrivate
 * \brief The ListSpeechSynthesisTasksRequestPrivate class provides private implementation for ListSpeechSynthesisTasksRequest.
 * \internal
 *
 * \inmodule QtAwsPolly
 */

/*!
 * Constructs a ListSpeechSynthesisTasksRequestPrivate object for Polly \a action,
 * with public implementation \a q.
 */
ListSpeechSynthesisTasksRequestPrivate::ListSpeechSynthesisTasksRequestPrivate(
    const PollyRequest::Action action, ListSpeechSynthesisTasksRequest * const q)
    : PollyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListSpeechSynthesisTasksRequest
 * class' copy constructor.
 */
ListSpeechSynthesisTasksRequestPrivate::ListSpeechSynthesisTasksRequestPrivate(
    const ListSpeechSynthesisTasksRequestPrivate &other, ListSpeechSynthesisTasksRequest * const q)
    : PollyRequestPrivate(other, q)
{

}

} // namespace Polly
} // namespace QtAws
