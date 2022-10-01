// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTKMSENCRYPTIONKEYREQUEST_P_H
#define QTAWS_PUTKMSENCRYPTIONKEYREQUEST_P_H

#include "frauddetectorrequest_p.h"
#include "putkmsencryptionkeyrequest.h"

namespace QtAws {
namespace FraudDetector {

class PutKMSEncryptionKeyRequest;

class PutKMSEncryptionKeyRequestPrivate : public FraudDetectorRequestPrivate {

public:
    PutKMSEncryptionKeyRequestPrivate(const FraudDetectorRequest::Action action,
                                   PutKMSEncryptionKeyRequest * const q);
    PutKMSEncryptionKeyRequestPrivate(const PutKMSEncryptionKeyRequestPrivate &other,
                                   PutKMSEncryptionKeyRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutKMSEncryptionKeyRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
