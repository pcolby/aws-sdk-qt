// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeinstancestorageconfigrequest.h"
#include "describeinstancestorageconfigrequest_p.h"
#include "describeinstancestorageconfigresponse.h"
#include "connectrequest_p.h"

namespace QtAws {
namespace Connect {

/*!
 * \class QtAws::Connect::DescribeInstanceStorageConfigRequest
 * \brief The DescribeInstanceStorageConfigRequest class provides an interface for Connect DescribeInstanceStorageConfig requests.
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
 * \sa ConnectClient::describeInstanceStorageConfig
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeInstanceStorageConfigRequest::DescribeInstanceStorageConfigRequest(const DescribeInstanceStorageConfigRequest &other)
    : ConnectRequest(new DescribeInstanceStorageConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeInstanceStorageConfigRequest object.
 */
DescribeInstanceStorageConfigRequest::DescribeInstanceStorageConfigRequest()
    : ConnectRequest(new DescribeInstanceStorageConfigRequestPrivate(ConnectRequest::DescribeInstanceStorageConfigAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeInstanceStorageConfigRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeInstanceStorageConfigResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeInstanceStorageConfigRequest::response(QNetworkReply * const reply) const
{
    return new DescribeInstanceStorageConfigResponse(*this, reply);
}

/*!
 * \class QtAws::Connect::DescribeInstanceStorageConfigRequestPrivate
 * \brief The DescribeInstanceStorageConfigRequestPrivate class provides private implementation for DescribeInstanceStorageConfigRequest.
 * \internal
 *
 * \inmodule QtAwsConnect
 */

/*!
 * Constructs a DescribeInstanceStorageConfigRequestPrivate object for Connect \a action,
 * with public implementation \a q.
 */
DescribeInstanceStorageConfigRequestPrivate::DescribeInstanceStorageConfigRequestPrivate(
    const ConnectRequest::Action action, DescribeInstanceStorageConfigRequest * const q)
    : ConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeInstanceStorageConfigRequest
 * class' copy constructor.
 */
DescribeInstanceStorageConfigRequestPrivate::DescribeInstanceStorageConfigRequestPrivate(
    const DescribeInstanceStorageConfigRequestPrivate &other, DescribeInstanceStorageConfigRequest * const q)
    : ConnectRequestPrivate(other, q)
{

}

} // namespace Connect
} // namespace QtAws
