// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startcontentuploadrequest.h"
#include "startcontentuploadrequest_p.h"
#include "startcontentuploadresponse.h"
#include "wisdomrequest_p.h"

namespace QtAws {
namespace Wisdom {

/*!
 * \class QtAws::Wisdom::StartContentUploadRequest
 * \brief The StartContentUploadRequest class provides an interface for Wisdom StartContentUpload requests.
 *
 * \inmodule QtAwsWisdom
 *
 *  Amazon Connect Wisdom delivers agents the information they need to solve customer issues as they're actively speaking
 *  with customers. Agents can search across connected repositories from within their agent desktop to find answers quickly.
 *  Use the Amazon Connect Wisdom APIs to create an assistant and a knowledge base, for example, or manage content by
 *  uploading custom
 *
 * \sa WisdomClient::startContentUpload
 */

/*!
 * Constructs a copy of \a other.
 */
StartContentUploadRequest::StartContentUploadRequest(const StartContentUploadRequest &other)
    : WisdomRequest(new StartContentUploadRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartContentUploadRequest object.
 */
StartContentUploadRequest::StartContentUploadRequest()
    : WisdomRequest(new StartContentUploadRequestPrivate(WisdomRequest::StartContentUploadAction, this))
{

}

/*!
 * \reimp
 */
bool StartContentUploadRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartContentUploadResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartContentUploadRequest::response(QNetworkReply * const reply) const
{
    return new StartContentUploadResponse(*this, reply);
}

/*!
 * \class QtAws::Wisdom::StartContentUploadRequestPrivate
 * \brief The StartContentUploadRequestPrivate class provides private implementation for StartContentUploadRequest.
 * \internal
 *
 * \inmodule QtAwsWisdom
 */

/*!
 * Constructs a StartContentUploadRequestPrivate object for Wisdom \a action,
 * with public implementation \a q.
 */
StartContentUploadRequestPrivate::StartContentUploadRequestPrivate(
    const WisdomRequest::Action action, StartContentUploadRequest * const q)
    : WisdomRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartContentUploadRequest
 * class' copy constructor.
 */
StartContentUploadRequestPrivate::StartContentUploadRequestPrivate(
    const StartContentUploadRequestPrivate &other, StartContentUploadRequest * const q)
    : WisdomRequestPrivate(other, q)
{

}

} // namespace Wisdom
} // namespace QtAws
