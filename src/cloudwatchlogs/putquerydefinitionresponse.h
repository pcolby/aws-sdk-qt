// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTQUERYDEFINITIONRESPONSE_H
#define QTAWS_PUTQUERYDEFINITIONRESPONSE_H

#include "cloudwatchlogsresponse.h"
#include "putquerydefinitionrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class PutQueryDefinitionResponsePrivate;

class QTAWSCLOUDWATCHLOGS_EXPORT PutQueryDefinitionResponse : public CloudWatchLogsResponse {
    Q_OBJECT

public:
    PutQueryDefinitionResponse(const PutQueryDefinitionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutQueryDefinitionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutQueryDefinitionResponse)
    Q_DISABLE_COPY(PutQueryDefinitionResponse)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
