// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACTIVATEKEYSIGNINGKEYREQUEST_H
#define QTAWS_ACTIVATEKEYSIGNINGKEYREQUEST_H

#include "route53request.h"

namespace QtAws {
namespace Route53 {

class ActivateKeySigningKeyRequestPrivate;

class QTAWSROUTE53_EXPORT ActivateKeySigningKeyRequest : public Route53Request {

public:
    ActivateKeySigningKeyRequest(const ActivateKeySigningKeyRequest &other);
    ActivateKeySigningKeyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ActivateKeySigningKeyRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
