// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTKEYPOLICYREQUEST_H
#define QTAWS_PUTKEYPOLICYREQUEST_H

#include "kmsrequest.h"

namespace QtAws {
namespace Kms {

class PutKeyPolicyRequestPrivate;

class QTAWSKMS_EXPORT PutKeyPolicyRequest : public KmsRequest {

public:
    PutKeyPolicyRequest(const PutKeyPolicyRequest &other);
    PutKeyPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutKeyPolicyRequest)

};

} // namespace Kms
} // namespace QtAws

#endif
