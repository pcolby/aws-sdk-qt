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

#include "startimportrequest.h"
#include "startimportrequest_p.h"
#include "startimportresponse.h"
#include "lexmodelbuildingservicerequest_p.h"

namespace QtAws {
namespace LexModelBuildingService {

/*!
 * \class QtAws::LexModelBuildingService::StartImportRequest
 *
 * \brief The StartImportRequest class provides an interface for LexModelBuildingService StartImport requests.
 *
 * \ingroup LexModelBuildingService
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingServiceClient::startImport
 */

/*!
 * @brief  Constructs a new StartImportRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
StartImportRequest::StartImportRequest(const StartImportRequest &other)
    : LexModelBuildingServiceRequest(new StartImportRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new StartImportRequest object.
 */
StartImportRequest::StartImportRequest()
    : LexModelBuildingServiceRequest(new StartImportRequestPrivate(LexModelBuildingServiceRequest::StartImportAction, this))
{

}

/*!
 * \reimp
 */
bool StartImportRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an StartImportResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An StartImportResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  LexModelBuildingServiceClient::send
 */
QtAws::Core::AwsAbstractResponse * StartImportRequest::response(QNetworkReply * const reply) const
{
    return new StartImportResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  StartImportRequestPrivate
 *
 * @brief  Private implementation for StartImportRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new StartImportRequestPrivate object.
 *
 * @param  action  LexModelBuildingService action being performed.
 * @param  q       Pointer to this object's public StartImportRequest instance.
 */
StartImportRequestPrivate::StartImportRequestPrivate(
    const LexModelBuildingServiceRequest::Action action, StartImportRequest * const q)
    : LexModelBuildingServiceRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new StartImportRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the StartImportRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public StartImportRequest instance.
 */
StartImportRequestPrivate::StartImportRequestPrivate(
    const StartImportRequestPrivate &other, StartImportRequest * const q)
    : LexModelBuildingServiceRequestPrivate(other, q)
{

}

} // namespace LexModelBuildingService
} // namespace QtAws
