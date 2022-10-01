// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describecontactflowrequest.h"
#include "describecontactflowrequest_p.h"
#include "describecontactflowresponse.h"
#include "connectrequest_p.h"

namespace QtAws {
namespace Connect {

/*!
 * \class QtAws::Connect::DescribeContactFlowRequest
 * \brief The DescribeContactFlowRequest class provides an interface for Connect DescribeContactFlow requests.
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
 * \sa ConnectClient::describeContactFlow
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeContactFlowRequest::DescribeContactFlowRequest(const DescribeContactFlowRequest &other)
    : ConnectRequest(new DescribeContactFlowRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeContactFlowRequest object.
 */
DescribeContactFlowRequest::DescribeContactFlowRequest()
    : ConnectRequest(new DescribeContactFlowRequestPrivate(ConnectRequest::DescribeContactFlowAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeContactFlowRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeContactFlowResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeContactFlowRequest::response(QNetworkReply * const reply) const
{
    return new DescribeContactFlowResponse(*this, reply);
}

/*!
 * \class QtAws::Connect::DescribeContactFlowRequestPrivate
 * \brief The DescribeContactFlowRequestPrivate class provides private implementation for DescribeContactFlowRequest.
 * \internal
 *
 * \inmodule QtAwsConnect
 */

/*!
 * Constructs a DescribeContactFlowRequestPrivate object for Connect \a action,
 * with public implementation \a q.
 */
DescribeContactFlowRequestPrivate::DescribeContactFlowRequestPrivate(
    const ConnectRequest::Action action, DescribeContactFlowRequest * const q)
    : ConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeContactFlowRequest
 * class' copy constructor.
 */
DescribeContactFlowRequestPrivate::DescribeContactFlowRequestPrivate(
    const DescribeContactFlowRequestPrivate &other, DescribeContactFlowRequest * const q)
    : ConnectRequestPrivate(other, q)
{

}

} // namespace Connect
} // namespace QtAws
