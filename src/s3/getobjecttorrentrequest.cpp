// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getobjecttorrentrequest.h"
#include "getobjecttorrentrequest_p.h"
#include "getobjecttorrentresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::GetObjectTorrentRequest
 * \brief The GetObjectTorrentRequest class provides an interface for S3 GetObjectTorrent requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::getObjectTorrent
 */

/*!
 * Constructs a copy of \a other.
 */
GetObjectTorrentRequest::GetObjectTorrentRequest(const GetObjectTorrentRequest &other)
    : S3Request(new GetObjectTorrentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetObjectTorrentRequest object.
 */
GetObjectTorrentRequest::GetObjectTorrentRequest()
    : S3Request(new GetObjectTorrentRequestPrivate(S3Request::GetObjectTorrentAction, this))
{

}

/*!
 * \reimp
 */
bool GetObjectTorrentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetObjectTorrentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetObjectTorrentRequest::response(QNetworkReply * const reply) const
{
    return new GetObjectTorrentResponse(*this, reply);
}

/*!
 * \class QtAws::S3::GetObjectTorrentRequestPrivate
 * \brief The GetObjectTorrentRequestPrivate class provides private implementation for GetObjectTorrentRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a GetObjectTorrentRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
GetObjectTorrentRequestPrivate::GetObjectTorrentRequestPrivate(
    const S3Request::Action action, GetObjectTorrentRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetObjectTorrentRequest
 * class' copy constructor.
 */
GetObjectTorrentRequestPrivate::GetObjectTorrentRequestPrivate(
    const GetObjectTorrentRequestPrivate &other, GetObjectTorrentRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
