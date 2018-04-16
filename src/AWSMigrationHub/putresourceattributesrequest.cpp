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

#include "putresourceattributesrequest.h"
#include "putresourceattributesrequest_p.h"
#include "putresourceattributesresponse.h"
#include "migrationhubrequest_p.h"

namespace QtAws {
namespace MigrationHub {

/*!
 * \class QtAws::MigrationHub::PutResourceAttributesRequest
 *
 * \brief The PutResourceAttributesRequest class provides an interface for MigrationHub PutResourceAttributes requests.
 *
 * \ingroup MigrationHub
 *
 *  The AWS Migration Hub API methods help to obtain server and application migration status and integrate your
 *  resource-specific migration tool by providing a programmatic interface to Migration Hub.
 *
 * \sa MigrationHubClient::putResourceAttributes
 */

/*!
 * @brief  Constructs a new PutResourceAttributesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutResourceAttributesRequest::PutResourceAttributesRequest(const PutResourceAttributesRequest &other)
    : MigrationHubRequest(new PutResourceAttributesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new PutResourceAttributesRequest object.
 */
PutResourceAttributesRequest::PutResourceAttributesRequest()
    : MigrationHubRequest(new PutResourceAttributesRequestPrivate(MigrationHubRequest::PutResourceAttributesAction, this))
{

}

/*!
 * \reimp
 */
bool PutResourceAttributesRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an PutResourceAttributesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutResourceAttributesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  MigrationHubClient::send
 */
QtAws::Core::AwsAbstractResponse * PutResourceAttributesRequest::response(QNetworkReply * const reply) const
{
    return new PutResourceAttributesResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  PutResourceAttributesRequestPrivate
 *
 * @brief  Private implementation for PutResourceAttributesRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new PutResourceAttributesRequestPrivate object.
 *
 * @param  action  MigrationHub action being performed.
 * @param  q       Pointer to this object's public PutResourceAttributesRequest instance.
 */
PutResourceAttributesRequestPrivate::PutResourceAttributesRequestPrivate(
    const MigrationHubRequest::Action action, PutResourceAttributesRequest * const q)
    : MigrationHubRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new PutResourceAttributesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutResourceAttributesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutResourceAttributesRequest instance.
 */
PutResourceAttributesRequestPrivate::PutResourceAttributesRequestPrivate(
    const PutResourceAttributesRequestPrivate &other, PutResourceAttributesRequest * const q)
    : MigrationHubRequestPrivate(other, q)
{

}

} // namespace MigrationHub
} // namespace QtAws
