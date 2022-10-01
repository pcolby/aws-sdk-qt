// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
