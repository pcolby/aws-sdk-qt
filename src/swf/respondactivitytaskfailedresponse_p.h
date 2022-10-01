// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESPONDACTIVITYTASKFAILEDRESPONSE_P_H
#define QTAWS_RESPONDACTIVITYTASKFAILEDRESPONSE_P_H

#include "swfresponse_p.h"

namespace QtAws {
namespace Swf {

class RespondActivityTaskFailedResponse;

class RespondActivityTaskFailedResponsePrivate : public SwfResponsePrivate {

public:

    explicit RespondActivityTaskFailedResponsePrivate(RespondActivityTaskFailedResponse * const q);

    void parseRespondActivityTaskFailedResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RespondActivityTaskFailedResponse)
    Q_DISABLE_COPY(RespondActivityTaskFailedResponsePrivate)

};

} // namespace Swf
} // namespace QtAws

#endif
