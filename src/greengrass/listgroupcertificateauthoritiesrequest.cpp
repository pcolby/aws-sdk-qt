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

#include "listgroupcertificateauthoritiesrequest.h"
#include "listgroupcertificateauthoritiesrequest_p.h"
#include "listgroupcertificateauthoritiesresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::ListGroupCertificateAuthoritiesRequest
 *
 * \brief The ListGroupCertificateAuthoritiesRequest class provides an interface for Greengrass ListGroupCertificateAuthorities requests.
 *
 * \ingroup Greengrass
 *
 *  AWS Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS Greengrass ensures your devices can respond
 *  quickly to local events and operate with intermittent connectivity. AWS Greengrass minimizes the cost of transmitting
 *
 * \sa GreengrassClient::listGroupCertificateAuthorities
 */

/*!
 * @brief  Constructs a new ListGroupCertificateAuthoritiesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListGroupCertificateAuthoritiesRequest::ListGroupCertificateAuthoritiesRequest(const ListGroupCertificateAuthoritiesRequest &other)
    : GreengrassRequest(new ListGroupCertificateAuthoritiesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ListGroupCertificateAuthoritiesRequest object.
 */
ListGroupCertificateAuthoritiesRequest::ListGroupCertificateAuthoritiesRequest()
    : GreengrassRequest(new ListGroupCertificateAuthoritiesRequestPrivate(GreengrassRequest::ListGroupCertificateAuthoritiesAction, this))
{

}

/*!
 * \reimp
 */
bool ListGroupCertificateAuthoritiesRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ListGroupCertificateAuthoritiesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListGroupCertificateAuthoritiesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GreengrassClient::send
 */
QtAws::Core::AwsAbstractResponse * ListGroupCertificateAuthoritiesRequest::response(QNetworkReply * const reply) const
{
    return new ListGroupCertificateAuthoritiesResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ListGroupCertificateAuthoritiesRequestPrivate
 *
 * @brief  Private implementation for ListGroupCertificateAuthoritiesRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListGroupCertificateAuthoritiesRequestPrivate object.
 *
 * @param  action  Greengrass action being performed.
 * @param  q       Pointer to this object's public ListGroupCertificateAuthoritiesRequest instance.
 */
ListGroupCertificateAuthoritiesRequestPrivate::ListGroupCertificateAuthoritiesRequestPrivate(
    const GreengrassRequest::Action action, ListGroupCertificateAuthoritiesRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ListGroupCertificateAuthoritiesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListGroupCertificateAuthoritiesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListGroupCertificateAuthoritiesRequest instance.
 */
ListGroupCertificateAuthoritiesRequestPrivate::ListGroupCertificateAuthoritiesRequestPrivate(
    const ListGroupCertificateAuthoritiesRequestPrivate &other, ListGroupCertificateAuthoritiesRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
