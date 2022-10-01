// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getjobtemplaterequest.h"
#include "getjobtemplaterequest_p.h"
#include "getjobtemplateresponse.h"
#include "mediaconvertrequest_p.h"

namespace QtAws {
namespace MediaConvert {

/*!
 * \class QtAws::MediaConvert::GetJobTemplateRequest
 * \brief The GetJobTemplateRequest class provides an interface for MediaConvert GetJobTemplate requests.
 *
 * \inmodule QtAwsMediaConvert
 *
 *
 * \sa MediaConvertClient::getJobTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
GetJobTemplateRequest::GetJobTemplateRequest(const GetJobTemplateRequest &other)
    : MediaConvertRequest(new GetJobTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetJobTemplateRequest object.
 */
GetJobTemplateRequest::GetJobTemplateRequest()
    : MediaConvertRequest(new GetJobTemplateRequestPrivate(MediaConvertRequest::GetJobTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool GetJobTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetJobTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetJobTemplateRequest::response(QNetworkReply * const reply) const
{
    return new GetJobTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::MediaConvert::GetJobTemplateRequestPrivate
 * \brief The GetJobTemplateRequestPrivate class provides private implementation for GetJobTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsMediaConvert
 */

/*!
 * Constructs a GetJobTemplateRequestPrivate object for MediaConvert \a action,
 * with public implementation \a q.
 */
GetJobTemplateRequestPrivate::GetJobTemplateRequestPrivate(
    const MediaConvertRequest::Action action, GetJobTemplateRequest * const q)
    : MediaConvertRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetJobTemplateRequest
 * class' copy constructor.
 */
GetJobTemplateRequestPrivate::GetJobTemplateRequestPrivate(
    const GetJobTemplateRequestPrivate &other, GetJobTemplateRequest * const q)
    : MediaConvertRequestPrivate(other, q)
{

}

} // namespace MediaConvert
} // namespace QtAws
