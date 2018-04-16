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

#include "describecertificaterequest.h"
#include "describecertificaterequest_p.h"
#include "describecertificateresponse.h"
#include "acmrequest_p.h"

namespace QtAws {
namespace ACM {

/*!
 * \class QtAws::ACM::DescribeCertificateRequest
 *
 * \brief The DescribeCertificateRequest class provides an interface for ACM DescribeCertificate requests.
 *
 * \ingroup ACM
 *
 *  <fullname>AWS Certificate Manager</fullname>
 * 
 *  Welcome to the AWS Certificate Manager (ACM) API
 * 
 *  documentation>
 * 
 *  You can use ACM to manage SSL/TLS certificates for your AWS-based websites and applications. For general information
 *  about using ACM, see the <a href="http://docs.aws.amazon.com/http:/docs.aws.amazon.comacm/latest/userguide/"> <i>AWS
 *  Certificate Manager User Guide</i>
 *
 * \sa ACMClient::describeCertificate
 */

/*!
 * @brief  Constructs a new DescribeCertificateRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeCertificateRequest::DescribeCertificateRequest(const DescribeCertificateRequest &other)
    : ACMRequest(new DescribeCertificateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DescribeCertificateRequest object.
 */
DescribeCertificateRequest::DescribeCertificateRequest()
    : ACMRequest(new DescribeCertificateRequestPrivate(ACMRequest::DescribeCertificateAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeCertificateRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DescribeCertificateResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeCertificateResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ACMClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeCertificateRequest::response(QNetworkReply * const reply) const
{
    return new DescribeCertificateResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DescribeCertificateRequestPrivate
 *
 * @brief  Private implementation for DescribeCertificateRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeCertificateRequestPrivate object.
 *
 * @param  action  ACM action being performed.
 * @param  q       Pointer to this object's public DescribeCertificateRequest instance.
 */
DescribeCertificateRequestPrivate::DescribeCertificateRequestPrivate(
    const ACMRequest::Action action, DescribeCertificateRequest * const q)
    : ACMRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeCertificateRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeCertificateRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeCertificateRequest instance.
 */
DescribeCertificateRequestPrivate::DescribeCertificateRequestPrivate(
    const DescribeCertificateRequestPrivate &other, DescribeCertificateRequest * const q)
    : ACMRequestPrivate(other, q)
{

}

} // namespace ACM
} // namespace QtAws
