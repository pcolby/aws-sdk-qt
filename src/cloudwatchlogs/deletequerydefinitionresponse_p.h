// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEQUERYDEFINITIONRESPONSE_P_H
#define QTAWS_DELETEQUERYDEFINITIONRESPONSE_P_H

#include "cloudwatchlogsresponse_p.h"

namespace QtAws {
namespace CloudWatchLogs {

class DeleteQueryDefinitionResponse;

class DeleteQueryDefinitionResponsePrivate : public CloudWatchLogsResponsePrivate {

public:

    explicit DeleteQueryDefinitionResponsePrivate(DeleteQueryDefinitionResponse * const q);

    void parseDeleteQueryDefinitionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteQueryDefinitionResponse)
    Q_DISABLE_COPY(DeleteQueryDefinitionResponsePrivate)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
