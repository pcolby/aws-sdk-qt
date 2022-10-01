// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "registerpackageversionrequest.h"
#include "registerpackageversionrequest_p.h"
#include "registerpackageversionresponse.h"
#include "panoramarequest_p.h"

namespace QtAws {
namespace Panorama {

/*!
 * \class QtAws::Panorama::RegisterPackageVersionRequest
 * \brief The RegisterPackageVersionRequest class provides an interface for Panorama RegisterPackageVersion requests.
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
 * \sa PanoramaClient::registerPackageVersion
 */

/*!
 * Constructs a copy of \a other.
 */
RegisterPackageVersionRequest::RegisterPackageVersionRequest(const RegisterPackageVersionRequest &other)
    : PanoramaRequest(new RegisterPackageVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RegisterPackageVersionRequest object.
 */
RegisterPackageVersionRequest::RegisterPackageVersionRequest()
    : PanoramaRequest(new RegisterPackageVersionRequestPrivate(PanoramaRequest::RegisterPackageVersionAction, this))
{

}

/*!
 * \reimp
 */
bool RegisterPackageVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RegisterPackageVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RegisterPackageVersionRequest::response(QNetworkReply * const reply) const
{
    return new RegisterPackageVersionResponse(*this, reply);
}

/*!
 * \class QtAws::Panorama::RegisterPackageVersionRequestPrivate
 * \brief The RegisterPackageVersionRequestPrivate class provides private implementation for RegisterPackageVersionRequest.
 * \internal
 *
 * \inmodule QtAwsPanorama
 */

/*!
 * Constructs a RegisterPackageVersionRequestPrivate object for Panorama \a action,
 * with public implementation \a q.
 */
RegisterPackageVersionRequestPrivate::RegisterPackageVersionRequestPrivate(
    const PanoramaRequest::Action action, RegisterPackageVersionRequest * const q)
    : PanoramaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RegisterPackageVersionRequest
 * class' copy constructor.
 */
RegisterPackageVersionRequestPrivate::RegisterPackageVersionRequestPrivate(
    const RegisterPackageVersionRequestPrivate &other, RegisterPackageVersionRequest * const q)
    : PanoramaRequestPrivate(other, q)
{

}

} // namespace Panorama
} // namespace QtAws
