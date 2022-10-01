// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEACTIVATEKEYSIGNINGKEYREQUEST_H
#define QTAWS_DEACTIVATEKEYSIGNINGKEYREQUEST_H

#include "route53request.h"

namespace QtAws {
namespace Route53 {

class DeactivateKeySigningKeyRequestPrivate;

class QTAWSROUTE53_EXPORT DeactivateKeySigningKeyRequest : public Route53Request {

public:
    DeactivateKeySigningKeyRequest(const DeactivateKeySigningKeyRequest &other);
    DeactivateKeySigningKeyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeactivateKeySigningKeyRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
