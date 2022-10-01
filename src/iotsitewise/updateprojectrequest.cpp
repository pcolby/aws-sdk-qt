// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateprojectrequest.h"
#include "updateprojectrequest_p.h"
#include "updateprojectresponse.h"
#include "iotsitewiserequest_p.h"

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::UpdateProjectRequest
 * \brief The UpdateProjectRequest class provides an interface for IoTSiteWise UpdateProject requests.
 *
 * \inmodule QtAwsIoTSiteWise
 *
 *  Welcome to the IoT SiteWise API Reference. IoT SiteWise is an Amazon Web Services service that connects <a
 *  href="https://en.wikipedia.org/wiki/Internet_of_things#Industrial_applications">Industrial Internet of Things (IIoT)</a>
 *  devices to the power of the Amazon Web Services Cloud. For more information, see the <a
 *  href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/">IoT SiteWise User Guide</a>. For information about IoT
 *  SiteWise quotas, see <a href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/quotas.html">Quotas</a> in the
 *  <i>IoT SiteWise User
 *
 * \sa IoTSiteWiseClient::updateProject
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateProjectRequest::UpdateProjectRequest(const UpdateProjectRequest &other)
    : IoTSiteWiseRequest(new UpdateProjectRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateProjectRequest object.
 */
UpdateProjectRequest::UpdateProjectRequest()
    : IoTSiteWiseRequest(new UpdateProjectRequestPrivate(IoTSiteWiseRequest::UpdateProjectAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateProjectRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateProjectResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateProjectRequest::response(QNetworkReply * const reply) const
{
    return new UpdateProjectResponse(*this, reply);
}

/*!
 * \class QtAws::IoTSiteWise::UpdateProjectRequestPrivate
 * \brief The UpdateProjectRequestPrivate class provides private implementation for UpdateProjectRequest.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a UpdateProjectRequestPrivate object for IoTSiteWise \a action,
 * with public implementation \a q.
 */
UpdateProjectRequestPrivate::UpdateProjectRequestPrivate(
    const IoTSiteWiseRequest::Action action, UpdateProjectRequest * const q)
    : IoTSiteWiseRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateProjectRequest
 * class' copy constructor.
 */
UpdateProjectRequestPrivate::UpdateProjectRequestPrivate(
    const UpdateProjectRequestPrivate &other, UpdateProjectRequest * const q)
    : IoTSiteWiseRequestPrivate(other, q)
{

}

} // namespace IoTSiteWise
} // namespace QtAws
