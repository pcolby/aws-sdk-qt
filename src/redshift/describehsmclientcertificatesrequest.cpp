/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describehsmclientcertificatesrequest.h"
#include "describehsmclientcertificatesrequest_p.h"
#include "describehsmclientcertificatesresponse.h"
#include "redshiftrequest_p.h"

namespace QtAws {
namespace Redshift {

/**
 * @class  DescribeHsmClientCertificatesRequest
 *
 * @brief  Implements Redshift DescribeHsmClientCertificates requests.
 *
 * @see    RedshiftClient::describeHsmClientCertificates
 */

/**
 * @brief  Constructs a new DescribeHsmClientCertificatesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeHsmClientCertificatesRequest::DescribeHsmClientCertificatesRequest(const DescribeHsmClientCertificatesRequest &other)
    : RedshiftRequest(new DescribeHsmClientCertificatesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeHsmClientCertificatesRequest object.
 */
DescribeHsmClientCertificatesRequest::DescribeHsmClientCertificatesRequest()
    : RedshiftRequest(new DescribeHsmClientCertificatesRequestPrivate(RedshiftRequest::DescribeHsmClientCertificatesAction, this))
{

}

bool DescribeHsmClientCertificatesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeHsmClientCertificatesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeHsmClientCertificatesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RedshiftClient::send
 */
AwsAbstractResponse * DescribeHsmClientCertificatesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeHsmClientCertificatesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeHsmClientCertificatesRequestPrivate
 *
 * @brief  Private implementation for DescribeHsmClientCertificatesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeHsmClientCertificatesRequestPrivate object.
 *
 * @param  action  Redshift action being performed.
 * @param  q       Pointer to this object's public DescribeHsmClientCertificatesRequest instance.
 */
DescribeHsmClientCertificatesRequestPrivate::DescribeHsmClientCertificatesRequestPrivate(
    const RedshiftRequest::Action action, DescribeHsmClientCertificatesRequest * const q)
    : DescribeHsmClientCertificatesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeHsmClientCertificatesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeHsmClientCertificatesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeHsmClientCertificatesRequest instance.
 */
DescribeHsmClientCertificatesRequestPrivate::DescribeHsmClientCertificatesRequestPrivate(
    const DescribeHsmClientCertificatesRequestPrivate &other, DescribeHsmClientCertificatesRequest * const q)
    : DescribeHsmClientCertificatesPrivate(other, q)
{

}

} // namespace Redshift
} // namespace QtAws
