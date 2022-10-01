// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createqueuerequest.h"
#include "createqueuerequest_p.h"
#include "createqueueresponse.h"
#include "mediaconvertrequest_p.h"

namespace QtAws {
namespace MediaConvert {

/*!
 * \class QtAws::MediaConvert::CreateQueueRequest
 * \brief The CreateQueueRequest class provides an interface for MediaConvert CreateQueue requests.
 *
 * \inmodule QtAwsMediaConvert
 *
 *
 * \sa MediaConvertClient::createQueue
 */

/*!
 * Constructs a copy of \a other.
 */
CreateQueueRequest::CreateQueueRequest(const CreateQueueRequest &other)
    : MediaConvertRequest(new CreateQueueRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateQueueRequest object.
 */
CreateQueueRequest::CreateQueueRequest()
    : MediaConvertRequest(new CreateQueueRequestPrivate(MediaConvertRequest::CreateQueueAction, this))
{

}

/*!
 * \reimp
 */
bool CreateQueueRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateQueueResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateQueueRequest::response(QNetworkReply * const reply) const
{
    return new CreateQueueResponse(*this, reply);
}

/*!
 * \class QtAws::MediaConvert::CreateQueueRequestPrivate
 * \brief The CreateQueueRequestPrivate class provides private implementation for CreateQueueRequest.
 * \internal
 *
 * \inmodule QtAwsMediaConvert
 */

/*!
 * Constructs a CreateQueueRequestPrivate object for MediaConvert \a action,
 * with public implementation \a q.
 */
CreateQueueRequestPrivate::CreateQueueRequestPrivate(
    const MediaConvertRequest::Action action, CreateQueueRequest * const q)
    : MediaConvertRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateQueueRequest
 * class' copy constructor.
 */
CreateQueueRequestPrivate::CreateQueueRequestPrivate(
    const CreateQueueRequestPrivate &other, CreateQueueRequest * const q)
    : MediaConvertRequestPrivate(other, q)
{

}

} // namespace MediaConvert
} // namespace QtAws
