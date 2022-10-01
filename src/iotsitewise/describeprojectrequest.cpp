// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeprojectrequest.h"
#include "describeprojectrequest_p.h"
#include "describeprojectresponse.h"
#include "iotsitewiserequest_p.h"

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::DescribeProjectRequest
 * \brief The DescribeProjectRequest class provides an interface for IoTSiteWise DescribeProject requests.
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
 * \sa IoTSiteWiseClient::describeProject
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeProjectRequest::DescribeProjectRequest(const DescribeProjectRequest &other)
    : IoTSiteWiseRequest(new DescribeProjectRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeProjectRequest object.
 */
DescribeProjectRequest::DescribeProjectRequest()
    : IoTSiteWiseRequest(new DescribeProjectRequestPrivate(IoTSiteWiseRequest::DescribeProjectAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeProjectRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeProjectResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeProjectRequest::response(QNetworkReply * const reply) const
{
    return new DescribeProjectResponse(*this, reply);
}

/*!
 * \class QtAws::IoTSiteWise::DescribeProjectRequestPrivate
 * \brief The DescribeProjectRequestPrivate class provides private implementation for DescribeProjectRequest.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a DescribeProjectRequestPrivate object for IoTSiteWise \a action,
 * with public implementation \a q.
 */
DescribeProjectRequestPrivate::DescribeProjectRequestPrivate(
    const IoTSiteWiseRequest::Action action, DescribeProjectRequest * const q)
    : IoTSiteWiseRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeProjectRequest
 * class' copy constructor.
 */
DescribeProjectRequestPrivate::DescribeProjectRequestPrivate(
    const DescribeProjectRequestPrivate &other, DescribeProjectRequest * const q)
    : IoTSiteWiseRequestPrivate(other, q)
{

}

} // namespace IoTSiteWise
} // namespace QtAws
