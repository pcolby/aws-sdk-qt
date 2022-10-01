// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPUBLICKEYREQUEST_H
#define QTAWS_GETPUBLICKEYREQUEST_H

#include "kmsrequest.h"

namespace QtAws {
namespace Kms {

class GetPublicKeyRequestPrivate;

class QTAWSKMS_EXPORT GetPublicKeyRequest : public KmsRequest {

public:
    GetPublicKeyRequest(const GetPublicKeyRequest &other);
    GetPublicKeyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetPublicKeyRequest)

};

} // namespace Kms
} // namespace QtAws

#endif
