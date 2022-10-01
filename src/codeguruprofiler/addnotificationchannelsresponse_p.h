// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDNOTIFICATIONCHANNELSRESPONSE_P_H
#define QTAWS_ADDNOTIFICATIONCHANNELSRESPONSE_P_H

#include "codeguruprofilerresponse_p.h"

namespace QtAws {
namespace CodeGuruProfiler {

class AddNotificationChannelsResponse;

class AddNotificationChannelsResponsePrivate : public CodeGuruProfilerResponsePrivate {

public:

    explicit AddNotificationChannelsResponsePrivate(AddNotificationChannelsResponse * const q);

    void parseAddNotificationChannelsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AddNotificationChannelsResponse)
    Q_DISABLE_COPY(AddNotificationChannelsResponsePrivate)

};

} // namespace CodeGuruProfiler
} // namespace QtAws

#endif
