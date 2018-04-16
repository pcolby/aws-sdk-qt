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

#include "deleteapplicationrequest.h"
#include "deleteapplicationrequest_p.h"
#include "deleteapplicationresponse.h"
#include "kinesisanalyticsrequest_p.h"

namespace QtAws {
namespace KinesisAnalytics {

/*!
 * \class QtAws::KinesisAnalytics::DeleteApplicationRequest
 *
 * \brief The DeleteApplicationRequest class provides an interface for KinesisAnalytics DeleteApplication requests.
 *
 * \ingroup KinesisAnalytics
 *
 *
 * \sa KinesisAnalyticsClient::deleteApplication
 */

/*!
 * @brief  Constructs a new DeleteApplicationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteApplicationRequest::DeleteApplicationRequest(const DeleteApplicationRequest &other)
    : KinesisAnalyticsRequest(new DeleteApplicationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DeleteApplicationRequest object.
 */
DeleteApplicationRequest::DeleteApplicationRequest()
    : KinesisAnalyticsRequest(new DeleteApplicationRequestPrivate(KinesisAnalyticsRequest::DeleteApplicationAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteApplicationRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DeleteApplicationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteApplicationResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  KinesisAnalyticsClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteApplicationRequest::response(QNetworkReply * const reply) const
{
    return new DeleteApplicationResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DeleteApplicationRequestPrivate
 *
 * @brief  Private implementation for DeleteApplicationRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteApplicationRequestPrivate object.
 *
 * @param  action  KinesisAnalytics action being performed.
 * @param  q       Pointer to this object's public DeleteApplicationRequest instance.
 */
DeleteApplicationRequestPrivate::DeleteApplicationRequestPrivate(
    const KinesisAnalyticsRequest::Action action, DeleteApplicationRequest * const q)
    : KinesisAnalyticsRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteApplicationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteApplicationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteApplicationRequest instance.
 */
DeleteApplicationRequestPrivate::DeleteApplicationRequestPrivate(
    const DeleteApplicationRequestPrivate &other, DeleteApplicationRequest * const q)
    : KinesisAnalyticsRequestPrivate(other, q)
{

}

} // namespace KinesisAnalytics
} // namespace QtAws
