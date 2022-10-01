// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FINALIZECUTOVERRESPONSE_P_H
#define QTAWS_FINALIZECUTOVERRESPONSE_P_H

#include "mgnresponse_p.h"

namespace QtAws {
namespace Mgn {

class FinalizeCutoverResponse;

class FinalizeCutoverResponsePrivate : public MgnResponsePrivate {

public:

    explicit FinalizeCutoverResponsePrivate(FinalizeCutoverResponse * const q);

    void parseFinalizeCutoverResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(FinalizeCutoverResponse)
    Q_DISABLE_COPY(FinalizeCutoverResponsePrivate)

};

} // namespace Mgn
} // namespace QtAws

#endif
