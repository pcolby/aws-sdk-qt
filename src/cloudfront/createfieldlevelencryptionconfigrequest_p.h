// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFIELDLEVELENCRYPTIONCONFIGREQUEST_P_H
#define QTAWS_CREATEFIELDLEVELENCRYPTIONCONFIGREQUEST_P_H

#include "cloudfrontrequest_p.h"
#include "createfieldlevelencryptionconfigrequest.h"

namespace QtAws {
namespace CloudFront {

class CreateFieldLevelEncryptionConfigRequest;

class CreateFieldLevelEncryptionConfigRequestPrivate : public CloudFrontRequestPrivate {

public:
    CreateFieldLevelEncryptionConfigRequestPrivate(const CloudFrontRequest::Action action,
                                   CreateFieldLevelEncryptionConfigRequest * const q);
    CreateFieldLevelEncryptionConfigRequestPrivate(const CreateFieldLevelEncryptionConfigRequestPrivate &other,
                                   CreateFieldLevelEncryptionConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateFieldLevelEncryptionConfigRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
