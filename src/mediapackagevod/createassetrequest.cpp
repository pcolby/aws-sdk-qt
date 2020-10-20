/*
    Copyright 2013-2020 Paul Colby

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

#include "createassetrequest.h"
#include "createassetrequest_p.h"
#include "createassetresponse.h"
#include "mediapackagevodrequest_p.h"

namespace QtAws {
namespace MediaPackageVod {

/*!
 * \class QtAws::MediaPackageVod::CreateAssetRequest
 * \brief The CreateAssetRequest class provides an interface for MediaPackageVod CreateAsset requests.
 *
 * \inmodule QtAwsMediaPackageVod
 *
 *
 * \sa MediaPackageVodClient::createAsset
 */

/*!
 * Constructs a copy of \a other.
 */
CreateAssetRequest::CreateAssetRequest(const CreateAssetRequest &other)
    : MediaPackageVodRequest(new CreateAssetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateAssetRequest object.
 */
CreateAssetRequest::CreateAssetRequest()
    : MediaPackageVodRequest(new CreateAssetRequestPrivate(MediaPackageVodRequest::CreateAssetAction, this))
{

}

/*!
 * \reimp
 */
bool CreateAssetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateAssetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateAssetRequest::response(QNetworkReply * const reply) const
{
    return new CreateAssetResponse(*this, reply);
}

/*!
 * \class QtAws::MediaPackageVod::CreateAssetRequestPrivate
 * \brief The CreateAssetRequestPrivate class provides private implementation for CreateAssetRequest.
 * \internal
 *
 * \inmodule QtAwsMediaPackageVod
 */

/*!
 * Constructs a CreateAssetRequestPrivate object for MediaPackageVod \a action,
 * with public implementation \a q.
 */
CreateAssetRequestPrivate::CreateAssetRequestPrivate(
    const MediaPackageVodRequest::Action action, CreateAssetRequest * const q)
    : MediaPackageVodRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateAssetRequest
 * class' copy constructor.
 */
CreateAssetRequestPrivate::CreateAssetRequestPrivate(
    const CreateAssetRequestPrivate &other, CreateAssetRequest * const q)
    : MediaPackageVodRequestPrivate(other, q)
{

}

} // namespace MediaPackageVod
} // namespace QtAws
