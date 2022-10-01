// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFIELDLEVELENCRYPTIONPROFILEREQUEST_H
#define QTAWS_UPDATEFIELDLEVELENCRYPTIONPROFILEREQUEST_H

#include "cloudfrontrequest.h"

namespace QtAws {
namespace CloudFront {

class UpdateFieldLevelEncryptionProfileRequestPrivate;

class QTAWSCLOUDFRONT_EXPORT UpdateFieldLevelEncryptionProfileRequest : public CloudFrontRequest {

public:
    UpdateFieldLevelEncryptionProfileRequest(const UpdateFieldLevelEncryptionProfileRequest &other);
    UpdateFieldLevelEncryptionProfileRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateFieldLevelEncryptionProfileRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
