// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESETPERSONALPINRESPONSE_P_H
#define QTAWS_RESETPERSONALPINRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class ResetPersonalPINResponse;

class ResetPersonalPINResponsePrivate : public ChimeResponsePrivate {

public:

    explicit ResetPersonalPINResponsePrivate(ResetPersonalPINResponse * const q);

    void parseResetPersonalPINResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ResetPersonalPINResponse)
    Q_DISABLE_COPY(ResetPersonalPINResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
