// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getjobrequest.h"
#include "getjobrequest_p.h"
#include "getjobresponse.h"
#include "mediaconvertrequest_p.h"

namespace QtAws {
namespace MediaConvert {

/*!
 * \class QtAws::MediaConvert::GetJobRequest
 * \brief The GetJobRequest class provides an interface for MediaConvert GetJob requests.
 *
 * \inmodule QtAwsMediaConvert
 *
 *
 * \sa MediaConvertClient::getJob
 */

/*!
 * Constructs a copy of \a other.
 */
GetJobRequest::GetJobRequest(const GetJobRequest &other)
    : MediaConvertRequest(new GetJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetJobRequest object.
 */
GetJobRequest::GetJobRequest()
    : MediaConvertRequest(new GetJobRequestPrivate(MediaConvertRequest::GetJobAction, this))
{

}

/*!
 * \reimp
 */
bool GetJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetJobRequest::response(QNetworkReply * const reply) const
{
    return new GetJobResponse(*this, reply);
}

/*!
 * \class QtAws::MediaConvert::GetJobRequestPrivate
 * \brief The GetJobRequestPrivate class provides private implementation for GetJobRequest.
 * \internal
 *
 * \inmodule QtAwsMediaConvert
 */

/*!
 * Constructs a GetJobRequestPrivate object for MediaConvert \a action,
 * with public implementation \a q.
 */
GetJobRequestPrivate::GetJobRequestPrivate(
    const MediaConvertRequest::Action action, GetJobRequest * const q)
    : MediaConvertRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetJobRequest
 * class' copy constructor.
 */
GetJobRequestPrivate::GetJobRequestPrivate(
    const GetJobRequestPrivate &other, GetJobRequest * const q)
    : MediaConvertRequestPrivate(other, q)
{

}

} // namespace MediaConvert
} // namespace QtAws
