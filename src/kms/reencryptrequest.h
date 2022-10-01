// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REENCRYPTREQUEST_H
#define QTAWS_REENCRYPTREQUEST_H

#include "kmsrequest.h"

namespace QtAws {
namespace Kms {

class ReEncryptRequestPrivate;

class QTAWSKMS_EXPORT ReEncryptRequest : public KmsRequest {

public:
    ReEncryptRequest(const ReEncryptRequest &other);
    ReEncryptRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ReEncryptRequest)

};

} // namespace Kms
} // namespace QtAws

#endif
