/*
    Copyright 2013-2018 Paul Colby

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
