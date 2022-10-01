// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONNECTCUSTOMKEYSTOREREQUEST_H
#define QTAWS_CONNECTCUSTOMKEYSTOREREQUEST_H

#include "kmsrequest.h"

namespace QtAws {
namespace Kms {

class ConnectCustomKeyStoreRequestPrivate;

class QTAWSKMS_EXPORT ConnectCustomKeyStoreRequest : public KmsRequest {

public:
    ConnectCustomKeyStoreRequest(const ConnectCustomKeyStoreRequest &other);
    ConnectCustomKeyStoreRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ConnectCustomKeyStoreRequest)

};

} // namespace Kms
} // namespace QtAws

#endif
