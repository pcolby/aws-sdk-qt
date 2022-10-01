// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatejobtemplaterequest.h"
#include "updatejobtemplaterequest_p.h"
#include "updatejobtemplateresponse.h"
#include "mediaconvertrequest_p.h"

namespace QtAws {
namespace MediaConvert {

/*!
 * \class QtAws::MediaConvert::UpdateJobTemplateRequest
 * \brief The UpdateJobTemplateRequest class provides an interface for MediaConvert UpdateJobTemplate requests.
 *
 * \inmodule QtAwsMediaConvert
 *
 *
 * \sa MediaConvertClient::updateJobTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateJobTemplateRequest::UpdateJobTemplateRequest(const UpdateJobTemplateRequest &other)
    : MediaConvertRequest(new UpdateJobTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateJobTemplateRequest object.
 */
UpdateJobTemplateRequest::UpdateJobTemplateRequest()
    : MediaConvertRequest(new UpdateJobTemplateRequestPrivate(MediaConvertRequest::UpdateJobTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateJobTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateJobTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateJobTemplateRequest::response(QNetworkReply * const reply) const
{
    return new UpdateJobTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::MediaConvert::UpdateJobTemplateRequestPrivate
 * \brief The UpdateJobTemplateRequestPrivate class provides private implementation for UpdateJobTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsMediaConvert
 */

/*!
 * Constructs a UpdateJobTemplateRequestPrivate object for MediaConvert \a action,
 * with public implementation \a q.
 */
UpdateJobTemplateRequestPrivate::UpdateJobTemplateRequestPrivate(
    const MediaConvertRequest::Action action, UpdateJobTemplateRequest * const q)
    : MediaConvertRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateJobTemplateRequest
 * class' copy constructor.
 */
UpdateJobTemplateRequestPrivate::UpdateJobTemplateRequestPrivate(
    const UpdateJobTemplateRequestPrivate &other, UpdateJobTemplateRequest * const q)
    : MediaConvertRequestPrivate(other, q)
{

}

} // namespace MediaConvert
} // namespace QtAws
