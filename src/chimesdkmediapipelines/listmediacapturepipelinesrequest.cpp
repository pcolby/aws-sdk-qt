/*
    Copyright 2013-2021 Paul Colby

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

#include "listmediacapturepipelinesrequest.h"
#include "listmediacapturepipelinesrequest_p.h"
#include "listmediacapturepipelinesresponse.h"
#include "chimesdkmediapipelinesrequest_p.h"

namespace QtAws {
namespace ChimeSdkMediaPipelines {

/*!
 * \class QtAws::ChimeSdkMediaPipelines::ListMediaCapturePipelinesRequest
 * \brief The ListMediaCapturePipelinesRequest class provides an interface for ChimeSdkMediaPipelines ListMediaCapturePipelines requests.
 *
 * \inmodule QtAwsChimeSdkMediaPipelines
 *
 *  The Amazon Chime SDK media pipeline APIs in this section allow software developers to create Amazon Chime SDK media
 *  pipelines that capture, concatenate, or stream your Amazon Chime SDK meetings. For more information about media
 *  pipleines, see <a
 *  href="http://amazonaws.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Media_Pipelines.html">Amazon Chime
 *  SDK media pipelines</a>.
 *
 * \sa ChimeSdkMediaPipelinesClient::listMediaCapturePipelines
 */

/*!
 * Constructs a copy of \a other.
 */
ListMediaCapturePipelinesRequest::ListMediaCapturePipelinesRequest(const ListMediaCapturePipelinesRequest &other)
    : ChimeSdkMediaPipelinesRequest(new ListMediaCapturePipelinesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListMediaCapturePipelinesRequest object.
 */
ListMediaCapturePipelinesRequest::ListMediaCapturePipelinesRequest()
    : ChimeSdkMediaPipelinesRequest(new ListMediaCapturePipelinesRequestPrivate(ChimeSdkMediaPipelinesRequest::ListMediaCapturePipelinesAction, this))
{

}

/*!
 * \reimp
 */
bool ListMediaCapturePipelinesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListMediaCapturePipelinesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListMediaCapturePipelinesRequest::response(QNetworkReply * const reply) const
{
    return new ListMediaCapturePipelinesResponse(*this, reply);
}

/*!
 * \class QtAws::ChimeSdkMediaPipelines::ListMediaCapturePipelinesRequestPrivate
 * \brief The ListMediaCapturePipelinesRequestPrivate class provides private implementation for ListMediaCapturePipelinesRequest.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMediaPipelines
 */

/*!
 * Constructs a ListMediaCapturePipelinesRequestPrivate object for ChimeSdkMediaPipelines \a action,
 * with public implementation \a q.
 */
ListMediaCapturePipelinesRequestPrivate::ListMediaCapturePipelinesRequestPrivate(
    const ChimeSdkMediaPipelinesRequest::Action action, ListMediaCapturePipelinesRequest * const q)
    : ChimeSdkMediaPipelinesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListMediaCapturePipelinesRequest
 * class' copy constructor.
 */
ListMediaCapturePipelinesRequestPrivate::ListMediaCapturePipelinesRequestPrivate(
    const ListMediaCapturePipelinesRequestPrivate &other, ListMediaCapturePipelinesRequest * const q)
    : ChimeSdkMediaPipelinesRequestPrivate(other, q)
{

}

} // namespace ChimeSdkMediaPipelines
} // namespace QtAws
