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

#include "importcomponentrequest.h"
#include "importcomponentrequest_p.h"
#include "importcomponentresponse.h"
#include "imagebuilderrequest_p.h"

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::ImportComponentRequest
 * \brief The ImportComponentRequest class provides an interface for ImageBuilder ImportComponent requests.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::importComponent
 */

/*!
 * Constructs a copy of \a other.
 */
ImportComponentRequest::ImportComponentRequest(const ImportComponentRequest &other)
    : ImageBuilderRequest(new ImportComponentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ImportComponentRequest object.
 */
ImportComponentRequest::ImportComponentRequest()
    : ImageBuilderRequest(new ImportComponentRequestPrivate(ImageBuilderRequest::ImportComponentAction, this))
{

}

/*!
 * \reimp
 */
bool ImportComponentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ImportComponentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ImportComponentRequest::response(QNetworkReply * const reply) const
{
    return new ImportComponentResponse(*this, reply);
}

/*!
 * \class QtAws::ImageBuilder::ImportComponentRequestPrivate
 * \brief The ImportComponentRequestPrivate class provides private implementation for ImportComponentRequest.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a ImportComponentRequestPrivate object for ImageBuilder \a action,
 * with public implementation \a q.
 */
ImportComponentRequestPrivate::ImportComponentRequestPrivate(
    const ImageBuilderRequest::Action action, ImportComponentRequest * const q)
    : ImageBuilderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ImportComponentRequest
 * class' copy constructor.
 */
ImportComponentRequestPrivate::ImportComponentRequestPrivate(
    const ImportComponentRequestPrivate &other, ImportComponentRequest * const q)
    : ImageBuilderRequestPrivate(other, q)
{

}

} // namespace ImageBuilder
} // namespace QtAws
