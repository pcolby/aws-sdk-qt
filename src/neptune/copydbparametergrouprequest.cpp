/*
    Copyright 2013-2018 Paul Colby

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

#include "copydbparametergrouprequest.h"
#include "copydbparametergrouprequest_p.h"
#include "copydbparametergroupresponse.h"
#include "neptunerequest_p.h"

namespace QtAws {
namespace Neptune {

/*!
 * \class QtAws::Neptune::CopyDBParameterGroupRequest
 * \brief The CopyDBParameterGroupRequest class provides an interface for Neptune CopyDBParameterGroup requests.
 *
 * \inmodule QtAwsNeptune
 *
 *  <fullname>Amazon Neptune</fullname>
 * 
 * 
 *  </p
 * 
 *  Amazon Neptune is a fast, reliable, fully-managed graph database service that makes it easy to build and run
 *  applications that work with highly connected datasets. The core of Amazon Neptune is a purpose-built, high-performance
 *  graph database engine optimized for storing billions of relationships and querying the graph with milliseconds latency.
 *  Amazon Neptune supports popular graph models Property Graph and W3C's RDF, and their respective query languages Apache
 *  TinkerPop Gremlin and SPARQL, allowing you to easily build queries that efficiently navigate highly connected datasets.
 *  Neptune powers graph use cases such as recommendation engines, fraud detection, knowledge graphs, drug discovery, and
 *  network security.
 * 
 *  </p
 * 
 *  This interface reference for Amazon Neptune contains documentation for a programming or command line interface you can
 *  use to manage Amazon Neptune. Note that Amazon Neptune is asynchronous, which means that some interfaces might require
 *  techniques such as polling or callback functions to determine when a command has been applied. In this reference, the
 *  parameter descriptions indicate whether a command is applied immediately, on the next instance reboot, or during the
 *  maintenance window. The reference structure is as follows, and we list following some related topics from the user
 * 
 *  guide>
 * 
 *  <b>Amazon Neptune API Reference</b>
 *
 * \sa NeptuneClient::copyDBParameterGroup
 */

/*!
 * Constructs a copy of \a other.
 */
CopyDBParameterGroupRequest::CopyDBParameterGroupRequest(const CopyDBParameterGroupRequest &other)
    : NeptuneRequest(new CopyDBParameterGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CopyDBParameterGroupRequest object.
 */
CopyDBParameterGroupRequest::CopyDBParameterGroupRequest()
    : NeptuneRequest(new CopyDBParameterGroupRequestPrivate(NeptuneRequest::CopyDBParameterGroupAction, this))
{

}

/*!
 * \reimp
 */
bool CopyDBParameterGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CopyDBParameterGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CopyDBParameterGroupRequest::response(QNetworkReply * const reply) const
{
    return new CopyDBParameterGroupResponse(*this, reply);
}

/*!
 * \class QtAws::Neptune::CopyDBParameterGroupRequestPrivate
 * \brief The CopyDBParameterGroupRequestPrivate class provides private implementation for CopyDBParameterGroupRequest.
 * \internal
 *
 * \inmodule QtAwsNeptune
 */

/*!
 * Constructs a CopyDBParameterGroupRequestPrivate object for Neptune \a action,
 * with public implementation \a q.
 */
CopyDBParameterGroupRequestPrivate::CopyDBParameterGroupRequestPrivate(
    const NeptuneRequest::Action action, CopyDBParameterGroupRequest * const q)
    : NeptuneRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CopyDBParameterGroupRequest
 * class' copy constructor.
 */
CopyDBParameterGroupRequestPrivate::CopyDBParameterGroupRequestPrivate(
    const CopyDBParameterGroupRequestPrivate &other, CopyDBParameterGroupRequest * const q)
    : NeptuneRequestPrivate(other, q)
{

}

} // namespace Neptune
} // namespace QtAws
