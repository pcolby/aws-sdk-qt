// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "setterminationprotectionrequest.h"
#include "setterminationprotectionrequest_p.h"
#include "setterminationprotectionresponse.h"
#include "emrrequest_p.h"

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::SetTerminationProtectionRequest
 * \brief The SetTerminationProtectionRequest class provides an interface for Emr SetTerminationProtection requests.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::setTerminationProtection
 */

/*!
 * Constructs a copy of \a other.
 */
SetTerminationProtectionRequest::SetTerminationProtectionRequest(const SetTerminationProtectionRequest &other)
    : EmrRequest(new SetTerminationProtectionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SetTerminationProtectionRequest object.
 */
SetTerminationProtectionRequest::SetTerminationProtectionRequest()
    : EmrRequest(new SetTerminationProtectionRequestPrivate(EmrRequest::SetTerminationProtectionAction, this))
{

}

/*!
 * \reimp
 */
bool SetTerminationProtectionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SetTerminationProtectionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SetTerminationProtectionRequest::response(QNetworkReply * const reply) const
{
    return new SetTerminationProtectionResponse(*this, reply);
}

/*!
 * \class QtAws::Emr::SetTerminationProtectionRequestPrivate
 * \brief The SetTerminationProtectionRequestPrivate class provides private implementation for SetTerminationProtectionRequest.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a SetTerminationProtectionRequestPrivate object for Emr \a action,
 * with public implementation \a q.
 */
SetTerminationProtectionRequestPrivate::SetTerminationProtectionRequestPrivate(
    const EmrRequest::Action action, SetTerminationProtectionRequest * const q)
    : EmrRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SetTerminationProtectionRequest
 * class' copy constructor.
 */
SetTerminationProtectionRequestPrivate::SetTerminationProtectionRequestPrivate(
    const SetTerminationProtectionRequestPrivate &other, SetTerminationProtectionRequest * const q)
    : EmrRequestPrivate(other, q)
{

}

} // namespace Emr
} // namespace QtAws
