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
