// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESPONDACTIVITYTASKCANCELEDRESPONSE_P_H
#define QTAWS_RESPONDACTIVITYTASKCANCELEDRESPONSE_P_H

#include "swfresponse_p.h"

namespace QtAws {
namespace Swf {

class RespondActivityTaskCanceledResponse;

class RespondActivityTaskCanceledResponsePrivate : public SwfResponsePrivate {

public:

    explicit RespondActivityTaskCanceledResponsePrivate(RespondActivityTaskCanceledResponse * const q);

    void parseRespondActivityTaskCanceledResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RespondActivityTaskCanceledResponse)
    Q_DISABLE_COPY(RespondActivityTaskCanceledResponsePrivate)

};

} // namespace Swf
} // namespace QtAws

#endif
