/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describecertificatesrequest.h"
#include "describecertificatesrequest_p.h"
#include "describecertificatesresponse.h"
#include "rdsrequest_p.h"

namespace AWS {
namespace RDS {

/**
 * @class  DescribeCertificatesRequest
 *
 * @brief  Implements RDS DescribeCertificates requests.
 *
 * @see    RDSClient::describeCertificates
 */

/**
 * @brief  Constructs a new DescribeCertificatesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeCertificatesRequest::DescribeCertificatesRequest(const DescribeCertificatesRequest &other)
    : RDSRequest(new DescribeCertificatesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeCertificatesRequest object.
 */
DescribeCertificatesRequest::DescribeCertificatesRequest()
    : RDSRequest(new DescribeCertificatesRequestPrivate(RDSRequest::DescribeCertificatesAction, this))
{

}

bool DescribeCertificatesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeCertificatesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeCertificatesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  RDSClient::send
 */
AwsAbstractResponse * DescribeCertificatesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeCertificatesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeCertificatesRequestPrivate
 *
 * @brief  Private implementation for DescribeCertificatesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeCertificatesRequestPrivate object.
 *
 * @param  action  RDS action being performed.
 * @param  q       Pointer to this object's public DescribeCertificatesRequest instance.
 */
DescribeCertificatesRequestPrivate::DescribeCertificatesRequestPrivate(
    const RDSRequest::Action action, DescribeCertificatesRequest * const q)
    : DescribeCertificatesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeCertificatesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeCertificatesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeCertificatesRequest instance.
 */
DescribeCertificatesRequestPrivate::DescribeCertificatesRequestPrivate(
    const DescribeCertificatesRequestPrivate &other, DescribeCertificatesRequest * const q)
    : DescribeCertificatesPrivate(other, q)
{

}

} // namespace RDS
} // namespace AWS
