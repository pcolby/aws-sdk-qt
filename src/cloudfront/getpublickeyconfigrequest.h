// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPUBLICKEYCONFIGREQUEST_H
#define QTAWS_GETPUBLICKEYCONFIGREQUEST_H

#include "cloudfrontrequest.h"

namespace QtAws {
namespace CloudFront {

class GetPublicKeyConfigRequestPrivate;

class QTAWSCLOUDFRONT_EXPORT GetPublicKeyConfigRequest : public CloudFrontRequest {

public:
    GetPublicKeyConfigRequest(const GetPublicKeyConfigRequest &other);
    GetPublicKeyConfigRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetPublicKeyConfigRequest)

};

} // namespace CloudFront
} // namespace QtAws

#endif
