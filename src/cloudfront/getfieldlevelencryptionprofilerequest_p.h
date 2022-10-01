// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFIELDLEVELENCRYPTIONPROFILEREQUEST_P_H
#define QTAWS_GETFIELDLEVELENCRYPTIONPROFILEREQUEST_P_H

#include "cloudfrontrequest_p.h"
#include "getfieldlevelencryptionprofilerequest.h"

namespace QtAws {
namespace CloudFront {

class GetFieldLevelEncryptionProfileRequest;

class GetFieldLevelEncryptionProfileRequestPrivate : public CloudFrontRequestPrivate {

public:
    GetFieldLevelEncryptionProfileRequestPrivate(const CloudFrontRequest::Action action,
                                   GetFieldLevelEncryptionProfileRequest * const q);
    GetFieldLevelEncryptionProfileRequestPrivate(const GetFieldLevelEncryptionProfileRequestPrivate &other,
                                   GetFieldLevelEncryptionProfileRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetFieldLevelEncryptionProfileRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
