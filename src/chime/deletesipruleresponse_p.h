// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESIPRULERESPONSE_P_H
#define QTAWS_DELETESIPRULERESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class DeleteSipRuleResponse;

class DeleteSipRuleResponsePrivate : public ChimeResponsePrivate {

public:

    explicit DeleteSipRuleResponsePrivate(DeleteSipRuleResponse * const q);

    void parseDeleteSipRuleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteSipRuleResponse)
    Q_DISABLE_COPY(DeleteSipRuleResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
