// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETALARMSTATEREQUEST_H
#define QTAWS_SETALARMSTATEREQUEST_H

#include "cloudwatchrequest.h"

namespace QtAws {
namespace CloudWatch {

class SetAlarmStateRequestPrivate;

class QTAWSCLOUDWATCH_EXPORT SetAlarmStateRequest : public CloudWatchRequest {

public:
    SetAlarmStateRequest(const SetAlarmStateRequest &other);
    SetAlarmStateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetAlarmStateRequest)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
