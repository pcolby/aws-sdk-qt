// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFIELDLEVELENCRYPTIONREQUEST_P_H
#define QTAWS_GETFIELDLEVELENCRYPTIONREQUEST_P_H

#include "cloudfrontrequest_p.h"
#include "getfieldlevelencryptionrequest.h"

namespace QtAws {
namespace CloudFront {

class GetFieldLevelEncryptionRequest;

class GetFieldLevelEncryptionRequestPrivate : public CloudFrontRequestPrivate {

public:
    GetFieldLevelEncryptionRequestPrivate(const CloudFrontRequest::Action action,
                                   GetFieldLevelEncryptionRequest * const q);
    GetFieldLevelEncryptionRequestPrivate(const GetFieldLevelEncryptionRequestPrivate &other,
                                   GetFieldLevelEncryptionRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetFieldLevelEncryptionRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
