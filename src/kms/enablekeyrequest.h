// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEKEYREQUEST_H
#define QTAWS_ENABLEKEYREQUEST_H

#include "kmsrequest.h"

namespace QtAws {
namespace Kms {

class EnableKeyRequestPrivate;

class QTAWSKMS_EXPORT EnableKeyRequest : public KmsRequest {

public:
    EnableKeyRequest(const EnableKeyRequest &other);
    EnableKeyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EnableKeyRequest)

};

} // namespace Kms
} // namespace QtAws

#endif
