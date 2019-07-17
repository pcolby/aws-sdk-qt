/*
    Copyright 2013-2019 Paul Colby

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

#include "deletejobtemplaterequest.h"
#include "deletejobtemplaterequest_p.h"
#include "deletejobtemplateresponse.h"
#include "mediaconvertrequest_p.h"

namespace QtAws {
namespace MediaConvert {

/*!
 * \class QtAws::MediaConvert::DeleteJobTemplateRequest
 * \brief The DeleteJobTemplateRequest class provides an interface for MediaConvert DeleteJobTemplate requests.
 *
 * \inmodule QtAwsMediaConvert
 *
 *
 * \sa MediaConvertClient::deleteJobTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteJobTemplateRequest::DeleteJobTemplateRequest(const DeleteJobTemplateRequest &other)
    : MediaConvertRequest(new DeleteJobTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteJobTemplateRequest object.
 */
DeleteJobTemplateRequest::DeleteJobTemplateRequest()
    : MediaConvertRequest(new DeleteJobTemplateRequestPrivate(MediaConvertRequest::DeleteJobTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteJobTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteJobTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteJobTemplateRequest::response(QNetworkReply * const reply) const
{
    return new DeleteJobTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::MediaConvert::DeleteJobTemplateRequestPrivate
 * \brief The DeleteJobTemplateRequestPrivate class provides private implementation for DeleteJobTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsMediaConvert
 */

/*!
 * Constructs a DeleteJobTemplateRequestPrivate object for MediaConvert \a action,
 * with public implementation \a q.
 */
DeleteJobTemplateRequestPrivate::DeleteJobTemplateRequestPrivate(
    const MediaConvertRequest::Action action, DeleteJobTemplateRequest * const q)
    : MediaConvertRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteJobTemplateRequest
 * class' copy constructor.
 */
DeleteJobTemplateRequestPrivate::DeleteJobTemplateRequestPrivate(
    const DeleteJobTemplateRequestPrivate &other, DeleteJobTemplateRequest * const q)
    : MediaConvertRequestPrivate(other, q)
{

}

} // namespace MediaConvert
} // namespace QtAws
