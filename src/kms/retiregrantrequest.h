// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RETIREGRANTREQUEST_H
#define QTAWS_RETIREGRANTREQUEST_H

#include "kmsrequest.h"

namespace QtAws {
namespace Kms {

class RetireGrantRequestPrivate;

class QTAWSKMS_EXPORT RetireGrantRequest : public KmsRequest {

public:
    RetireGrantRequest(const RetireGrantRequest &other);
    RetireGrantRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RetireGrantRequest)

};

} // namespace Kms
} // namespace QtAws

#endif
