// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describemodelrequest.h"
#include "describemodelrequest_p.h"
#include "describemodelresponse.h"
#include "lookoutvisionrequest_p.h"

namespace QtAws {
namespace LookoutVision {

/*!
 * \class QtAws::LookoutVision::DescribeModelRequest
 * \brief The DescribeModelRequest class provides an interface for LookoutVision DescribeModel requests.
 *
 * \inmodule QtAwsLookoutVision
 *
 *  This is the Amazon Lookout for Vision API Reference. It provides descriptions of actions, data types, common parameters,
 *  and common
 * 
 *  errors>
 * 
 *  Amazon Lookout for Vision enables you to find visual defects in industrial products, accurately and at scale. It uses
 *  computer vision to identify missing components in an industrial product, damage to vehicles or structures,
 *  irregularities in production lines, and even minuscule defects in silicon wafers — or any other physical item where
 *  quality is important such as a missing capacitor on printed circuit
 *
 * \sa LookoutVisionClient::describeModel
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeModelRequest::DescribeModelRequest(const DescribeModelRequest &other)
    : LookoutVisionRequest(new DescribeModelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeModelRequest object.
 */
DescribeModelRequest::DescribeModelRequest()
    : LookoutVisionRequest(new DescribeModelRequestPrivate(LookoutVisionRequest::DescribeModelAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeModelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeModelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeModelRequest::response(QNetworkReply * const reply) const
{
    return new DescribeModelResponse(*this, reply);
}

/*!
 * \class QtAws::LookoutVision::DescribeModelRequestPrivate
 * \brief The DescribeModelRequestPrivate class provides private implementation for DescribeModelRequest.
 * \internal
 *
 * \inmodule QtAwsLookoutVision
 */

/*!
 * Constructs a DescribeModelRequestPrivate object for LookoutVision \a action,
 * with public implementation \a q.
 */
DescribeModelRequestPrivate::DescribeModelRequestPrivate(
    const LookoutVisionRequest::Action action, DescribeModelRequest * const q)
    : LookoutVisionRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeModelRequest
 * class' copy constructor.
 */
DescribeModelRequestPrivate::DescribeModelRequestPrivate(
    const DescribeModelRequestPrivate &other, DescribeModelRequest * const q)
    : LookoutVisionRequestPrivate(other, q)
{

}

} // namespace LookoutVision
} // namespace QtAws
