// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFIELDLEVELENCRYPTIONCONFIGREQUEST_H
#define QTAWS_DELETEFIELDLEVELENCRYPTIONCONFIGREQUEST_H

#include "cloudfrontrequest.h"

namespace QtAws {
namespace CloudFront {

class DeleteFieldLevelEncryptionConfigRequestPrivate;

class QTAWSCLOUDFRONT_EXPORT DeleteFieldLevelEncryptionConfigRequest : public CloudFrontRequest {

public:
    DeleteFieldLevelEncryptionConfigRequest(const DeleteFieldLevelEncryptionConfigRequest &other);
    DeleteFieldLevelEncryptionConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteFieldLevelEncryptionConfigRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
