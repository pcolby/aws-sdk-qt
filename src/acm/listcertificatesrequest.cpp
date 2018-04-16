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

#include "listcertificatesrequest.h"
#include "listcertificatesrequest_p.h"
#include "listcertificatesresponse.h"
#include "acmrequest_p.h"

namespace QtAws {
namespace ACM {

/*!
 * \class QtAws::ACM::ListCertificatesRequest
 *
 * \brief The ListCertificatesRequest class provides an interface for ACM ListCertificates requests.
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
 * \sa ACMClient::listCertificates
 */

/*!
 * @brief  Constructs a new ListCertificatesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListCertificatesRequest::ListCertificatesRequest(const ListCertificatesRequest &other)
    : ACMRequest(new ListCertificatesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ListCertificatesRequest object.
 */
ListCertificatesRequest::ListCertificatesRequest()
    : ACMRequest(new ListCertificatesRequestPrivate(ACMRequest::ListCertificatesAction, this))
{

}

/*!
 * \reimp
 */
bool ListCertificatesRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ListCertificatesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListCertificatesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ACMClient::send
 */
QtAws::Core::AwsAbstractResponse * ListCertificatesRequest::response(QNetworkReply * const reply) const
{
    return new ListCertificatesResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ListCertificatesRequestPrivate
 *
 * @brief  Private implementation for ListCertificatesRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListCertificatesRequestPrivate object.
 *
 * @param  action  ACM action being performed.
 * @param  q       Pointer to this object's public ListCertificatesRequest instance.
 */
ListCertificatesRequestPrivate::ListCertificatesRequestPrivate(
    const ACMRequest::Action action, ListCertificatesRequest * const q)
    : ACMRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ListCertificatesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListCertificatesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListCertificatesRequest instance.
 */
ListCertificatesRequestPrivate::ListCertificatesRequestPrivate(
    const ListCertificatesRequestPrivate &other, ListCertificatesRequest * const q)
    : ACMRequestPrivate(other, q)
{

}

} // namespace ACM
} // namespace QtAws
