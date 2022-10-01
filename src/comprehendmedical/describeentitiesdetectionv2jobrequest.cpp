// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeentitiesdetectionv2jobrequest.h"
#include "describeentitiesdetectionv2jobrequest_p.h"
#include "describeentitiesdetectionv2jobresponse.h"
#include "comprehendmedicalrequest_p.h"

namespace QtAws {
namespace ComprehendMedical {

/*!
 * \class QtAws::ComprehendMedical::DescribeEntitiesDetectionV2JobRequest
 * \brief The DescribeEntitiesDetectionV2JobRequest class provides an interface for ComprehendMedical DescribeEntitiesDetectionV2Job requests.
 *
 * \inmodule QtAwsComprehendMedical
 *
 *  Comprehend Medical; extracts structured information from unstructured clinical text. Use these actions to gain insight
 *  in your documents.
 *
 * \sa ComprehendMedicalClient::describeEntitiesDetectionV2Job
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeEntitiesDetectionV2JobRequest::DescribeEntitiesDetectionV2JobRequest(const DescribeEntitiesDetectionV2JobRequest &other)
    : ComprehendMedicalRequest(new DescribeEntitiesDetectionV2JobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeEntitiesDetectionV2JobRequest object.
 */
DescribeEntitiesDetectionV2JobRequest::DescribeEntitiesDetectionV2JobRequest()
    : ComprehendMedicalRequest(new DescribeEntitiesDetectionV2JobRequestPrivate(ComprehendMedicalRequest::DescribeEntitiesDetectionV2JobAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeEntitiesDetectionV2JobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeEntitiesDetectionV2JobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeEntitiesDetectionV2JobRequest::response(QNetworkReply * const reply) const
{
    return new DescribeEntitiesDetectionV2JobResponse(*this, reply);
}

/*!
 * \class QtAws::ComprehendMedical::DescribeEntitiesDetectionV2JobRequestPrivate
 * \brief The DescribeEntitiesDetectionV2JobRequestPrivate class provides private implementation for DescribeEntitiesDetectionV2JobRequest.
 * \internal
 *
 * \inmodule QtAwsComprehendMedical
 */

/*!
 * Constructs a DescribeEntitiesDetectionV2JobRequestPrivate object for ComprehendMedical \a action,
 * with public implementation \a q.
 */
DescribeEntitiesDetectionV2JobRequestPrivate::DescribeEntitiesDetectionV2JobRequestPrivate(
    const ComprehendMedicalRequest::Action action, DescribeEntitiesDetectionV2JobRequest * const q)
    : ComprehendMedicalRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeEntitiesDetectionV2JobRequest
 * class' copy constructor.
 */
DescribeEntitiesDetectionV2JobRequestPrivate::DescribeEntitiesDetectionV2JobRequestPrivate(
    const DescribeEntitiesDetectionV2JobRequestPrivate &other, DescribeEntitiesDetectionV2JobRequest * const q)
    : ComprehendMedicalRequestPrivate(other, q)
{

}

} // namespace ComprehendMedical
} // namespace QtAws
