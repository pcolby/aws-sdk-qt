// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeuserhierarchystructurerequest.h"
#include "describeuserhierarchystructurerequest_p.h"
#include "describeuserhierarchystructureresponse.h"
#include "connectrequest_p.h"

namespace QtAws {
namespace Connect {

/*!
 * \class QtAws::Connect::DescribeUserHierarchyStructureRequest
 * \brief The DescribeUserHierarchyStructureRequest class provides an interface for Connect DescribeUserHierarchyStructure requests.
 *
 * \inmodule QtAwsConnect
 *
 *  Amazon Connect is a cloud-based contact center solution that you use to set up and manage a customer contact center and
 *  provide reliable customer engagement at any
 * 
 *  scale>
 * 
 *  Amazon Connect provides metrics and real-time reporting that enable you to optimize contact routing. You can also
 *  resolve customer issues more efficiently by getting customers in touch with the appropriate
 * 
 *  agents>
 * 
 *  There are limits to the number of Amazon Connect resources that you can create. There are also limits to the number of
 *  requests that you can make per second. For more information, see <a
 *  href="https://docs.aws.amazon.com/connect/latest/adminguide/amazon-connect-service-limits.html">Amazon Connect Service
 *  Quotas</a> in the <i>Amazon Connect Administrator
 * 
 *  Guide</i>>
 * 
 *  You can connect programmatically to an Amazon Web Services service by using an endpoint. For a list of Amazon Connect
 *  endpoints, see <a href="https://docs.aws.amazon.com/general/latest/gr/connect_region.html">Amazon Connect
 * 
 *  Endpoints</a>> <note>
 * 
 *  Working with flows? Check out the <a
 *  href="https://docs.aws.amazon.com/connect/latest/adminguide/flow-language.html">Amazon Connect Flow
 *
 * \sa ConnectClient::describeUserHierarchyStructure
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeUserHierarchyStructureRequest::DescribeUserHierarchyStructureRequest(const DescribeUserHierarchyStructureRequest &other)
    : ConnectRequest(new DescribeUserHierarchyStructureRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeUserHierarchyStructureRequest object.
 */
DescribeUserHierarchyStructureRequest::DescribeUserHierarchyStructureRequest()
    : ConnectRequest(new DescribeUserHierarchyStructureRequestPrivate(ConnectRequest::DescribeUserHierarchyStructureAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeUserHierarchyStructureRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeUserHierarchyStructureResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeUserHierarchyStructureRequest::response(QNetworkReply * const reply) const
{
    return new DescribeUserHierarchyStructureResponse(*this, reply);
}

/*!
 * \class QtAws::Connect::DescribeUserHierarchyStructureRequestPrivate
 * \brief The DescribeUserHierarchyStructureRequestPrivate class provides private implementation for DescribeUserHierarchyStructureRequest.
 * \internal
 *
 * \inmodule QtAwsConnect
 */

/*!
 * Constructs a DescribeUserHierarchyStructureRequestPrivate object for Connect \a action,
 * with public implementation \a q.
 */
DescribeUserHierarchyStructureRequestPrivate::DescribeUserHierarchyStructureRequestPrivate(
    const ConnectRequest::Action action, DescribeUserHierarchyStructureRequest * const q)
    : ConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeUserHierarchyStructureRequest
 * class' copy constructor.
 */
DescribeUserHierarchyStructureRequestPrivate::DescribeUserHierarchyStructureRequestPrivate(
    const DescribeUserHierarchyStructureRequestPrivate &other, DescribeUserHierarchyStructureRequest * const q)
    : ConnectRequestPrivate(other, q)
{

}

} // namespace Connect
} // namespace QtAws
