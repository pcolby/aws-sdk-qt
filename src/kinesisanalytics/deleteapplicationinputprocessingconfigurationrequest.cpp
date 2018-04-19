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

#include "deleteapplicationinputprocessingconfigurationrequest.h"
#include "deleteapplicationinputprocessingconfigurationrequest_p.h"
#include "deleteapplicationinputprocessingconfigurationresponse.h"
#include "kinesisanalyticsrequest_p.h"

namespace QtAws {
namespace KinesisAnalytics {

/*!
 * \class QtAws::KinesisAnalytics::DeleteApplicationInputProcessingConfigurationRequest
 * \brief The DeleteApplicationInputProcessingConfigurationRequest class provides an interface for KinesisAnalytics DeleteApplicationInputProcessingConfiguration requests.
 *
 * \inmodule QtAwsKinesisAnalytics
 *
 *
 * \sa KinesisAnalyticsClient::deleteApplicationInputProcessingConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteApplicationInputProcessingConfigurationRequest::DeleteApplicationInputProcessingConfigurationRequest(const DeleteApplicationInputProcessingConfigurationRequest &other)
    : KinesisAnalyticsRequest(new DeleteApplicationInputProcessingConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteApplicationInputProcessingConfigurationRequest object.
 */
DeleteApplicationInputProcessingConfigurationRequest::DeleteApplicationInputProcessingConfigurationRequest()
    : KinesisAnalyticsRequest(new DeleteApplicationInputProcessingConfigurationRequestPrivate(KinesisAnalyticsRequest::DeleteApplicationInputProcessingConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteApplicationInputProcessingConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteApplicationInputProcessingConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteApplicationInputProcessingConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new DeleteApplicationInputProcessingConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::KinesisAnalytics::DeleteApplicationInputProcessingConfigurationRequestPrivate
 * \brief The DeleteApplicationInputProcessingConfigurationRequestPrivate class provides private implementation for DeleteApplicationInputProcessingConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsKinesisAnalytics
 */

/*!
 *
 * Constructs a DeleteApplicationInputProcessingConfigurationRequestPrivate object for KinesisAnalytics \a action with,
 * public implementation \a q.
 */
DeleteApplicationInputProcessingConfigurationRequestPrivate::DeleteApplicationInputProcessingConfigurationRequestPrivate(
    const KinesisAnalyticsRequest::Action action, DeleteApplicationInputProcessingConfigurationRequest * const q)
    : KinesisAnalyticsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteApplicationInputProcessingConfigurationRequest
 * class' copy constructor.
 */
DeleteApplicationInputProcessingConfigurationRequestPrivate::DeleteApplicationInputProcessingConfigurationRequestPrivate(
    const DeleteApplicationInputProcessingConfigurationRequestPrivate &other, DeleteApplicationInputProcessingConfigurationRequest * const q)
    : KinesisAnalyticsRequestPrivate(other, q)
{

}

} // namespace KinesisAnalytics
} // namespace QtAws
