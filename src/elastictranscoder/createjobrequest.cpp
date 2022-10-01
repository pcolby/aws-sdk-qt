// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createjobrequest.h"
#include "createjobrequest_p.h"
#include "createjobresponse.h"
#include "elastictranscoderrequest_p.h"

namespace QtAws {
namespace ElasticTranscoder {

/*!
 * \class QtAws::ElasticTranscoder::CreateJobRequest
 * \brief The CreateJobRequest class provides an interface for ElasticTranscoder CreateJob requests.
 *
 * \inmodule QtAwsElasticTranscoder
 *
 *  <fullname>AWS Elastic Transcoder Service</fullname>
 * 
 *  The AWS Elastic Transcoder
 *
 * \sa ElasticTranscoderClient::createJob
 */

/*!
 * Constructs a copy of \a other.
 */
CreateJobRequest::CreateJobRequest(const CreateJobRequest &other)
    : ElasticTranscoderRequest(new CreateJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateJobRequest object.
 */
CreateJobRequest::CreateJobRequest()
    : ElasticTranscoderRequest(new CreateJobRequestPrivate(ElasticTranscoderRequest::CreateJobAction, this))
{

}

/*!
 * \reimp
 */
bool CreateJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateJobRequest::response(QNetworkReply * const reply) const
{
    return new CreateJobResponse(*this, reply);
}

/*!
 * \class QtAws::ElasticTranscoder::CreateJobRequestPrivate
 * \brief The CreateJobRequestPrivate class provides private implementation for CreateJobRequest.
 * \internal
 *
 * \inmodule QtAwsElasticTranscoder
 */

/*!
 * Constructs a CreateJobRequestPrivate object for ElasticTranscoder \a action,
 * with public implementation \a q.
 */
CreateJobRequestPrivate::CreateJobRequestPrivate(
    const ElasticTranscoderRequest::Action action, CreateJobRequest * const q)
    : ElasticTranscoderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateJobRequest
 * class' copy constructor.
 */
CreateJobRequestPrivate::CreateJobRequestPrivate(
    const CreateJobRequestPrivate &other, CreateJobRequest * const q)
    : ElasticTranscoderRequestPrivate(other, q)
{

}

} // namespace ElasticTranscoder
} // namespace QtAws
