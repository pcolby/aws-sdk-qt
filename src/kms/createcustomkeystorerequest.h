// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECUSTOMKEYSTOREREQUEST_H
#define QTAWS_CREATECUSTOMKEYSTOREREQUEST_H

#include "kmsrequest.h"

namespace QtAws {
namespace Kms {

class CreateCustomKeyStoreRequestPrivate;

class QTAWSKMS_EXPORT CreateCustomKeyStoreRequest : public KmsRequest {

public:
    CreateCustomKeyStoreRequest(const CreateCustomKeyStoreRequest &other);
    CreateCustomKeyStoreRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCustomKeyStoreRequest)

};

} // namespace Kms
} // namespace QtAws

#endif
