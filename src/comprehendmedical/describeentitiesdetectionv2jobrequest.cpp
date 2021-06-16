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
 *  Amazon Comprehend Medical extracts structured information from unstructured clinical text. Use these actions to gain
 *  insight in your documents.
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
