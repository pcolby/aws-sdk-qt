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

#include "discoverinputschemarequest.h"
#include "discoverinputschemarequest_p.h"
#include "discoverinputschemaresponse.h"
#include "kinesisanalyticsrequest_p.h"

namespace QtAws {
namespace KinesisAnalytics {

/*!
 * \class QtAws::KinesisAnalytics::DiscoverInputSchemaRequest
 *
 * \brief The DiscoverInputSchemaRequest class encapsulates KinesisAnalytics DiscoverInputSchema requests.
 *
 * \ingroup KinesisAnalytics
 *
 *
 * \sa KinesisAnalyticsClient::discoverInputSchema
 */

/*!
 * @brief  Constructs a new DiscoverInputSchemaRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DiscoverInputSchemaRequest::DiscoverInputSchemaRequest(const DiscoverInputSchemaRequest &other)
    : KinesisAnalyticsRequest(new DiscoverInputSchemaRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DiscoverInputSchemaRequest object.
 */
DiscoverInputSchemaRequest::DiscoverInputSchemaRequest()
    : KinesisAnalyticsRequest(new DiscoverInputSchemaRequestPrivate(KinesisAnalyticsRequest::DiscoverInputSchemaAction, this))
{

}

/*!
 * \reimp
 */
bool DiscoverInputSchemaRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DiscoverInputSchemaResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DiscoverInputSchemaResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  KinesisAnalyticsClient::send
 */
QtAws::Core::AwsAbstractResponse * DiscoverInputSchemaRequest::response(QNetworkReply * const reply) const
{
    return new DiscoverInputSchemaResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DiscoverInputSchemaRequestPrivate
 *
 * @brief  Private implementation for DiscoverInputSchemaRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DiscoverInputSchemaRequestPrivate object.
 *
 * @param  action  KinesisAnalytics action being performed.
 * @param  q       Pointer to this object's public DiscoverInputSchemaRequest instance.
 */
DiscoverInputSchemaRequestPrivate::DiscoverInputSchemaRequestPrivate(
    const KinesisAnalyticsRequest::Action action, DiscoverInputSchemaRequest * const q)
    : KinesisAnalyticsRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DiscoverInputSchemaRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DiscoverInputSchemaRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DiscoverInputSchemaRequest instance.
 */
DiscoverInputSchemaRequestPrivate::DiscoverInputSchemaRequestPrivate(
    const DiscoverInputSchemaRequestPrivate &other, DiscoverInputSchemaRequest * const q)
    : KinesisAnalyticsRequestPrivate(other, q)
{

}

} // namespace KinesisAnalytics
} // namespace QtAws
