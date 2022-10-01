// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTKMSENCRYPTIONKEYRESPONSE_H
#define QTAWS_PUTKMSENCRYPTIONKEYRESPONSE_H

#include "frauddetectorresponse.h"
#include "putkmsencryptionkeyrequest.h"

namespace QtAws {
namespace FraudDetector {

class PutKMSEncryptionKeyResponsePrivate;

class QTAWSFRAUDDETECTOR_EXPORT PutKMSEncryptionKeyResponse : public FraudDetectorResponse {
    Q_OBJECT

public:
    PutKMSEncryptionKeyResponse(const PutKMSEncryptionKeyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutKMSEncryptionKeyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutKMSEncryptionKeyResponse)
    Q_DISABLE_COPY(PutKMSEncryptionKeyResponse)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
