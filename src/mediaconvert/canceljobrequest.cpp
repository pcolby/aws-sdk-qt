// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "canceljobrequest.h"
#include "canceljobrequest_p.h"
#include "canceljobresponse.h"
#include "mediaconvertrequest_p.h"

namespace QtAws {
namespace MediaConvert {

/*!
 * \class QtAws::MediaConvert::CancelJobRequest
 * \brief The CancelJobRequest class provides an interface for MediaConvert CancelJob requests.
 *
 * \inmodule QtAwsMediaConvert
 *
 *
 * \sa MediaConvertClient::cancelJob
 */

/*!
 * Constructs a copy of \a other.
 */
CancelJobRequest::CancelJobRequest(const CancelJobRequest &other)
    : MediaConvertRequest(new CancelJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CancelJobRequest object.
 */
CancelJobRequest::CancelJobRequest()
    : MediaConvertRequest(new CancelJobRequestPrivate(MediaConvertRequest::CancelJobAction, this))
{

}

/*!
 * \reimp
 */
bool CancelJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CancelJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CancelJobRequest::response(QNetworkReply * const reply) const
{
    return new CancelJobResponse(*this, reply);
}

/*!
 * \class QtAws::MediaConvert::CancelJobRequestPrivate
 * \brief The CancelJobRequestPrivate class provides private implementation for CancelJobRequest.
 * \internal
 *
 * \inmodule QtAwsMediaConvert
 */

/*!
 * Constructs a CancelJobRequestPrivate object for MediaConvert \a action,
 * with public implementation \a q.
 */
CancelJobRequestPrivate::CancelJobRequestPrivate(
    const MediaConvertRequest::Action action, CancelJobRequest * const q)
    : MediaConvertRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CancelJobRequest
 * class' copy constructor.
 */
CancelJobRequestPrivate::CancelJobRequestPrivate(
    const CancelJobRequestPrivate &other, CancelJobRequest * const q)
    : MediaConvertRequestPrivate(other, q)
{

}

} // namespace MediaConvert
} // namespace QtAws
