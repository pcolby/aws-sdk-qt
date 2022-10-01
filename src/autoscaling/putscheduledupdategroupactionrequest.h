// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTSCHEDULEDUPDATEGROUPACTIONREQUEST_H
#define QTAWS_PUTSCHEDULEDUPDATEGROUPACTIONREQUEST_H

#include "autoscalingrequest.h"

namespace QtAws {
namespace AutoScaling {

class PutScheduledUpdateGroupActionRequestPrivate;

class QTAWSAUTOSCALING_EXPORT PutScheduledUpdateGroupActionRequest : public AutoScalingRequest {

public:
    PutScheduledUpdateGroupActionRequest(const PutScheduledUpdateGroupActionRequest &other);
    PutScheduledUpdateGroupActionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutScheduledUpdateGroupActionRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
