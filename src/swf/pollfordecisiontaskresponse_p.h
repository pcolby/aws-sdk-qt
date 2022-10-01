// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_POLLFORDECISIONTASKRESPONSE_P_H
#define QTAWS_POLLFORDECISIONTASKRESPONSE_P_H

#include "swfresponse_p.h"

namespace QtAws {
namespace Swf {

class PollForDecisionTaskResponse;

class PollForDecisionTaskResponsePrivate : public SwfResponsePrivate {

public:

    explicit PollForDecisionTaskResponsePrivate(PollForDecisionTaskResponse * const q);

    void parsePollForDecisionTaskResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PollForDecisionTaskResponse)
    Q_DISABLE_COPY(PollForDecisionTaskResponsePrivate)

};

} // namespace Swf
} // namespace QtAws

#endif
