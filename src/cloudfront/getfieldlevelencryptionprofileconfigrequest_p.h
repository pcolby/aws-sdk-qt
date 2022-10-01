// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFIELDLEVELENCRYPTIONPROFILECONFIGREQUEST_P_H
#define QTAWS_GETFIELDLEVELENCRYPTIONPROFILECONFIGREQUEST_P_H

#include "cloudfrontrequest_p.h"
#include "getfieldlevelencryptionprofileconfigrequest.h"

namespace QtAws {
namespace CloudFront {

class GetFieldLevelEncryptionProfileConfigRequest;

class GetFieldLevelEncryptionProfileConfigRequestPrivate : public CloudFrontRequestPrivate {

public:
    GetFieldLevelEncryptionProfileConfigRequestPrivate(const CloudFrontRequest::Action action,
                                   GetFieldLevelEncryptionProfileConfigRequest * const q);
    GetFieldLevelEncryptionProfileConfigRequestPrivate(const GetFieldLevelEncryptionProfileConfigRequestPrivate &other,
                                   GetFieldLevelEncryptionProfileConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetFieldLevelEncryptionProfileConfigRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
