// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFIELDLEVELENCRYPTIONPROFILEREQUEST_P_H
#define QTAWS_DELETEFIELDLEVELENCRYPTIONPROFILEREQUEST_P_H

#include "cloudfrontrequest_p.h"
#include "deletefieldlevelencryptionprofilerequest.h"

namespace QtAws {
namespace CloudFront {

class DeleteFieldLevelEncryptionProfileRequest;

class DeleteFieldLevelEncryptionProfileRequestPrivate : public CloudFrontRequestPrivate {

public:
    DeleteFieldLevelEncryptionProfileRequestPrivate(const CloudFrontRequest::Action action,
                                   DeleteFieldLevelEncryptionProfileRequest * const q);
    DeleteFieldLevelEncryptionProfileRequestPrivate(const DeleteFieldLevelEncryptionProfileRequestPrivate &other,
                                   DeleteFieldLevelEncryptionProfileRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteFieldLevelEncryptionProfileRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
