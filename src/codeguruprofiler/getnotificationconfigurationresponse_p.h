// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETNOTIFICATIONCONFIGURATIONRESPONSE_P_H
#define QTAWS_GETNOTIFICATIONCONFIGURATIONRESPONSE_P_H

#include "codeguruprofilerresponse_p.h"

namespace QtAws {
namespace CodeGuruProfiler {

class GetNotificationConfigurationResponse;

class GetNotificationConfigurationResponsePrivate : public CodeGuruProfilerResponsePrivate {

public:

    explicit GetNotificationConfigurationResponsePrivate(GetNotificationConfigurationResponse * const q);

    void parseGetNotificationConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetNotificationConfigurationResponse)
    Q_DISABLE_COPY(GetNotificationConfigurationResponsePrivate)

};

} // namespace CodeGuruProfiler
} // namespace QtAws

#endif
