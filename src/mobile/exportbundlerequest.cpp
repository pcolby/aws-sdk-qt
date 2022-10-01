// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "exportbundlerequest.h"
#include "exportbundlerequest_p.h"
#include "exportbundleresponse.h"
#include "mobilerequest_p.h"

namespace QtAws {
namespace Mobile {

/*!
 * \class QtAws::Mobile::ExportBundleRequest
 * \brief The ExportBundleRequest class provides an interface for Mobile ExportBundle requests.
 *
 * \inmodule QtAwsMobile
 *
 *  AWS Mobile Service provides mobile app and website developers with capabilities required to configure AWS resources and
 *  bootstrap their developer desktop projects with the necessary SDKs, constants, tools and samples to make use of those
 *  resources.
 *
 * \sa MobileClient::exportBundle
 */

/*!
 * Constructs a copy of \a other.
 */
ExportBundleRequest::ExportBundleRequest(const ExportBundleRequest &other)
    : MobileRequest(new ExportBundleRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ExportBundleRequest object.
 */
ExportBundleRequest::ExportBundleRequest()
    : MobileRequest(new ExportBundleRequestPrivate(MobileRequest::ExportBundleAction, this))
{

}

/*!
 * \reimp
 */
bool ExportBundleRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ExportBundleResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ExportBundleRequest::response(QNetworkReply * const reply) const
{
    return new ExportBundleResponse(*this, reply);
}

/*!
 * \class QtAws::Mobile::ExportBundleRequestPrivate
 * \brief The ExportBundleRequestPrivate class provides private implementation for ExportBundleRequest.
 * \internal
 *
 * \inmodule QtAwsMobile
 */

/*!
 * Constructs a ExportBundleRequestPrivate object for Mobile \a action,
 * with public implementation \a q.
 */
ExportBundleRequestPrivate::ExportBundleRequestPrivate(
    const MobileRequest::Action action, ExportBundleRequest * const q)
    : MobileRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ExportBundleRequest
 * class' copy constructor.
 */
ExportBundleRequestPrivate::ExportBundleRequestPrivate(
    const ExportBundleRequestPrivate &other, ExportBundleRequest * const q)
    : MobileRequestPrivate(other, q)
{

}

} // namespace Mobile
} // namespace QtAws
