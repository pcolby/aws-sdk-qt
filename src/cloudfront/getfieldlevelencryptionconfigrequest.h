// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFIELDLEVELENCRYPTIONCONFIGREQUEST_H
#define QTAWS_GETFIELDLEVELENCRYPTIONCONFIGREQUEST_H

#include "cloudfrontrequest.h"

namespace QtAws {
namespace CloudFront {

class GetFieldLevelEncryptionConfigRequestPrivate;

class QTAWSCLOUDFRONT_EXPORT GetFieldLevelEncryptionConfigRequest : public CloudFrontRequest {

public:
    GetFieldLevelEncryptionConfigRequest(const GetFieldLevelEncryptionConfigRequest &other);
    GetFieldLevelEncryptionConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetFieldLevelEncryptionConfigRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
