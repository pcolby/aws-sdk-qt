// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEUPLOADURLREQUEST_P_H
#define QTAWS_CREATEUPLOADURLREQUEST_P_H

#include "lexmodelsv2request_p.h"
#include "createuploadurlrequest.h"

namespace QtAws {
namespace LexModelsV2 {

class CreateUploadUrlRequest;

class CreateUploadUrlRequestPrivate : public LexModelsV2RequestPrivate {

public:
    CreateUploadUrlRequestPrivate(const LexModelsV2Request::Action action,
                                   CreateUploadUrlRequest * const q);
    CreateUploadUrlRequestPrivate(const CreateUploadUrlRequestPrivate &other,
                                   CreateUploadUrlRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateUploadUrlRequest)

};

} // namespace LexModelsV2
} // namespace QtAws

#endif
