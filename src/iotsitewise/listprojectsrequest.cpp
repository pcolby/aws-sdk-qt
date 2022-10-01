// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listprojectsrequest.h"
#include "listprojectsrequest_p.h"
#include "listprojectsresponse.h"
#include "iotsitewiserequest_p.h"

namespace QtAws {
namespace IoTSiteWise {

/*!
 * \class QtAws::IoTSiteWise::ListProjectsRequest
 * \brief The ListProjectsRequest class provides an interface for IoTSiteWise ListProjects requests.
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
 * \sa IoTSiteWiseClient::listProjects
 */

/*!
 * Constructs a copy of \a other.
 */
ListProjectsRequest::ListProjectsRequest(const ListProjectsRequest &other)
    : IoTSiteWiseRequest(new ListProjectsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListProjectsRequest object.
 */
ListProjectsRequest::ListProjectsRequest()
    : IoTSiteWiseRequest(new ListProjectsRequestPrivate(IoTSiteWiseRequest::ListProjectsAction, this))
{

}

/*!
 * \reimp
 */
bool ListProjectsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListProjectsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListProjectsRequest::response(QNetworkReply * const reply) const
{
    return new ListProjectsResponse(*this, reply);
}

/*!
 * \class QtAws::IoTSiteWise::ListProjectsRequestPrivate
 * \brief The ListProjectsRequestPrivate class provides private implementation for ListProjectsRequest.
 * \internal
 *
 * \inmodule QtAwsIoTSiteWise
 */

/*!
 * Constructs a ListProjectsRequestPrivate object for IoTSiteWise \a action,
 * with public implementation \a q.
 */
ListProjectsRequestPrivate::ListProjectsRequestPrivate(
    const IoTSiteWiseRequest::Action action, ListProjectsRequest * const q)
    : IoTSiteWiseRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListProjectsRequest
 * class' copy constructor.
 */
ListProjectsRequestPrivate::ListProjectsRequestPrivate(
    const ListProjectsRequestPrivate &other, ListProjectsRequest * const q)
    : IoTSiteWiseRequestPrivate(other, q)
{

}

} // namespace IoTSiteWise
} // namespace QtAws
