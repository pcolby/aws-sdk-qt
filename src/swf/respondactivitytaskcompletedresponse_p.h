// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESPONDACTIVITYTASKCOMPLETEDRESPONSE_P_H
#define QTAWS_RESPONDACTIVITYTASKCOMPLETEDRESPONSE_P_H

#include "swfresponse_p.h"

namespace QtAws {
namespace Swf {

class RespondActivityTaskCompletedResponse;

class RespondActivityTaskCompletedResponsePrivate : public SwfResponsePrivate {

public:

    explicit RespondActivityTaskCompletedResponsePrivate(RespondActivityTaskCompletedResponse * const q);

    void parseRespondActivityTaskCompletedResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RespondActivityTaskCompletedResponse)
    Q_DISABLE_COPY(RespondActivityTaskCompletedResponsePrivate)

};

} // namespace Swf
} // namespace QtAws

#endif
