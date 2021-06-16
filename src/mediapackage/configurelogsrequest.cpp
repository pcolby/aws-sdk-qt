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
#include "mediapackagerequest_p.h"

namespace QtAws {
namespace MediaPackage {

/*!
 * \class QtAws::MediaPackage::ConfigureLogsRequest
 * \brief The ConfigureLogsRequest class provides an interface for MediaPackage ConfigureLogs requests.
 *
 * \inmodule QtAwsMediaPackage
 *
 *
 * \sa MediaPackageClient::configureLogs
 */

/*!
 * Constructs a copy of \a other.
 */
ConfigureLogsRequest::ConfigureLogsRequest(const ConfigureLogsRequest &other)
    : MediaPackageRequest(new ConfigureLogsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ConfigureLogsRequest object.
 */
ConfigureLogsRequest::ConfigureLogsRequest()
    : MediaPackageRequest(new ConfigureLogsRequestPrivate(MediaPackageRequest::ConfigureLogsAction, this))
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
 * \class QtAws::MediaPackage::ConfigureLogsRequestPrivate
 * \brief The ConfigureLogsRequestPrivate class provides private implementation for ConfigureLogsRequest.
 * \internal
 *
 * \inmodule QtAwsMediaPackage
 */

/*!
 * Constructs a ConfigureLogsRequestPrivate object for MediaPackage \a action,
 * with public implementation \a q.
 */
ConfigureLogsRequestPrivate::ConfigureLogsRequestPrivate(
    const MediaPackageRequest::Action action, ConfigureLogsRequest * const q)
    : MediaPackageRequestPrivate(action, q)
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
    : MediaPackageRequestPrivate(other, q)
{

}

} // namespace MediaPackage
} // namespace QtAws
