// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEKEYSIGNINGKEYREQUEST_H
#define QTAWS_CREATEKEYSIGNINGKEYREQUEST_H

#include "route53request.h"

namespace QtAws {
namespace Route53 {

class CreateKeySigningKeyRequestPrivate;

class QTAWSROUTE53_EXPORT CreateKeySigningKeyRequest : public Route53Request {

public:
    CreateKeySigningKeyRequest(const CreateKeySigningKeyRequest &other);
    CreateKeySigningKeyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateKeySigningKeyRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
