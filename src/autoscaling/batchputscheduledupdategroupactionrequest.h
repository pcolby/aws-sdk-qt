// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHPUTSCHEDULEDUPDATEGROUPACTIONREQUEST_H
#define QTAWS_BATCHPUTSCHEDULEDUPDATEGROUPACTIONREQUEST_H

#include "autoscalingrequest.h"

namespace QtAws {
namespace AutoScaling {

class BatchPutScheduledUpdateGroupActionRequestPrivate;

class QTAWSAUTOSCALING_EXPORT BatchPutScheduledUpdateGroupActionRequest : public AutoScalingRequest {

public:
    BatchPutScheduledUpdateGroupActionRequest(const BatchPutScheduledUpdateGroupActionRequest &other);
    BatchPutScheduledUpdateGroupActionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchPutScheduledUpdateGroupActionRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
