// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESIPRULERESPONSE_P_H
#define QTAWS_UPDATESIPRULERESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class UpdateSipRuleResponse;

class UpdateSipRuleResponsePrivate : public ChimeResponsePrivate {

public:

    explicit UpdateSipRuleResponsePrivate(UpdateSipRuleResponse * const q);

    void parseUpdateSipRuleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateSipRuleResponse)
    Q_DISABLE_COPY(UpdateSipRuleResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
