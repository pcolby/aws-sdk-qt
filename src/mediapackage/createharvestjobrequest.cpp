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

#include "createharvestjobrequest.h"
#include "createharvestjobrequest_p.h"
#include "createharvestjobresponse.h"
#include "mediapackagerequest_p.h"

namespace QtAws {
namespace MediaPackage {

/*!
 * \class QtAws::MediaPackage::CreateHarvestJobRequest
 * \brief The CreateHarvestJobRequest class provides an interface for MediaPackage CreateHarvestJob requests.
 *
 * \inmodule QtAwsMediaPackage
 *
 *
 * \sa MediaPackageClient::createHarvestJob
 */

/*!
 * Constructs a copy of \a other.
 */
CreateHarvestJobRequest::CreateHarvestJobRequest(const CreateHarvestJobRequest &other)
    : MediaPackageRequest(new CreateHarvestJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateHarvestJobRequest object.
 */
CreateHarvestJobRequest::CreateHarvestJobRequest()
    : MediaPackageRequest(new CreateHarvestJobRequestPrivate(MediaPackageRequest::CreateHarvestJobAction, this))
{

}

/*!
 * \reimp
 */
bool CreateHarvestJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateHarvestJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateHarvestJobRequest::response(QNetworkReply * const reply) const
{
    return new CreateHarvestJobResponse(*this, reply);
}

/*!
 * \class QtAws::MediaPackage::CreateHarvestJobRequestPrivate
 * \brief The CreateHarvestJobRequestPrivate class provides private implementation for CreateHarvestJobRequest.
 * \internal
 *
 * \inmodule QtAwsMediaPackage
 */

/*!
 * Constructs a CreateHarvestJobRequestPrivate object for MediaPackage \a action,
 * with public implementation \a q.
 */
CreateHarvestJobRequestPrivate::CreateHarvestJobRequestPrivate(
    const MediaPackageRequest::Action action, CreateHarvestJobRequest * const q)
    : MediaPackageRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateHarvestJobRequest
 * class' copy constructor.
 */
CreateHarvestJobRequestPrivate::CreateHarvestJobRequestPrivate(
    const CreateHarvestJobRequestPrivate &other, CreateHarvestJobRequest * const q)
    : MediaPackageRequestPrivate(other, q)
{

}

} // namespace MediaPackage
} // namespace QtAws
