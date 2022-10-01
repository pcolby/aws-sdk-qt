// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETKMSENCRYPTIONKEYREQUEST_P_H
#define QTAWS_GETKMSENCRYPTIONKEYREQUEST_P_H

#include "frauddetectorrequest_p.h"
#include "getkmsencryptionkeyrequest.h"

namespace QtAws {
namespace FraudDetector {

class GetKMSEncryptionKeyRequest;

class GetKMSEncryptionKeyRequestPrivate : public FraudDetectorRequestPrivate {

public:
    GetKMSEncryptionKeyRequestPrivate(const FraudDetectorRequest::Action action,
                                   GetKMSEncryptionKeyRequest * const q);
    GetKMSEncryptionKeyRequestPrivate(const GetKMSEncryptionKeyRequestPrivate &other,
                                   GetKMSEncryptionKeyRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetKMSEncryptionKeyRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
