// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEALARMSREQUEST_P_H
#define QTAWS_DELETEALARMSREQUEST_P_H

#include "cloudwatchrequest_p.h"
#include "deletealarmsrequest.h"

namespace QtAws {
namespace CloudWatch {

class DeleteAlarmsRequest;

class DeleteAlarmsRequestPrivate : public CloudWatchRequestPrivate {

public:
    DeleteAlarmsRequestPrivate(const CloudWatchRequest::Action action,
                                   DeleteAlarmsRequest * const q);
    DeleteAlarmsRequestPrivate(const DeleteAlarmsRequestPrivate &other,
                                   DeleteAlarmsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteAlarmsRequest)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
