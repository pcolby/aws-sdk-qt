// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEALARMACTIONSREQUEST_H
#define QTAWS_DISABLEALARMACTIONSREQUEST_H

#include "cloudwatchrequest.h"

namespace QtAws {
namespace CloudWatch {

class DisableAlarmActionsRequestPrivate;

class QTAWSCLOUDWATCH_EXPORT DisableAlarmActionsRequest : public CloudWatchRequest {

public:
    DisableAlarmActionsRequest(const DisableAlarmActionsRequest &other);
    DisableAlarmActionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisableAlarmActionsRequest)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
