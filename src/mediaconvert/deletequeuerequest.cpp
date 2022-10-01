// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletequeuerequest.h"
#include "deletequeuerequest_p.h"
#include "deletequeueresponse.h"
#include "mediaconvertrequest_p.h"

namespace QtAws {
namespace MediaConvert {

/*!
 * \class QtAws::MediaConvert::DeleteQueueRequest
 * \brief The DeleteQueueRequest class provides an interface for MediaConvert DeleteQueue requests.
 *
 * \inmodule QtAwsMediaConvert
 *
 *
 * \sa MediaConvertClient::deleteQueue
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteQueueRequest::DeleteQueueRequest(const DeleteQueueRequest &other)
    : MediaConvertRequest(new DeleteQueueRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteQueueRequest object.
 */
DeleteQueueRequest::DeleteQueueRequest()
    : MediaConvertRequest(new DeleteQueueRequestPrivate(MediaConvertRequest::DeleteQueueAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteQueueRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteQueueResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteQueueRequest::response(QNetworkReply * const reply) const
{
    return new DeleteQueueResponse(*this, reply);
}

/*!
 * \class QtAws::MediaConvert::DeleteQueueRequestPrivate
 * \brief The DeleteQueueRequestPrivate class provides private implementation for DeleteQueueRequest.
 * \internal
 *
 * \inmodule QtAwsMediaConvert
 */

/*!
 * Constructs a DeleteQueueRequestPrivate object for MediaConvert \a action,
 * with public implementation \a q.
 */
DeleteQueueRequestPrivate::DeleteQueueRequestPrivate(
    const MediaConvertRequest::Action action, DeleteQueueRequest * const q)
    : MediaConvertRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteQueueRequest
 * class' copy constructor.
 */
DeleteQueueRequestPrivate::DeleteQueueRequestPrivate(
    const DeleteQueueRequestPrivate &other, DeleteQueueRequest * const q)
    : MediaConvertRequestPrivate(other, q)
{

}

} // namespace MediaConvert
} // namespace QtAws
