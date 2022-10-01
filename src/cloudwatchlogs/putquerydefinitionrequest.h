// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTQUERYDEFINITIONREQUEST_H
#define QTAWS_PUTQUERYDEFINITIONREQUEST_H

#include "cloudwatchlogsrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class PutQueryDefinitionRequestPrivate;

class QTAWSCLOUDWATCHLOGS_EXPORT PutQueryDefinitionRequest : public CloudWatchLogsRequest {

public:
    PutQueryDefinitionRequest(const PutQueryDefinitionRequest &other);
    PutQueryDefinitionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutQueryDefinitionRequest)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
