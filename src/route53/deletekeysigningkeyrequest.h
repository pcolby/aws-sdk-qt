// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEKEYSIGNINGKEYREQUEST_H
#define QTAWS_DELETEKEYSIGNINGKEYREQUEST_H

#include "route53request.h"

namespace QtAws {
namespace Route53 {

class DeleteKeySigningKeyRequestPrivate;

class QTAWSROUTE53_EXPORT DeleteKeySigningKeyRequest : public Route53Request {

public:
    DeleteKeySigningKeyRequest(const DeleteKeySigningKeyRequest &other);
    DeleteKeySigningKeyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteKeySigningKeyRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
