// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_VERIFYRESPONSE_P_H
#define QTAWS_VERIFYRESPONSE_P_H

#include "kmsresponse_p.h"

namespace QtAws {
namespace Kms {

class VerifyResponse;

class VerifyResponsePrivate : public KmsResponsePrivate {

public:

    explicit VerifyResponsePrivate(VerifyResponse * const q);

    void parseVerifyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(VerifyResponse)
    Q_DISABLE_COPY(VerifyResponsePrivate)

};

} // namespace Kms
} // namespace QtAws

#endif
