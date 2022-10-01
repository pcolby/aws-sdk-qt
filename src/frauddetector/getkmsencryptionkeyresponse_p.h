// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETKMSENCRYPTIONKEYRESPONSE_P_H
#define QTAWS_GETKMSENCRYPTIONKEYRESPONSE_P_H

#include "frauddetectorresponse_p.h"

namespace QtAws {
namespace FraudDetector {

class GetKMSEncryptionKeyResponse;

class GetKMSEncryptionKeyResponsePrivate : public FraudDetectorResponsePrivate {

public:

    explicit GetKMSEncryptionKeyResponsePrivate(GetKMSEncryptionKeyResponse * const q);

    void parseGetKMSEncryptionKeyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetKMSEncryptionKeyResponse)
    Q_DISABLE_COPY(GetKMSEncryptionKeyResponsePrivate)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
