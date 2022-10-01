// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTKMSENCRYPTIONKEYRESPONSE_P_H
#define QTAWS_PUTKMSENCRYPTIONKEYRESPONSE_P_H

#include "frauddetectorresponse_p.h"

namespace QtAws {
namespace FraudDetector {

class PutKMSEncryptionKeyResponse;

class PutKMSEncryptionKeyResponsePrivate : public FraudDetectorResponsePrivate {

public:

    explicit PutKMSEncryptionKeyResponsePrivate(PutKMSEncryptionKeyResponse * const q);

    void parsePutKMSEncryptionKeyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutKMSEncryptionKeyResponse)
    Q_DISABLE_COPY(PutKMSEncryptionKeyResponsePrivate)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
