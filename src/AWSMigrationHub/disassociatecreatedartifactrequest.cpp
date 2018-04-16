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

#include "disassociatecreatedartifactrequest.h"
#include "disassociatecreatedartifactrequest_p.h"
#include "disassociatecreatedartifactresponse.h"
#include "migrationhubrequest_p.h"

namespace QtAws {
namespace MigrationHub {

/*!
 * \class QtAws::MigrationHub::DisassociateCreatedArtifactRequest
 *
 * \brief The DisassociateCreatedArtifactRequest class provides an interface for MigrationHub DisassociateCreatedArtifact requests.
 *
 * \ingroup MigrationHub
 *
 *  The AWS Migration Hub API methods help to obtain server and application migration status and integrate your
 *  resource-specific migration tool by providing a programmatic interface to Migration Hub.
 *
 * \sa MigrationHubClient::disassociateCreatedArtifact
 */

/*!
 * @brief  Constructs a new DisassociateCreatedArtifactRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DisassociateCreatedArtifactRequest::DisassociateCreatedArtifactRequest(const DisassociateCreatedArtifactRequest &other)
    : MigrationHubRequest(new DisassociateCreatedArtifactRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DisassociateCreatedArtifactRequest object.
 */
DisassociateCreatedArtifactRequest::DisassociateCreatedArtifactRequest()
    : MigrationHubRequest(new DisassociateCreatedArtifactRequestPrivate(MigrationHubRequest::DisassociateCreatedArtifactAction, this))
{

}

/*!
 * \reimp
 */
bool DisassociateCreatedArtifactRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DisassociateCreatedArtifactResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DisassociateCreatedArtifactResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  MigrationHubClient::send
 */
QtAws::Core::AwsAbstractResponse * DisassociateCreatedArtifactRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateCreatedArtifactResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DisassociateCreatedArtifactRequestPrivate
 *
 * @brief  Private implementation for DisassociateCreatedArtifactRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DisassociateCreatedArtifactRequestPrivate object.
 *
 * @param  action  MigrationHub action being performed.
 * @param  q       Pointer to this object's public DisassociateCreatedArtifactRequest instance.
 */
DisassociateCreatedArtifactRequestPrivate::DisassociateCreatedArtifactRequestPrivate(
    const MigrationHubRequest::Action action, DisassociateCreatedArtifactRequest * const q)
    : MigrationHubRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DisassociateCreatedArtifactRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DisassociateCreatedArtifactRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DisassociateCreatedArtifactRequest instance.
 */
DisassociateCreatedArtifactRequestPrivate::DisassociateCreatedArtifactRequestPrivate(
    const DisassociateCreatedArtifactRequestPrivate &other, DisassociateCreatedArtifactRequest * const q)
    : MigrationHubRequestPrivate(other, q)
{

}

} // namespace MigrationHub
} // namespace QtAws
