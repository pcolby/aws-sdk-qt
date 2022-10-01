// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DECRYPTREQUEST_H
#define QTAWS_DECRYPTREQUEST_H

#include "kmsrequest.h"

namespace QtAws {
namespace Kms {

class DecryptRequestPrivate;

class QTAWSKMS_EXPORT DecryptRequest : public KmsRequest {

public:
    DecryptRequest(const DecryptRequest &other);
    DecryptRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DecryptRequest)

};

} // namespace Kms
} // namespace QtAws

#endif
