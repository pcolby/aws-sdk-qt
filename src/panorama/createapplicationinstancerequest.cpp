// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createapplicationinstancerequest.h"
#include "createapplicationinstancerequest_p.h"
#include "createapplicationinstanceresponse.h"
#include "panoramarequest_p.h"

namespace QtAws {
namespace Panorama {

/*!
 * \class QtAws::Panorama::CreateApplicationInstanceRequest
 * \brief The CreateApplicationInstanceRequest class provides an interface for Panorama CreateApplicationInstance requests.
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
 * \sa PanoramaClient::createApplicationInstance
 */

/*!
 * Constructs a copy of \a other.
 */
CreateApplicationInstanceRequest::CreateApplicationInstanceRequest(const CreateApplicationInstanceRequest &other)
    : PanoramaRequest(new CreateApplicationInstanceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateApplicationInstanceRequest object.
 */
CreateApplicationInstanceRequest::CreateApplicationInstanceRequest()
    : PanoramaRequest(new CreateApplicationInstanceRequestPrivate(PanoramaRequest::CreateApplicationInstanceAction, this))
{

}

/*!
 * \reimp
 */
bool CreateApplicationInstanceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateApplicationInstanceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateApplicationInstanceRequest::response(QNetworkReply * const reply) const
{
    return new CreateApplicationInstanceResponse(*this, reply);
}

/*!
 * \class QtAws::Panorama::CreateApplicationInstanceRequestPrivate
 * \brief The CreateApplicationInstanceRequestPrivate class provides private implementation for CreateApplicationInstanceRequest.
 * \internal
 *
 * \inmodule QtAwsPanorama
 */

/*!
 * Constructs a CreateApplicationInstanceRequestPrivate object for Panorama \a action,
 * with public implementation \a q.
 */
CreateApplicationInstanceRequestPrivate::CreateApplicationInstanceRequestPrivate(
    const PanoramaRequest::Action action, CreateApplicationInstanceRequest * const q)
    : PanoramaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateApplicationInstanceRequest
 * class' copy constructor.
 */
CreateApplicationInstanceRequestPrivate::CreateApplicationInstanceRequestPrivate(
    const CreateApplicationInstanceRequestPrivate &other, CreateApplicationInstanceRequest * const q)
    : PanoramaRequestPrivate(other, q)
{

}

} // namespace Panorama
} // namespace QtAws
