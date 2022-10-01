// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTKMSENCRYPTIONKEYREQUEST_H
#define QTAWS_PUTKMSENCRYPTIONKEYREQUEST_H

#include "frauddetectorrequest.h"

namespace QtAws {
namespace FraudDetector {

class PutKMSEncryptionKeyRequestPrivate;

class QTAWSFRAUDDETECTOR_EXPORT PutKMSEncryptionKeyRequest : public FraudDetectorRequest {

public:
    PutKMSEncryptionKeyRequest(const PutKMSEncryptionKeyRequest &other);
    PutKMSEncryptionKeyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutKMSEncryptionKeyRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
