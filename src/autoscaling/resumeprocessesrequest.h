// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESUMEPROCESSESREQUEST_H
#define QTAWS_RESUMEPROCESSESREQUEST_H

#include "autoscalingrequest.h"

namespace QtAws {
namespace AutoScaling {

class ResumeProcessesRequestPrivate;

class QTAWSAUTOSCALING_EXPORT ResumeProcessesRequest : public AutoScalingRequest {

public:
    ResumeProcessesRequest(const ResumeProcessesRequest &other);
    ResumeProcessesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ResumeProcessesRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
