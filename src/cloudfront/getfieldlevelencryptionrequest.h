// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFIELDLEVELENCRYPTIONREQUEST_H
#define QTAWS_GETFIELDLEVELENCRYPTIONREQUEST_H

#include "cloudfrontrequest.h"

namespace QtAws {
namespace CloudFront {

class GetFieldLevelEncryptionRequestPrivate;

class QTAWSCLOUDFRONT_EXPORT GetFieldLevelEncryptionRequest : public CloudFrontRequest {

public:
    GetFieldLevelEncryptionRequest(const GetFieldLevelEncryptionRequest &other);
    GetFieldLevelEncryptionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetFieldLevelEncryptionRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
