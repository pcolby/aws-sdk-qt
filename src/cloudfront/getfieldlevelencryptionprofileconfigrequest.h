// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFIELDLEVELENCRYPTIONPROFILECONFIGREQUEST_H
#define QTAWS_GETFIELDLEVELENCRYPTIONPROFILECONFIGREQUEST_H

#include "cloudfrontrequest.h"

namespace QtAws {
namespace CloudFront {

class GetFieldLevelEncryptionProfileConfigRequestPrivate;

class QTAWSCLOUDFRONT_EXPORT GetFieldLevelEncryptionProfileConfigRequest : public CloudFrontRequest {

public:
    GetFieldLevelEncryptionProfileConfigRequest(const GetFieldLevelEncryptionProfileConfigRequest &other);
    GetFieldLevelEncryptionProfileConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetFieldLevelEncryptionProfileConfigRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
