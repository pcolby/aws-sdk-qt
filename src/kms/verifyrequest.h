// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_VERIFYREQUEST_H
#define QTAWS_VERIFYREQUEST_H

#include "kmsrequest.h"

namespace QtAws {
namespace Kms {

class VerifyRequestPrivate;

class QTAWSKMS_EXPORT VerifyRequest : public KmsRequest {

public:
    VerifyRequest(const VerifyRequest &other);
    VerifyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(VerifyRequest)

};

} // namespace Kms
} // namespace QtAws

#endif
