// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
