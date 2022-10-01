// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFIELDLEVELENCRYPTIONPROFILEREQUEST_P_H
#define QTAWS_CREATEFIELDLEVELENCRYPTIONPROFILEREQUEST_P_H

#include "cloudfrontrequest_p.h"
#include "createfieldlevelencryptionprofilerequest.h"

namespace QtAws {
namespace CloudFront {

class CreateFieldLevelEncryptionProfileRequest;

class CreateFieldLevelEncryptionProfileRequestPrivate : public CloudFrontRequestPrivate {

public:
    CreateFieldLevelEncryptionProfileRequestPrivate(const CloudFrontRequest::Action action,
                                   CreateFieldLevelEncryptionProfileRequest * const q);
    CreateFieldLevelEncryptionProfileRequestPrivate(const CreateFieldLevelEncryptionProfileRequestPrivate &other,
                                   CreateFieldLevelEncryptionProfileRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateFieldLevelEncryptionProfileRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
