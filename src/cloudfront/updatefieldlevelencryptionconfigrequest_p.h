// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFIELDLEVELENCRYPTIONCONFIGREQUEST_P_H
#define QTAWS_UPDATEFIELDLEVELENCRYPTIONCONFIGREQUEST_P_H

#include "cloudfrontrequest_p.h"
#include "updatefieldlevelencryptionconfigrequest.h"

namespace QtAws {
namespace CloudFront {

class UpdateFieldLevelEncryptionConfigRequest;

class UpdateFieldLevelEncryptionConfigRequestPrivate : public CloudFrontRequestPrivate {

public:
    UpdateFieldLevelEncryptionConfigRequestPrivate(const CloudFrontRequest::Action action,
                                   UpdateFieldLevelEncryptionConfigRequest * const q);
    UpdateFieldLevelEncryptionConfigRequestPrivate(const UpdateFieldLevelEncryptionConfigRequestPrivate &other,
                                   UpdateFieldLevelEncryptionConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateFieldLevelEncryptionConfigRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
