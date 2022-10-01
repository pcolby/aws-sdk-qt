// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletestudiorequest.h"
#include "deletestudiorequest_p.h"
#include "deletestudioresponse.h"
#include "emrrequest_p.h"

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::DeleteStudioRequest
 * \brief The DeleteStudioRequest class provides an interface for Emr DeleteStudio requests.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::deleteStudio
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteStudioRequest::DeleteStudioRequest(const DeleteStudioRequest &other)
    : EmrRequest(new DeleteStudioRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteStudioRequest object.
 */
DeleteStudioRequest::DeleteStudioRequest()
    : EmrRequest(new DeleteStudioRequestPrivate(EmrRequest::DeleteStudioAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteStudioRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteStudioResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteStudioRequest::response(QNetworkReply * const reply) const
{
    return new DeleteStudioResponse(*this, reply);
}

/*!
 * \class QtAws::Emr::DeleteStudioRequestPrivate
 * \brief The DeleteStudioRequestPrivate class provides private implementation for DeleteStudioRequest.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a DeleteStudioRequestPrivate object for Emr \a action,
 * with public implementation \a q.
 */
DeleteStudioRequestPrivate::DeleteStudioRequestPrivate(
    const EmrRequest::Action action, DeleteStudioRequest * const q)
    : EmrRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteStudioRequest
 * class' copy constructor.
 */
DeleteStudioRequestPrivate::DeleteStudioRequestPrivate(
    const DeleteStudioRequestPrivate &other, DeleteStudioRequest * const q)
    : EmrRequestPrivate(other, q)
{

}

} // namespace Emr
} // namespace QtAws
