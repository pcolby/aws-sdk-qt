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

#include "deleteapplicationoutputrequest.h"
#include "deleteapplicationoutputrequest_p.h"
#include "deleteapplicationoutputresponse.h"
#include "kinesisanalyticsrequest_p.h"

namespace QtAws {
namespace KinesisAnalytics {

/*!
 * \class QtAws::KinesisAnalytics::DeleteApplicationOutputRequest
 *
 * \brief The DeleteApplicationOutputRequest class encapsulates KinesisAnalytics DeleteApplicationOutput requests.
 *
 * \ingroup KinesisAnalytics
 *
 *
 * \sa KinesisAnalyticsClient::deleteApplicationOutput
 */

/*!
 * @brief  Constructs a new DeleteApplicationOutputRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteApplicationOutputRequest::DeleteApplicationOutputRequest(const DeleteApplicationOutputRequest &other)
    : KinesisAnalyticsRequest(new DeleteApplicationOutputRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DeleteApplicationOutputRequest object.
 */
DeleteApplicationOutputRequest::DeleteApplicationOutputRequest()
    : KinesisAnalyticsRequest(new DeleteApplicationOutputRequestPrivate(KinesisAnalyticsRequest::DeleteApplicationOutputAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteApplicationOutputRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DeleteApplicationOutputResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteApplicationOutputResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  KinesisAnalyticsClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteApplicationOutputRequest::response(QNetworkReply * const reply) const
{
    return new DeleteApplicationOutputResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DeleteApplicationOutputRequestPrivate
 *
 * @brief  Private implementation for DeleteApplicationOutputRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteApplicationOutputRequestPrivate object.
 *
 * @param  action  KinesisAnalytics action being performed.
 * @param  q       Pointer to this object's public DeleteApplicationOutputRequest instance.
 */
DeleteApplicationOutputRequestPrivate::DeleteApplicationOutputRequestPrivate(
    const KinesisAnalyticsRequest::Action action, DeleteApplicationOutputRequest * const q)
    : KinesisAnalyticsRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteApplicationOutputRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteApplicationOutputRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteApplicationOutputRequest instance.
 */
DeleteApplicationOutputRequestPrivate::DeleteApplicationOutputRequestPrivate(
    const DeleteApplicationOutputRequestPrivate &other, DeleteApplicationOutputRequest * const q)
    : KinesisAnalyticsRequestPrivate(other, q)
{

}

} // namespace KinesisAnalytics
} // namespace QtAws
