// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFIELDLEVELENCRYPTIONPROFILEREQUEST_P_H
#define QTAWS_UPDATEFIELDLEVELENCRYPTIONPROFILEREQUEST_P_H

#include "cloudfrontrequest_p.h"
#include "updatefieldlevelencryptionprofilerequest.h"

namespace QtAws {
namespace CloudFront {

class UpdateFieldLevelEncryptionProfileRequest;

class UpdateFieldLevelEncryptionProfileRequestPrivate : public CloudFrontRequestPrivate {

public:
    UpdateFieldLevelEncryptionProfileRequestPrivate(const CloudFrontRequest::Action action,
                                   UpdateFieldLevelEncryptionProfileRequest * const q);
    UpdateFieldLevelEncryptionProfileRequestPrivate(const UpdateFieldLevelEncryptionProfileRequestPrivate &other,
                                   UpdateFieldLevelEncryptionProfileRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateFieldLevelEncryptionProfileRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
