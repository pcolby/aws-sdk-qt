// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXECUTEPOLICYREQUEST_H
#define QTAWS_EXECUTEPOLICYREQUEST_H

#include "autoscalingrequest.h"

namespace QtAws {
namespace AutoScaling {

class ExecutePolicyRequestPrivate;

class QTAWSAUTOSCALING_EXPORT ExecutePolicyRequest : public AutoScalingRequest {

public:
    ExecutePolicyRequest(const ExecutePolicyRequest &other);
    ExecutePolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ExecutePolicyRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
