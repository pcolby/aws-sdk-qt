// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GENERATERANDOMRESPONSE_P_H
#define QTAWS_GENERATERANDOMRESPONSE_P_H

#include "kmsresponse_p.h"

namespace QtAws {
namespace Kms {

class GenerateRandomResponse;

class GenerateRandomResponsePrivate : public KmsResponsePrivate {

public:

    explicit GenerateRandomResponsePrivate(GenerateRandomResponse * const q);

    void parseGenerateRandomResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GenerateRandomResponse)
    Q_DISABLE_COPY(GenerateRandomResponsePrivate)

};

} // namespace Kms
} // namespace QtAws

#endif
