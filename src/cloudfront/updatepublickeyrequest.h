// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPUBLICKEYREQUEST_H
#define QTAWS_UPDATEPUBLICKEYREQUEST_H

#include "cloudfrontrequest.h"

namespace QtAws {
namespace CloudFront {

class UpdatePublicKeyRequestPrivate;

class QTAWSCLOUDFRONT_EXPORT UpdatePublicKeyRequest : public CloudFrontRequest {

public:
    UpdatePublicKeyRequest(const UpdatePublicKeyRequest &other);
    UpdatePublicKeyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdatePublicKeyRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
