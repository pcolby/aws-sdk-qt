// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESIPRULERESPONSE_P_H
#define QTAWS_CREATESIPRULERESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class CreateSipRuleResponse;

class CreateSipRuleResponsePrivate : public ChimeResponsePrivate {

public:

    explicit CreateSipRuleResponsePrivate(CreateSipRuleResponse * const q);

    void parseCreateSipRuleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateSipRuleResponse)
    Q_DISABLE_COPY(CreateSipRuleResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
