// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
