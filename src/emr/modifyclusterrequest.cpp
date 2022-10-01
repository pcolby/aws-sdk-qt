// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "modifyclusterrequest.h"
#include "modifyclusterrequest_p.h"
#include "modifyclusterresponse.h"
#include "emrrequest_p.h"

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::ModifyClusterRequest
 * \brief The ModifyClusterRequest class provides an interface for Emr ModifyCluster requests.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::modifyCluster
 */

/*!
 * Constructs a copy of \a other.
 */
ModifyClusterRequest::ModifyClusterRequest(const ModifyClusterRequest &other)
    : EmrRequest(new ModifyClusterRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ModifyClusterRequest object.
 */
ModifyClusterRequest::ModifyClusterRequest()
    : EmrRequest(new ModifyClusterRequestPrivate(EmrRequest::ModifyClusterAction, this))
{

}

/*!
 * \reimp
 */
bool ModifyClusterRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ModifyClusterResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ModifyClusterRequest::response(QNetworkReply * const reply) const
{
    return new ModifyClusterResponse(*this, reply);
}

/*!
 * \class QtAws::Emr::ModifyClusterRequestPrivate
 * \brief The ModifyClusterRequestPrivate class provides private implementation for ModifyClusterRequest.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a ModifyClusterRequestPrivate object for Emr \a action,
 * with public implementation \a q.
 */
ModifyClusterRequestPrivate::ModifyClusterRequestPrivate(
    const EmrRequest::Action action, ModifyClusterRequest * const q)
    : EmrRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ModifyClusterRequest
 * class' copy constructor.
 */
ModifyClusterRequestPrivate::ModifyClusterRequestPrivate(
    const ModifyClusterRequestPrivate &other, ModifyClusterRequest * const q)
    : EmrRequestPrivate(other, q)
{

}

} // namespace Emr
} // namespace QtAws
