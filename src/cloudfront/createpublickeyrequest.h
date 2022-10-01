// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPUBLICKEYREQUEST_H
#define QTAWS_CREATEPUBLICKEYREQUEST_H

#include "cloudfrontrequest.h"

namespace QtAws {
namespace CloudFront {

class CreatePublicKeyRequestPrivate;

class QTAWSCLOUDFRONT_EXPORT CreatePublicKeyRequest : public CloudFrontRequest {

public:
    CreatePublicKeyRequest(const CreatePublicKeyRequest &other);
    CreatePublicKeyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreatePublicKeyRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
