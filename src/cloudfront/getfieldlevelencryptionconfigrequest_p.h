// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFIELDLEVELENCRYPTIONCONFIGREQUEST_P_H
#define QTAWS_GETFIELDLEVELENCRYPTIONCONFIGREQUEST_P_H

#include "cloudfrontrequest_p.h"
#include "getfieldlevelencryptionconfigrequest.h"

namespace QtAws {
namespace CloudFront {

class GetFieldLevelEncryptionConfigRequest;

class GetFieldLevelEncryptionConfigRequestPrivate : public CloudFrontRequestPrivate {

public:
    GetFieldLevelEncryptionConfigRequestPrivate(const CloudFrontRequest::Action action,
                                   GetFieldLevelEncryptionConfigRequest * const q);
    GetFieldLevelEncryptionConfigRequestPrivate(const GetFieldLevelEncryptionConfigRequestPrivate &other,
                                   GetFieldLevelEncryptionConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetFieldLevelEncryptionConfigRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
