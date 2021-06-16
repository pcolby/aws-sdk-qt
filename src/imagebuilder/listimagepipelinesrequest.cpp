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

#include "listimagepipelinesrequest.h"
#include "listimagepipelinesrequest_p.h"
#include "listimagepipelinesresponse.h"
#include "imagebuilderrequest_p.h"

namespace QtAws {
namespace imagebuilder {

/*!
 * \class QtAws::imagebuilder::ListImagePipelinesRequest
 * \brief The ListImagePipelinesRequest class provides an interface for imagebuilder ListImagePipelines requests.
 *
 * \inmodule QtAwsimagebuilder
 *
 *  EC2 Image Builder is a fully managed AWS service that makes it easier to automate the creation, management, and
 *  deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and pre-configured with
 *  software and settings to meet specific IT
 *
 * \sa imagebuilderClient::listImagePipelines
 */

/*!
 * Constructs a copy of \a other.
 */
ListImagePipelinesRequest::ListImagePipelinesRequest(const ListImagePipelinesRequest &other)
    : imagebuilderRequest(new ListImagePipelinesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListImagePipelinesRequest object.
 */
ListImagePipelinesRequest::ListImagePipelinesRequest()
    : imagebuilderRequest(new ListImagePipelinesRequestPrivate(imagebuilderRequest::ListImagePipelinesAction, this))
{

}

/*!
 * \reimp
 */
bool ListImagePipelinesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListImagePipelinesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListImagePipelinesRequest::response(QNetworkReply * const reply) const
{
    return new ListImagePipelinesResponse(*this, reply);
}

/*!
 * \class QtAws::imagebuilder::ListImagePipelinesRequestPrivate
 * \brief The ListImagePipelinesRequestPrivate class provides private implementation for ListImagePipelinesRequest.
 * \internal
 *
 * \inmodule QtAwsimagebuilder
 */

/*!
 * Constructs a ListImagePipelinesRequestPrivate object for imagebuilder \a action,
 * with public implementation \a q.
 */
ListImagePipelinesRequestPrivate::ListImagePipelinesRequestPrivate(
    const imagebuilderRequest::Action action, ListImagePipelinesRequest * const q)
    : imagebuilderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListImagePipelinesRequest
 * class' copy constructor.
 */
ListImagePipelinesRequestPrivate::ListImagePipelinesRequestPrivate(
    const ListImagePipelinesRequestPrivate &other, ListImagePipelinesRequest * const q)
    : imagebuilderRequestPrivate(other, q)
{

}

} // namespace imagebuilder
} // namespace QtAws
