// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENCRYPTREQUEST_H
#define QTAWS_ENCRYPTREQUEST_H

#include "kmsrequest.h"

namespace QtAws {
namespace Kms {

class EncryptRequestPrivate;

class QTAWSKMS_EXPORT EncryptRequest : public KmsRequest {

public:
    EncryptRequest(const EncryptRequest &other);
    EncryptRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EncryptRequest)

};

} // namespace Kms
} // namespace QtAws

#endif
