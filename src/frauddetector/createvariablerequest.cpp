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

#include "createvariablerequest.h"
#include "createvariablerequest_p.h"
#include "createvariableresponse.h"
#include "frauddetectorrequest_p.h"

namespace QtAws {
namespace FraudDetector {

/*!
 * \class QtAws::FraudDetector::CreateVariableRequest
 * \brief The CreateVariableRequest class provides an interface for FraudDetector CreateVariable requests.
 *
 * \inmodule QtAwsFraudDetector
 *
 *  This is the Amazon Fraud Detector API Reference. This guide is for developers who need detailed information about Amazon
 *  Fraud Detector API actions, data types, and errors. For more information about Amazon Fraud Detector features, see the
 *  <a href="https://docs.aws.amazon.com/frauddetector/latest/ug/">Amazon Fraud Detector User
 *
 * \sa FraudDetectorClient::createVariable
 */

/*!
 * Constructs a copy of \a other.
 */
CreateVariableRequest::CreateVariableRequest(const CreateVariableRequest &other)
    : FraudDetectorRequest(new CreateVariableRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateVariableRequest object.
 */
CreateVariableRequest::CreateVariableRequest()
    : FraudDetectorRequest(new CreateVariableRequestPrivate(FraudDetectorRequest::CreateVariableAction, this))
{

}

/*!
 * \reimp
 */
bool CreateVariableRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateVariableResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateVariableRequest::response(QNetworkReply * const reply) const
{
    return new CreateVariableResponse(*this, reply);
}

/*!
 * \class QtAws::FraudDetector::CreateVariableRequestPrivate
 * \brief The CreateVariableRequestPrivate class provides private implementation for CreateVariableRequest.
 * \internal
 *
 * \inmodule QtAwsFraudDetector
 */

/*!
 * Constructs a CreateVariableRequestPrivate object for FraudDetector \a action,
 * with public implementation \a q.
 */
CreateVariableRequestPrivate::CreateVariableRequestPrivate(
    const FraudDetectorRequest::Action action, CreateVariableRequest * const q)
    : FraudDetectorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateVariableRequest
 * class' copy constructor.
 */
CreateVariableRequestPrivate::CreateVariableRequestPrivate(
    const CreateVariableRequestPrivate &other, CreateVariableRequest * const q)
    : FraudDetectorRequestPrivate(other, q)
{

}

} // namespace FraudDetector
} // namespace QtAws
