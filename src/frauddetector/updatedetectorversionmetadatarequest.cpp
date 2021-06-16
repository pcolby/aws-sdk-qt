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

#include "updatedetectorversionmetadatarequest.h"
#include "updatedetectorversionmetadatarequest_p.h"
#include "updatedetectorversionmetadataresponse.h"
#include "frauddetectorrequest_p.h"

namespace QtAws {
namespace FraudDetector {

/*!
 * \class QtAws::FraudDetector::UpdateDetectorVersionMetadataRequest
 * \brief The UpdateDetectorVersionMetadataRequest class provides an interface for FraudDetector UpdateDetectorVersionMetadata requests.
 *
 * \inmodule QtAwsFraudDetector
 *
 *  This is the Amazon Fraud Detector API Reference. This guide is for developers who need detailed information about Amazon
 *  Fraud Detector API actions, data types, and errors. For more information about Amazon Fraud Detector features, see the
 *  <a href="https://docs.aws.amazon.com/frauddetector/latest/ug/">Amazon Fraud Detector User
 *
 * \sa FraudDetectorClient::updateDetectorVersionMetadata
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateDetectorVersionMetadataRequest::UpdateDetectorVersionMetadataRequest(const UpdateDetectorVersionMetadataRequest &other)
    : FraudDetectorRequest(new UpdateDetectorVersionMetadataRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateDetectorVersionMetadataRequest object.
 */
UpdateDetectorVersionMetadataRequest::UpdateDetectorVersionMetadataRequest()
    : FraudDetectorRequest(new UpdateDetectorVersionMetadataRequestPrivate(FraudDetectorRequest::UpdateDetectorVersionMetadataAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateDetectorVersionMetadataRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateDetectorVersionMetadataResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateDetectorVersionMetadataRequest::response(QNetworkReply * const reply) const
{
    return new UpdateDetectorVersionMetadataResponse(*this, reply);
}

/*!
 * \class QtAws::FraudDetector::UpdateDetectorVersionMetadataRequestPrivate
 * \brief The UpdateDetectorVersionMetadataRequestPrivate class provides private implementation for UpdateDetectorVersionMetadataRequest.
 * \internal
 *
 * \inmodule QtAwsFraudDetector
 */

/*!
 * Constructs a UpdateDetectorVersionMetadataRequestPrivate object for FraudDetector \a action,
 * with public implementation \a q.
 */
UpdateDetectorVersionMetadataRequestPrivate::UpdateDetectorVersionMetadataRequestPrivate(
    const FraudDetectorRequest::Action action, UpdateDetectorVersionMetadataRequest * const q)
    : FraudDetectorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateDetectorVersionMetadataRequest
 * class' copy constructor.
 */
UpdateDetectorVersionMetadataRequestPrivate::UpdateDetectorVersionMetadataRequestPrivate(
    const UpdateDetectorVersionMetadataRequestPrivate &other, UpdateDetectorVersionMetadataRequest * const q)
    : FraudDetectorRequestPrivate(other, q)
{

}

} // namespace FraudDetector
} // namespace QtAws
