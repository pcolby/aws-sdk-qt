// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPUBLICKEYREQUEST_H
#define QTAWS_GETPUBLICKEYREQUEST_H

#include "cloudfrontrequest.h"

namespace QtAws {
namespace CloudFront {

class GetPublicKeyRequestPrivate;

class QTAWSCLOUDFRONT_EXPORT GetPublicKeyRequest : public CloudFrontRequest {

public:
    GetPublicKeyRequest(const GetPublicKeyRequest &other);
    GetPublicKeyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetPublicKeyRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
