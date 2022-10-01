// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFIELDLEVELENCRYPTIONPROFILEREQUEST_H
#define QTAWS_DELETEFIELDLEVELENCRYPTIONPROFILEREQUEST_H

#include "cloudfrontrequest.h"

namespace QtAws {
namespace CloudFront {

class DeleteFieldLevelEncryptionProfileRequestPrivate;

class QTAWSCLOUDFRONT_EXPORT DeleteFieldLevelEncryptionProfileRequest : public CloudFrontRequest {

public:
    DeleteFieldLevelEncryptionProfileRequest(const DeleteFieldLevelEncryptionProfileRequest &other);
    DeleteFieldLevelEncryptionProfileRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteFieldLevelEncryptionProfileRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
