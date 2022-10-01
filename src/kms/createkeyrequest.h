// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEKEYREQUEST_H
#define QTAWS_CREATEKEYREQUEST_H

#include "kmsrequest.h"

namespace QtAws {
namespace Kms {

class CreateKeyRequestPrivate;

class QTAWSKMS_EXPORT CreateKeyRequest : public KmsRequest {

public:
    CreateKeyRequest(const CreateKeyRequest &other);
    CreateKeyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateKeyRequest)

};

} // namespace Kms
} // namespace QtAws

#endif
