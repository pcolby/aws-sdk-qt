// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "cancelstepsrequest.h"
#include "cancelstepsrequest_p.h"
#include "cancelstepsresponse.h"
#include "emrrequest_p.h"

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::CancelStepsRequest
 * \brief The CancelStepsRequest class provides an interface for Emr CancelSteps requests.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::cancelSteps
 */

/*!
 * Constructs a copy of \a other.
 */
CancelStepsRequest::CancelStepsRequest(const CancelStepsRequest &other)
    : EmrRequest(new CancelStepsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CancelStepsRequest object.
 */
CancelStepsRequest::CancelStepsRequest()
    : EmrRequest(new CancelStepsRequestPrivate(EmrRequest::CancelStepsAction, this))
{

}

/*!
 * \reimp
 */
bool CancelStepsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CancelStepsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CancelStepsRequest::response(QNetworkReply * const reply) const
{
    return new CancelStepsResponse(*this, reply);
}

/*!
 * \class QtAws::Emr::CancelStepsRequestPrivate
 * \brief The CancelStepsRequestPrivate class provides private implementation for CancelStepsRequest.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a CancelStepsRequestPrivate object for Emr \a action,
 * with public implementation \a q.
 */
CancelStepsRequestPrivate::CancelStepsRequestPrivate(
    const EmrRequest::Action action, CancelStepsRequest * const q)
    : EmrRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CancelStepsRequest
 * class' copy constructor.
 */
CancelStepsRequestPrivate::CancelStepsRequestPrivate(
    const CancelStepsRequestPrivate &other, CancelStepsRequest * const q)
    : EmrRequestPrivate(other, q)
{

}

} // namespace Emr
} // namespace QtAws
