// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISCONNECTCUSTOMKEYSTOREREQUEST_H
#define QTAWS_DISCONNECTCUSTOMKEYSTOREREQUEST_H

#include "kmsrequest.h"

namespace QtAws {
namespace Kms {

class DisconnectCustomKeyStoreRequestPrivate;

class QTAWSKMS_EXPORT DisconnectCustomKeyStoreRequest : public KmsRequest {

public:
    DisconnectCustomKeyStoreRequest(const DisconnectCustomKeyStoreRequest &other);
    DisconnectCustomKeyStoreRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisconnectCustomKeyStoreRequest)

};

} // namespace Kms
} // namespace QtAws

#endif
