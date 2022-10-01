// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletepackagerequest.h"
#include "deletepackagerequest_p.h"
#include "deletepackageresponse.h"
#include "panoramarequest_p.h"

namespace QtAws {
namespace Panorama {

/*!
 * \class QtAws::Panorama::DeletePackageRequest
 * \brief The DeletePackageRequest class provides an interface for Panorama DeletePackage requests.
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
 * \sa PanoramaClient::deletePackage
 */

/*!
 * Constructs a copy of \a other.
 */
DeletePackageRequest::DeletePackageRequest(const DeletePackageRequest &other)
    : PanoramaRequest(new DeletePackageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeletePackageRequest object.
 */
DeletePackageRequest::DeletePackageRequest()
    : PanoramaRequest(new DeletePackageRequestPrivate(PanoramaRequest::DeletePackageAction, this))
{

}

/*!
 * \reimp
 */
bool DeletePackageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeletePackageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeletePackageRequest::response(QNetworkReply * const reply) const
{
    return new DeletePackageResponse(*this, reply);
}

/*!
 * \class QtAws::Panorama::DeletePackageRequestPrivate
 * \brief The DeletePackageRequestPrivate class provides private implementation for DeletePackageRequest.
 * \internal
 *
 * \inmodule QtAwsPanorama
 */

/*!
 * Constructs a DeletePackageRequestPrivate object for Panorama \a action,
 * with public implementation \a q.
 */
DeletePackageRequestPrivate::DeletePackageRequestPrivate(
    const PanoramaRequest::Action action, DeletePackageRequest * const q)
    : PanoramaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeletePackageRequest
 * class' copy constructor.
 */
DeletePackageRequestPrivate::DeletePackageRequestPrivate(
    const DeletePackageRequestPrivate &other, DeletePackageRequest * const q)
    : PanoramaRequestPrivate(other, q)
{

}

} // namespace Panorama
} // namespace QtAws
