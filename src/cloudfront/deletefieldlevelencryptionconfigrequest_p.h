// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFIELDLEVELENCRYPTIONCONFIGREQUEST_P_H
#define QTAWS_DELETEFIELDLEVELENCRYPTIONCONFIGREQUEST_P_H

#include "cloudfrontrequest_p.h"
#include "deletefieldlevelencryptionconfigrequest.h"

namespace QtAws {
namespace CloudFront {

class DeleteFieldLevelEncryptionConfigRequest;

class DeleteFieldLevelEncryptionConfigRequestPrivate : public CloudFrontRequestPrivate {

public:
    DeleteFieldLevelEncryptionConfigRequestPrivate(const CloudFrontRequest::Action action,
                                   DeleteFieldLevelEncryptionConfigRequest * const q);
    DeleteFieldLevelEncryptionConfigRequestPrivate(const DeleteFieldLevelEncryptionConfigRequestPrivate &other,
                                   DeleteFieldLevelEncryptionConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteFieldLevelEncryptionConfigRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
