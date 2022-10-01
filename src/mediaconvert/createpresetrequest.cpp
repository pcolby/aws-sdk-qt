// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createpresetrequest.h"
#include "createpresetrequest_p.h"
#include "createpresetresponse.h"
#include "mediaconvertrequest_p.h"

namespace QtAws {
namespace MediaConvert {

/*!
 * \class QtAws::MediaConvert::CreatePresetRequest
 * \brief The CreatePresetRequest class provides an interface for MediaConvert CreatePreset requests.
 *
 * \inmodule QtAwsMediaConvert
 *
 *
 * \sa MediaConvertClient::createPreset
 */

/*!
 * Constructs a copy of \a other.
 */
CreatePresetRequest::CreatePresetRequest(const CreatePresetRequest &other)
    : MediaConvertRequest(new CreatePresetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreatePresetRequest object.
 */
CreatePresetRequest::CreatePresetRequest()
    : MediaConvertRequest(new CreatePresetRequestPrivate(MediaConvertRequest::CreatePresetAction, this))
{

}

/*!
 * \reimp
 */
bool CreatePresetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreatePresetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreatePresetRequest::response(QNetworkReply * const reply) const
{
    return new CreatePresetResponse(*this, reply);
}

/*!
 * \class QtAws::MediaConvert::CreatePresetRequestPrivate
 * \brief The CreatePresetRequestPrivate class provides private implementation for CreatePresetRequest.
 * \internal
 *
 * \inmodule QtAwsMediaConvert
 */

/*!
 * Constructs a CreatePresetRequestPrivate object for MediaConvert \a action,
 * with public implementation \a q.
 */
CreatePresetRequestPrivate::CreatePresetRequestPrivate(
    const MediaConvertRequest::Action action, CreatePresetRequest * const q)
    : MediaConvertRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreatePresetRequest
 * class' copy constructor.
 */
CreatePresetRequestPrivate::CreatePresetRequestPrivate(
    const CreatePresetRequestPrivate &other, CreatePresetRequest * const q)
    : MediaConvertRequestPrivate(other, q)
{

}

} // namespace MediaConvert
} // namespace QtAws
