// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GENERATEDATAKEYPAIRWITHOUTPLAINTEXTRESPONSE_P_H
#define QTAWS_GENERATEDATAKEYPAIRWITHOUTPLAINTEXTRESPONSE_P_H

#include "kmsresponse_p.h"

namespace QtAws {
namespace Kms {

class GenerateDataKeyPairWithoutPlaintextResponse;

class GenerateDataKeyPairWithoutPlaintextResponsePrivate : public KmsResponsePrivate {

public:

    explicit GenerateDataKeyPairWithoutPlaintextResponsePrivate(GenerateDataKeyPairWithoutPlaintextResponse * const q);

    void parseGenerateDataKeyPairWithoutPlaintextResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GenerateDataKeyPairWithoutPlaintextResponse)
    Q_DISABLE_COPY(GenerateDataKeyPairWithoutPlaintextResponsePrivate)

};

} // namespace Kms
} // namespace QtAws

#endif
