// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESPONDDECISIONTASKCOMPLETEDRESPONSE_P_H
#define QTAWS_RESPONDDECISIONTASKCOMPLETEDRESPONSE_P_H

#include "swfresponse_p.h"

namespace QtAws {
namespace Swf {

class RespondDecisionTaskCompletedResponse;

class RespondDecisionTaskCompletedResponsePrivate : public SwfResponsePrivate {

public:

    explicit RespondDecisionTaskCompletedResponsePrivate(RespondDecisionTaskCompletedResponse * const q);

    void parseRespondDecisionTaskCompletedResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RespondDecisionTaskCompletedResponse)
    Q_DISABLE_COPY(RespondDecisionTaskCompletedResponsePrivate)

};

} // namespace Swf
} // namespace QtAws

#endif
