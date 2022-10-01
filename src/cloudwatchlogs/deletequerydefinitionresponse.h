// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEQUERYDEFINITIONRESPONSE_H
#define QTAWS_DELETEQUERYDEFINITIONRESPONSE_H

#include "cloudwatchlogsresponse.h"
#include "deletequerydefinitionrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class DeleteQueryDefinitionResponsePrivate;

class QTAWSCLOUDWATCHLOGS_EXPORT DeleteQueryDefinitionResponse : public CloudWatchLogsResponse {
    Q_OBJECT

public:
    DeleteQueryDefinitionResponse(const DeleteQueryDefinitionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteQueryDefinitionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteQueryDefinitionResponse)
    Q_DISABLE_COPY(DeleteQueryDefinitionResponse)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
