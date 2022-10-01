// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_POLLFORACTIVITYTASKRESPONSE_P_H
#define QTAWS_POLLFORACTIVITYTASKRESPONSE_P_H

#include "swfresponse_p.h"

namespace QtAws {
namespace Swf {

class PollForActivityTaskResponse;

class PollForActivityTaskResponsePrivate : public SwfResponsePrivate {

public:

    explicit PollForActivityTaskResponsePrivate(PollForActivityTaskResponse * const q);

    void parsePollForActivityTaskResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PollForActivityTaskResponse)
    Q_DISABLE_COPY(PollForActivityTaskResponsePrivate)

};

} // namespace Swf
} // namespace QtAws

#endif
