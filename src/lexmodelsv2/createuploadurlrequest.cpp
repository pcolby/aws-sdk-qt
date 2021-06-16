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

#include "createuploadurlrequest.h"
#include "createuploadurlrequest_p.h"
#include "createuploadurlresponse.h"
#include "lexmodelsv2request_p.h"

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::CreateUploadUrlRequest
 * \brief The CreateUploadUrlRequest class provides an interface for LexModelsV2 CreateUploadUrl requests.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::createUploadUrl
 */

/*!
 * Constructs a copy of \a other.
 */
CreateUploadUrlRequest::CreateUploadUrlRequest(const CreateUploadUrlRequest &other)
    : LexModelsV2Request(new CreateUploadUrlRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateUploadUrlRequest object.
 */
CreateUploadUrlRequest::CreateUploadUrlRequest()
    : LexModelsV2Request(new CreateUploadUrlRequestPrivate(LexModelsV2Request::CreateUploadUrlAction, this))
{

}

/*!
 * \reimp
 */
bool CreateUploadUrlRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateUploadUrlResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateUploadUrlRequest::response(QNetworkReply * const reply) const
{
    return new CreateUploadUrlResponse(*this, reply);
}

/*!
 * \class QtAws::LexModelsV2::CreateUploadUrlRequestPrivate
 * \brief The CreateUploadUrlRequestPrivate class provides private implementation for CreateUploadUrlRequest.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a CreateUploadUrlRequestPrivate object for LexModelsV2 \a action,
 * with public implementation \a q.
 */
CreateUploadUrlRequestPrivate::CreateUploadUrlRequestPrivate(
    const LexModelsV2Request::Action action, CreateUploadUrlRequest * const q)
    : LexModelsV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateUploadUrlRequest
 * class' copy constructor.
 */
CreateUploadUrlRequestPrivate::CreateUploadUrlRequestPrivate(
    const CreateUploadUrlRequestPrivate &other, CreateUploadUrlRequest * const q)
    : LexModelsV2RequestPrivate(other, q)
{

}

} // namespace LexModelsV2
} // namespace QtAws
