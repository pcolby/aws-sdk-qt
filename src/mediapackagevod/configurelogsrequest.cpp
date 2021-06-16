/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "configurelogsrequest.h"
#include "configurelogsrequest_p.h"
#include "configurelogsresponse.h"
#include "mediapackagevodrequest_p.h"

namespace QtAws {
namespace MediaPackageVod {

/*!
 * \class QtAws::MediaPackageVod::ConfigureLogsRequest
 * \brief The ConfigureLogsRequest class provides an interface for MediaPackageVod ConfigureLogs requests.
 *
 * \inmodule QtAwsMediaPackageVod
 *
 *
 * \sa MediaPackageVodClient::configureLogs
 */

/*!
 * Constructs a copy of \a other.
 */
ConfigureLogsRequest::ConfigureLogsRequest(const ConfigureLogsRequest &other)
    : MediaPackageVodRequest(new ConfigureLogsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ConfigureLogsRequest object.
 */
ConfigureLogsRequest::ConfigureLogsRequest()
    : MediaPackageVodRequest(new ConfigureLogsRequestPrivate(MediaPackageVodRequest::ConfigureLogsAction, this))
{

}

/*!
 * \reimp
 */
bool ConfigureLogsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ConfigureLogsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ConfigureLogsRequest::response(QNetworkReply * const reply) const
{
    return new ConfigureLogsResponse(*this, reply);
}

/*!
 * \class QtAws::MediaPackageVod::ConfigureLogsRequestPrivate
 * \brief The ConfigureLogsRequestPrivate class provides private implementation for ConfigureLogsRequest.
 * \internal
 *
 * \inmodule QtAwsMediaPackageVod
 */

/*!
 * Constructs a ConfigureLogsRequestPrivate object for MediaPackageVod \a action,
 * with public implementation \a q.
 */
ConfigureLogsRequestPrivate::ConfigureLogsRequestPrivate(
    const MediaPackageVodRequest::Action action, ConfigureLogsRequest * const q)
    : MediaPackageVodRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ConfigureLogsRequest
 * class' copy constructor.
 */
ConfigureLogsRequestPrivate::ConfigureLogsRequestPrivate(
    const ConfigureLogsRequestPrivate &other, ConfigureLogsRequest * const q)
    : MediaPackageVodRequestPrivate(other, q)
{

}

} // namespace MediaPackageVod
} // namespace QtAws
