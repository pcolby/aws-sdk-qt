// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGENERATESECURITYTOKENRESPONSE_P_H
#define QTAWS_REGENERATESECURITYTOKENRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class RegenerateSecurityTokenResponse;

class RegenerateSecurityTokenResponsePrivate : public ChimeResponsePrivate {

public:

    explicit RegenerateSecurityTokenResponsePrivate(RegenerateSecurityTokenResponse * const q);

    void parseRegenerateSecurityTokenResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RegenerateSecurityTokenResponse)
    Q_DISABLE_COPY(RegenerateSecurityTokenResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
