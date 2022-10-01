// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REPLICATEKEYREQUEST_H
#define QTAWS_REPLICATEKEYREQUEST_H

#include "kmsrequest.h"

namespace QtAws {
namespace Kms {

class ReplicateKeyRequestPrivate;

class QTAWSKMS_EXPORT ReplicateKeyRequest : public KmsRequest {

public:
    ReplicateKeyRequest(const ReplicateKeyRequest &other);
    ReplicateKeyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ReplicateKeyRequest)

};

} // namespace Kms
} // namespace QtAws

#endif
