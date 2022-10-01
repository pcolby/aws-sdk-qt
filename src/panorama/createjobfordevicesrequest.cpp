// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createjobfordevicesrequest.h"
#include "createjobfordevicesrequest_p.h"
#include "createjobfordevicesresponse.h"
#include "panoramarequest_p.h"

namespace QtAws {
namespace Panorama {

/*!
 * \class QtAws::Panorama::CreateJobForDevicesRequest
 * \brief The CreateJobForDevicesRequest class provides an interface for Panorama CreateJobForDevices requests.
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
 * \sa PanoramaClient::createJobForDevices
 */

/*!
 * Constructs a copy of \a other.
 */
CreateJobForDevicesRequest::CreateJobForDevicesRequest(const CreateJobForDevicesRequest &other)
    : PanoramaRequest(new CreateJobForDevicesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateJobForDevicesRequest object.
 */
CreateJobForDevicesRequest::CreateJobForDevicesRequest()
    : PanoramaRequest(new CreateJobForDevicesRequestPrivate(PanoramaRequest::CreateJobForDevicesAction, this))
{

}

/*!
 * \reimp
 */
bool CreateJobForDevicesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateJobForDevicesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateJobForDevicesRequest::response(QNetworkReply * const reply) const
{
    return new CreateJobForDevicesResponse(*this, reply);
}

/*!
 * \class QtAws::Panorama::CreateJobForDevicesRequestPrivate
 * \brief The CreateJobForDevicesRequestPrivate class provides private implementation for CreateJobForDevicesRequest.
 * \internal
 *
 * \inmodule QtAwsPanorama
 */

/*!
 * Constructs a CreateJobForDevicesRequestPrivate object for Panorama \a action,
 * with public implementation \a q.
 */
CreateJobForDevicesRequestPrivate::CreateJobForDevicesRequestPrivate(
    const PanoramaRequest::Action action, CreateJobForDevicesRequest * const q)
    : PanoramaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateJobForDevicesRequest
 * class' copy constructor.
 */
CreateJobForDevicesRequestPrivate::CreateJobForDevicesRequestPrivate(
    const CreateJobForDevicesRequestPrivate &other, CreateJobForDevicesRequest * const q)
    : PanoramaRequestPrivate(other, q)
{

}

} // namespace Panorama
} // namespace QtAws
