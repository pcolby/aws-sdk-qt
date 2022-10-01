// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTCUTOVERRESPONSE_P_H
#define QTAWS_STARTCUTOVERRESPONSE_P_H

#include "mgnresponse_p.h"

namespace QtAws {
namespace Mgn {

class StartCutoverResponse;

class StartCutoverResponsePrivate : public MgnResponsePrivate {

public:

    explicit StartCutoverResponsePrivate(StartCutoverResponse * const q);

    void parseStartCutoverResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartCutoverResponse)
    Q_DISABLE_COPY(StartCutoverResponsePrivate)

};

} // namespace Mgn
} // namespace QtAws

#endif
