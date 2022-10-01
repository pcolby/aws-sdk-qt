// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTLIFECYCLEHOOKREQUEST_H
#define QTAWS_PUTLIFECYCLEHOOKREQUEST_H

#include "autoscalingrequest.h"

namespace QtAws {
namespace AutoScaling {

class PutLifecycleHookRequestPrivate;

class QTAWSAUTOSCALING_EXPORT PutLifecycleHookRequest : public AutoScalingRequest {

public:
    PutLifecycleHookRequest(const PutLifecycleHookRequest &other);
    PutLifecycleHookRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutLifecycleHookRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
