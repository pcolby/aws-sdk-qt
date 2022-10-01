// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTQUERYDEFINITIONRESPONSE_P_H
#define QTAWS_PUTQUERYDEFINITIONRESPONSE_P_H

#include "cloudwatchlogsresponse_p.h"

namespace QtAws {
namespace CloudWatchLogs {

class PutQueryDefinitionResponse;

class PutQueryDefinitionResponsePrivate : public CloudWatchLogsResponsePrivate {

public:

    explicit PutQueryDefinitionResponsePrivate(PutQueryDefinitionResponse * const q);

    void parsePutQueryDefinitionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutQueryDefinitionResponse)
    Q_DISABLE_COPY(PutQueryDefinitionResponsePrivate)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
