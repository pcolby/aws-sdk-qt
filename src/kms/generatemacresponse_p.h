// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GENERATEMACRESPONSE_P_H
#define QTAWS_GENERATEMACRESPONSE_P_H

#include "kmsresponse_p.h"

namespace QtAws {
namespace Kms {

class GenerateMacResponse;

class GenerateMacResponsePrivate : public KmsResponsePrivate {

public:

    explicit GenerateMacResponsePrivate(GenerateMacResponse * const q);

    void parseGenerateMacResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GenerateMacResponse)
    Q_DISABLE_COPY(GenerateMacResponsePrivate)

};

} // namespace Kms
} // namespace QtAws

#endif
