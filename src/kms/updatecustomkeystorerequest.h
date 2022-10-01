// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECUSTOMKEYSTOREREQUEST_H
#define QTAWS_UPDATECUSTOMKEYSTOREREQUEST_H

#include "kmsrequest.h"

namespace QtAws {
namespace Kms {

class UpdateCustomKeyStoreRequestPrivate;

class QTAWSKMS_EXPORT UpdateCustomKeyStoreRequest : public KmsRequest {

public:
    UpdateCustomKeyStoreRequest(const UpdateCustomKeyStoreRequest &other);
    UpdateCustomKeyStoreRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateCustomKeyStoreRequest)

};

} // namespace Kms
} // namespace QtAws

#endif
