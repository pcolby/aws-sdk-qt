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

#include "listmediapipelinesrequest.h"
#include "listmediapipelinesrequest_p.h"
#include "listmediapipelinesresponse.h"
#include "chimesdkmediapipelinesrequest_p.h"

namespace QtAws {
namespace ChimeSdkMediaPipelines {

/*!
 * \class QtAws::ChimeSdkMediaPipelines::ListMediaPipelinesRequest
 * \brief The ListMediaPipelinesRequest class provides an interface for ChimeSdkMediaPipelines ListMediaPipelines requests.
 *
 * \inmodule QtAwsChimeSdkMediaPipelines
 *
 *  The Amazon Chime SDK media pipeline APIs in this section allow software developers to create Amazon Chime SDK media
 *  pipelines that capture, concatenate, or stream your Amazon Chime SDK meetings. For more information about media
 *  pipleines, see <a
 *  href="http://amazonaws.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Media_Pipelines.html">Amazon Chime
 *  SDK media pipelines</a>.
 *
 * \sa ChimeSdkMediaPipelinesClient::listMediaPipelines
 */

/*!
 * Constructs a copy of \a other.
 */
ListMediaPipelinesRequest::ListMediaPipelinesRequest(const ListMediaPipelinesRequest &other)
    : ChimeSdkMediaPipelinesRequest(new ListMediaPipelinesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListMediaPipelinesRequest object.
 */
ListMediaPipelinesRequest::ListMediaPipelinesRequest()
    : ChimeSdkMediaPipelinesRequest(new ListMediaPipelinesRequestPrivate(ChimeSdkMediaPipelinesRequest::ListMediaPipelinesAction, this))
{

}

/*!
 * \reimp
 */
bool ListMediaPipelinesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListMediaPipelinesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListMediaPipelinesRequest::response(QNetworkReply * const reply) const
{
    return new ListMediaPipelinesResponse(*this, reply);
}

/*!
 * \class QtAws::ChimeSdkMediaPipelines::ListMediaPipelinesRequestPrivate
 * \brief The ListMediaPipelinesRequestPrivate class provides private implementation for ListMediaPipelinesRequest.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMediaPipelines
 */

/*!
 * Constructs a ListMediaPipelinesRequestPrivate object for ChimeSdkMediaPipelines \a action,
 * with public implementation \a q.
 */
ListMediaPipelinesRequestPrivate::ListMediaPipelinesRequestPrivate(
    const ChimeSdkMediaPipelinesRequest::Action action, ListMediaPipelinesRequest * const q)
    : ChimeSdkMediaPipelinesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListMediaPipelinesRequest
 * class' copy constructor.
 */
ListMediaPipelinesRequestPrivate::ListMediaPipelinesRequestPrivate(
    const ListMediaPipelinesRequestPrivate &other, ListMediaPipelinesRequest * const q)
    : ChimeSdkMediaPipelinesRequestPrivate(other, q)
{

}

} // namespace ChimeSdkMediaPipelines
} // namespace QtAws
