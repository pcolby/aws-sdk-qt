// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEQUERYDEFINITIONREQUEST_H
#define QTAWS_DELETEQUERYDEFINITIONREQUEST_H

#include "cloudwatchlogsrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class DeleteQueryDefinitionRequestPrivate;

class QTAWSCLOUDWATCHLOGS_EXPORT DeleteQueryDefinitionRequest : public CloudWatchLogsRequest {

public:
    DeleteQueryDefinitionRequest(const DeleteQueryDefinitionRequest &other);
    DeleteQueryDefinitionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteQueryDefinitionRequest)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
