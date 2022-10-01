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

#include "createnodefromtemplatejobrequest.h"
#include "createnodefromtemplatejobrequest_p.h"
#include "createnodefromtemplatejobresponse.h"
#include "panoramarequest_p.h"

namespace QtAws {
namespace Panorama {

/*!
 * \class QtAws::Panorama::CreateNodeFromTemplateJobRequest
 * \brief The CreateNodeFromTemplateJobRequest class provides an interface for Panorama CreateNodeFromTemplateJob requests.
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
 * \sa PanoramaClient::createNodeFromTemplateJob
 */

/*!
 * Constructs a copy of \a other.
 */
CreateNodeFromTemplateJobRequest::CreateNodeFromTemplateJobRequest(const CreateNodeFromTemplateJobRequest &other)
    : PanoramaRequest(new CreateNodeFromTemplateJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateNodeFromTemplateJobRequest object.
 */
CreateNodeFromTemplateJobRequest::CreateNodeFromTemplateJobRequest()
    : PanoramaRequest(new CreateNodeFromTemplateJobRequestPrivate(PanoramaRequest::CreateNodeFromTemplateJobAction, this))
{

}

/*!
 * \reimp
 */
bool CreateNodeFromTemplateJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateNodeFromTemplateJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateNodeFromTemplateJobRequest::response(QNetworkReply * const reply) const
{
    return new CreateNodeFromTemplateJobResponse(*this, reply);
}

/*!
 * \class QtAws::Panorama::CreateNodeFromTemplateJobRequestPrivate
 * \brief The CreateNodeFromTemplateJobRequestPrivate class provides private implementation for CreateNodeFromTemplateJobRequest.
 * \internal
 *
 * \inmodule QtAwsPanorama
 */

/*!
 * Constructs a CreateNodeFromTemplateJobRequestPrivate object for Panorama \a action,
 * with public implementation \a q.
 */
CreateNodeFromTemplateJobRequestPrivate::CreateNodeFromTemplateJobRequestPrivate(
    const PanoramaRequest::Action action, CreateNodeFromTemplateJobRequest * const q)
    : PanoramaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateNodeFromTemplateJobRequest
 * class' copy constructor.
 */
CreateNodeFromTemplateJobRequestPrivate::CreateNodeFromTemplateJobRequestPrivate(
    const CreateNodeFromTemplateJobRequestPrivate &other, CreateNodeFromTemplateJobRequest * const q)
    : PanoramaRequestPrivate(other, q)
{

}

} // namespace Panorama
} // namespace QtAws
