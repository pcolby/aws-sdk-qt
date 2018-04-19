/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

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
 *
 * Constructs a GetJobTemplateRequestPrivate object for MediaConvert \a action with,
 * public implementation \a q.
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
