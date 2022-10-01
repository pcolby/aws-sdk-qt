// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_VERIFYMACRESPONSE_P_H
#define QTAWS_VERIFYMACRESPONSE_P_H

#include "kmsresponse_p.h"

namespace QtAws {
namespace Kms {

class VerifyMacResponse;

class VerifyMacResponsePrivate : public KmsResponsePrivate {

public:

    explicit VerifyMacResponsePrivate(VerifyMacResponse * const q);

    void parseVerifyMacResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(VerifyMacResponse)
    Q_DISABLE_COPY(VerifyMacResponsePrivate)

};

} // namespace Kms
} // namespace QtAws

#endif
