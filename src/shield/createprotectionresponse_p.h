// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPROTECTIONRESPONSE_P_H
#define QTAWS_CREATEPROTECTIONRESPONSE_P_H

#include "shieldresponse_p.h"

namespace QtAws {
namespace Shield {

class CreateProtectionResponse;

class CreateProtectionResponsePrivate : public ShieldResponsePrivate {

public:

    explicit CreateProtectionResponsePrivate(CreateProtectionResponse * const q);

    void parseCreateProtectionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateProtectionResponse)
    Q_DISABLE_COPY(CreateProtectionResponsePrivate)

};

} // namespace Shield
} // namespace QtAws

#endif
