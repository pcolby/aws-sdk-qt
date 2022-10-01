// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GENERATEDATAKEYRESPONSE_P_H
#define QTAWS_GENERATEDATAKEYRESPONSE_P_H

#include "kmsresponse_p.h"

namespace QtAws {
namespace Kms {

class GenerateDataKeyResponse;

class GenerateDataKeyResponsePrivate : public KmsResponsePrivate {

public:

    explicit GenerateDataKeyResponsePrivate(GenerateDataKeyResponse * const q);

    void parseGenerateDataKeyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GenerateDataKeyResponse)
    Q_DISABLE_COPY(GenerateDataKeyResponsePrivate)

};

} // namespace Kms
} // namespace QtAws

#endif
