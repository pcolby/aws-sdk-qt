// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "modifyinstancegroupsrequest.h"
#include "modifyinstancegroupsrequest_p.h"
#include "modifyinstancegroupsresponse.h"
#include "emrrequest_p.h"

namespace QtAws {
namespace Emr {

/*!
 * \class QtAws::Emr::ModifyInstanceGroupsRequest
 * \brief The ModifyInstanceGroupsRequest class provides an interface for Emr ModifyInstanceGroups requests.
 *
 * \inmodule QtAwsEmr
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several Amazon Web Services services to do tasks such as web indexing, data mining, log file
 *  analysis, machine learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::modifyInstanceGroups
 */

/*!
 * Constructs a copy of \a other.
 */
ModifyInstanceGroupsRequest::ModifyInstanceGroupsRequest(const ModifyInstanceGroupsRequest &other)
    : EmrRequest(new ModifyInstanceGroupsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ModifyInstanceGroupsRequest object.
 */
ModifyInstanceGroupsRequest::ModifyInstanceGroupsRequest()
    : EmrRequest(new ModifyInstanceGroupsRequestPrivate(EmrRequest::ModifyInstanceGroupsAction, this))
{

}

/*!
 * \reimp
 */
bool ModifyInstanceGroupsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ModifyInstanceGroupsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ModifyInstanceGroupsRequest::response(QNetworkReply * const reply) const
{
    return new ModifyInstanceGroupsResponse(*this, reply);
}

/*!
 * \class QtAws::Emr::ModifyInstanceGroupsRequestPrivate
 * \brief The ModifyInstanceGroupsRequestPrivate class provides private implementation for ModifyInstanceGroupsRequest.
 * \internal
 *
 * \inmodule QtAwsEmr
 */

/*!
 * Constructs a ModifyInstanceGroupsRequestPrivate object for Emr \a action,
 * with public implementation \a q.
 */
ModifyInstanceGroupsRequestPrivate::ModifyInstanceGroupsRequestPrivate(
    const EmrRequest::Action action, ModifyInstanceGroupsRequest * const q)
    : EmrRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ModifyInstanceGroupsRequest
 * class' copy constructor.
 */
ModifyInstanceGroupsRequestPrivate::ModifyInstanceGroupsRequestPrivate(
    const ModifyInstanceGroupsRequestPrivate &other, ModifyInstanceGroupsRequest * const q)
    : EmrRequestPrivate(other, q)
{

}

} // namespace Emr
} // namespace QtAws
