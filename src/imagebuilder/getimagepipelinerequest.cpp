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

#include "getimagepipelinerequest.h"
#include "getimagepipelinerequest_p.h"
#include "getimagepipelineresponse.h"
#include "imagebuilderrequest_p.h"

namespace QtAws {
namespace imagebuilder {

/*!
 * \class QtAws::imagebuilder::GetImagePipelineRequest
 * \brief The GetImagePipelineRequest class provides an interface for imagebuilder GetImagePipeline requests.
 *
 * \inmodule QtAwsimagebuilder
 *
 *  EC2 Image Builder is a fully managed AWS service that makes it easier to automate the creation, management, and
 *  deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and pre-configured with
 *  software and settings to meet specific IT
 *
 * \sa imagebuilderClient::getImagePipeline
 */

/*!
 * Constructs a copy of \a other.
 */
GetImagePipelineRequest::GetImagePipelineRequest(const GetImagePipelineRequest &other)
    : imagebuilderRequest(new GetImagePipelineRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetImagePipelineRequest object.
 */
GetImagePipelineRequest::GetImagePipelineRequest()
    : imagebuilderRequest(new GetImagePipelineRequestPrivate(imagebuilderRequest::GetImagePipelineAction, this))
{

}

/*!
 * \reimp
 */
bool GetImagePipelineRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetImagePipelineResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetImagePipelineRequest::response(QNetworkReply * const reply) const
{
    return new GetImagePipelineResponse(*this, reply);
}

/*!
 * \class QtAws::imagebuilder::GetImagePipelineRequestPrivate
 * \brief The GetImagePipelineRequestPrivate class provides private implementation for GetImagePipelineRequest.
 * \internal
 *
 * \inmodule QtAwsimagebuilder
 */

/*!
 * Constructs a GetImagePipelineRequestPrivate object for imagebuilder \a action,
 * with public implementation \a q.
 */
GetImagePipelineRequestPrivate::GetImagePipelineRequestPrivate(
    const imagebuilderRequest::Action action, GetImagePipelineRequest * const q)
    : imagebuilderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetImagePipelineRequest
 * class' copy constructor.
 */
GetImagePipelineRequestPrivate::GetImagePipelineRequestPrivate(
    const GetImagePipelineRequestPrivate &other, GetImagePipelineRequest * const q)
    : imagebuilderRequestPrivate(other, q)
{

}

} // namespace imagebuilder
} // namespace QtAws
