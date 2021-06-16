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

#include "createpresetrequest.h"
#include "createpresetrequest_p.h"
#include "createpresetresponse.h"
#include "elastictranscoderrequest_p.h"

namespace QtAws {
namespace ElasticTranscoder {

/*!
 * \class QtAws::ElasticTranscoder::CreatePresetRequest
 * \brief The CreatePresetRequest class provides an interface for ElasticTranscoder CreatePreset requests.
 *
 * \inmodule QtAwsElasticTranscoder
 *
 *  <fullname>AWS Elastic Transcoder Service</fullname>
 * 
 *  The AWS Elastic Transcoder
 *
 * \sa ElasticTranscoderClient::createPreset
 */

/*!
 * Constructs a copy of \a other.
 */
CreatePresetRequest::CreatePresetRequest(const CreatePresetRequest &other)
    : ElasticTranscoderRequest(new CreatePresetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreatePresetRequest object.
 */
CreatePresetRequest::CreatePresetRequest()
    : ElasticTranscoderRequest(new CreatePresetRequestPrivate(ElasticTranscoderRequest::CreatePresetAction, this))
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
 * \class QtAws::ElasticTranscoder::CreatePresetRequestPrivate
 * \brief The CreatePresetRequestPrivate class provides private implementation for CreatePresetRequest.
 * \internal
 *
 * \inmodule QtAwsElasticTranscoder
 */

/*!
 * Constructs a CreatePresetRequestPrivate object for ElasticTranscoder \a action,
 * with public implementation \a q.
 */
CreatePresetRequestPrivate::CreatePresetRequestPrivate(
    const ElasticTranscoderRequest::Action action, CreatePresetRequest * const q)
    : ElasticTranscoderRequestPrivate(action, q)
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
    : ElasticTranscoderRequestPrivate(other, q)
{

}

} // namespace ElasticTranscoder
} // namespace QtAws
