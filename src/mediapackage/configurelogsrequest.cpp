// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
