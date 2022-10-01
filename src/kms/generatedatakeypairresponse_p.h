// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GENERATEDATAKEYPAIRRESPONSE_P_H
#define QTAWS_GENERATEDATAKEYPAIRRESPONSE_P_H

#include "kmsresponse_p.h"

namespace QtAws {
namespace Kms {

class GenerateDataKeyPairResponse;

class GenerateDataKeyPairResponsePrivate : public KmsResponsePrivate {

public:

    explicit GenerateDataKeyPairResponsePrivate(GenerateDataKeyPairResponse * const q);

    void parseGenerateDataKeyPairResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GenerateDataKeyPairResponse)
    Q_DISABLE_COPY(GenerateDataKeyPairResponsePrivate)

};

} // namespace Kms
} // namespace QtAws

#endif
