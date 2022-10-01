// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSIPRULERESPONSE_P_H
#define QTAWS_GETSIPRULERESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class GetSipRuleResponse;

class GetSipRuleResponsePrivate : public ChimeResponsePrivate {

public:

    explicit GetSipRuleResponsePrivate(GetSipRuleResponse * const q);

    void parseGetSipRuleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetSipRuleResponse)
    Q_DISABLE_COPY(GetSipRuleResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
