/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listnodefromtemplatejobsrequest.h"
#include "listnodefromtemplatejobsrequest_p.h"
#include "listnodefromtemplatejobsresponse.h"
#include "panoramarequest_p.h"

namespace QtAws {
namespace Panorama {

/*!
 * \class QtAws::Panorama::ListNodeFromTemplateJobsRequest
 * \brief The ListNodeFromTemplateJobsRequest class provides an interface for Panorama ListNodeFromTemplateJobs requests.
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
 * \sa PanoramaClient::listNodeFromTemplateJobs
 */

/*!
 * Constructs a copy of \a other.
 */
ListNodeFromTemplateJobsRequest::ListNodeFromTemplateJobsRequest(const ListNodeFromTemplateJobsRequest &other)
    : PanoramaRequest(new ListNodeFromTemplateJobsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListNodeFromTemplateJobsRequest object.
 */
ListNodeFromTemplateJobsRequest::ListNodeFromTemplateJobsRequest()
    : PanoramaRequest(new ListNodeFromTemplateJobsRequestPrivate(PanoramaRequest::ListNodeFromTemplateJobsAction, this))
{

}

/*!
 * \reimp
 */
bool ListNodeFromTemplateJobsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListNodeFromTemplateJobsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListNodeFromTemplateJobsRequest::response(QNetworkReply * const reply) const
{
    return new ListNodeFromTemplateJobsResponse(*this, reply);
}

/*!
 * \class QtAws::Panorama::ListNodeFromTemplateJobsRequestPrivate
 * \brief The ListNodeFromTemplateJobsRequestPrivate class provides private implementation for ListNodeFromTemplateJobsRequest.
 * \internal
 *
 * \inmodule QtAwsPanorama
 */

/*!
 * Constructs a ListNodeFromTemplateJobsRequestPrivate object for Panorama \a action,
 * with public implementation \a q.
 */
ListNodeFromTemplateJobsRequestPrivate::ListNodeFromTemplateJobsRequestPrivate(
    const PanoramaRequest::Action action, ListNodeFromTemplateJobsRequest * const q)
    : PanoramaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListNodeFromTemplateJobsRequest
 * class' copy constructor.
 */
ListNodeFromTemplateJobsRequestPrivate::ListNodeFromTemplateJobsRequestPrivate(
    const ListNodeFromTemplateJobsRequestPrivate &other, ListNodeFromTemplateJobsRequest * const q)
    : PanoramaRequestPrivate(other, q)
{

}

} // namespace Panorama
} // namespace QtAws
