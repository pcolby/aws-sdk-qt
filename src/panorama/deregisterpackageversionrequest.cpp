// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deregisterpackageversionrequest.h"
#include "deregisterpackageversionrequest_p.h"
#include "deregisterpackageversionresponse.h"
#include "panoramarequest_p.h"

namespace QtAws {
namespace Panorama {

/*!
 * \class QtAws::Panorama::DeregisterPackageVersionRequest
 * \brief The DeregisterPackageVersionRequest class provides an interface for Panorama DeregisterPackageVersion requests.
 *
 * \inmodule QtAwsPanorama
 *
 *  <fullname>AWS Panorama</fullname>
 * 
 *  <b>Overview</b>
 * 
 *  </p
 * 
 *  This is the <i>AWS Panorama API Reference</i>. For an introduction to the service, see <a
 *  href="https://docs.aws.amazon.com/panorama/latest/dev/panorama-welcome.html">What is AWS Panorama?</a> in the <i>AWS
 *  Panorama Developer
 *
 * \sa PanoramaClient::deregisterPackageVersion
 */

/*!
 * Constructs a copy of \a other.
 */
DeregisterPackageVersionRequest::DeregisterPackageVersionRequest(const DeregisterPackageVersionRequest &other)
    : PanoramaRequest(new DeregisterPackageVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeregisterPackageVersionRequest object.
 */
DeregisterPackageVersionRequest::DeregisterPackageVersionRequest()
    : PanoramaRequest(new DeregisterPackageVersionRequestPrivate(PanoramaRequest::DeregisterPackageVersionAction, this))
{

}

/*!
 * \reimp
 */
bool DeregisterPackageVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeregisterPackageVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeregisterPackageVersionRequest::response(QNetworkReply * const reply) const
{
    return new DeregisterPackageVersionResponse(*this, reply);
}

/*!
 * \class QtAws::Panorama::DeregisterPackageVersionRequestPrivate
 * \brief The DeregisterPackageVersionRequestPrivate class provides private implementation for DeregisterPackageVersionRequest.
 * \internal
 *
 * \inmodule QtAwsPanorama
 */

/*!
 * Constructs a DeregisterPackageVersionRequestPrivate object for Panorama \a action,
 * with public implementation \a q.
 */
DeregisterPackageVersionRequestPrivate::DeregisterPackageVersionRequestPrivate(
    const PanoramaRequest::Action action, DeregisterPackageVersionRequest * const q)
    : PanoramaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeregisterPackageVersionRequest
 * class' copy constructor.
 */
DeregisterPackageVersionRequestPrivate::DeregisterPackageVersionRequestPrivate(
    const DeregisterPackageVersionRequestPrivate &other, DeregisterPackageVersionRequest * const q)
    : PanoramaRequestPrivate(other, q)
{

}

} // namespace Panorama
} // namespace QtAws
