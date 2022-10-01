// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createjobtemplaterequest.h"
#include "createjobtemplaterequest_p.h"
#include "createjobtemplateresponse.h"
#include "mediaconvertrequest_p.h"

namespace QtAws {
namespace MediaConvert {

/*!
 * \class QtAws::MediaConvert::CreateJobTemplateRequest
 * \brief The CreateJobTemplateRequest class provides an interface for MediaConvert CreateJobTemplate requests.
 *
 * \inmodule QtAwsMediaConvert
 *
 *
 * \sa MediaConvertClient::createJobTemplate
 */

/*!
 * Constructs a copy of \a other.
 */
CreateJobTemplateRequest::CreateJobTemplateRequest(const CreateJobTemplateRequest &other)
    : MediaConvertRequest(new CreateJobTemplateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateJobTemplateRequest object.
 */
CreateJobTemplateRequest::CreateJobTemplateRequest()
    : MediaConvertRequest(new CreateJobTemplateRequestPrivate(MediaConvertRequest::CreateJobTemplateAction, this))
{

}

/*!
 * \reimp
 */
bool CreateJobTemplateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateJobTemplateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateJobTemplateRequest::response(QNetworkReply * const reply) const
{
    return new CreateJobTemplateResponse(*this, reply);
}

/*!
 * \class QtAws::MediaConvert::CreateJobTemplateRequestPrivate
 * \brief The CreateJobTemplateRequestPrivate class provides private implementation for CreateJobTemplateRequest.
 * \internal
 *
 * \inmodule QtAwsMediaConvert
 */

/*!
 * Constructs a CreateJobTemplateRequestPrivate object for MediaConvert \a action,
 * with public implementation \a q.
 */
CreateJobTemplateRequestPrivate::CreateJobTemplateRequestPrivate(
    const MediaConvertRequest::Action action, CreateJobTemplateRequest * const q)
    : MediaConvertRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateJobTemplateRequest
 * class' copy constructor.
 */
CreateJobTemplateRequestPrivate::CreateJobTemplateRequestPrivate(
    const CreateJobTemplateRequestPrivate &other, CreateJobTemplateRequest * const q)
    : MediaConvertRequestPrivate(other, q)
{

}

} // namespace MediaConvert
} // namespace QtAws
