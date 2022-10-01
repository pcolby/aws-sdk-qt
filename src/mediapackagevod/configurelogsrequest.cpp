// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
