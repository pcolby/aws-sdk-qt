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

#include "exportprojectrequest.h"
#include "exportprojectrequest_p.h"
#include "exportprojectresponse.h"
#include "mobilerequest_p.h"

namespace QtAws {
namespace Mobile {

/*!
 * \class QtAws::Mobile::ExportProjectRequest
 *
 * \brief The ExportProjectRequest class encapsulates Mobile ExportProject requests.
 *
 * \ingroup Mobile
 *
 *  AWS Mobile Service provides mobile app and website developers with capabilities required to configure AWS resources and
 *  bootstrap their developer desktop projects with the necessary SDKs, constants, tools and samples to make use of those
 *  resources.
 *
 * \sa MobileClient::exportProject
 */

/*!
 * @brief  Constructs a new ExportProjectRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ExportProjectRequest::ExportProjectRequest(const ExportProjectRequest &other)
    : MobileRequest(new ExportProjectRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ExportProjectRequest object.
 */
ExportProjectRequest::ExportProjectRequest()
    : MobileRequest(new ExportProjectRequestPrivate(MobileRequest::ExportProjectAction, this))
{

}

/*!
 * \reimp
 */
bool ExportProjectRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ExportProjectResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ExportProjectResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  MobileClient::send
 */
QtAws::Core::AwsAbstractResponse * ExportProjectRequest::response(QNetworkReply * const reply) const
{
    return new ExportProjectResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ExportProjectRequestPrivate
 *
 * @brief  Private implementation for ExportProjectRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ExportProjectRequestPrivate object.
 *
 * @param  action  Mobile action being performed.
 * @param  q       Pointer to this object's public ExportProjectRequest instance.
 */
ExportProjectRequestPrivate::ExportProjectRequestPrivate(
    const MobileRequest::Action action, ExportProjectRequest * const q)
    : MobileRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ExportProjectRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ExportProjectRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ExportProjectRequest instance.
 */
ExportProjectRequestPrivate::ExportProjectRequestPrivate(
    const ExportProjectRequestPrivate &other, ExportProjectRequest * const q)
    : MobileRequestPrivate(other, q)
{

}

} // namespace Mobile
} // namespace QtAws
