// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
