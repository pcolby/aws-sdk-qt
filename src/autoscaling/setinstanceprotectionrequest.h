// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETINSTANCEPROTECTIONREQUEST_H
#define QTAWS_SETINSTANCEPROTECTIONREQUEST_H

#include "autoscalingrequest.h"

namespace QtAws {
namespace AutoScaling {

class SetInstanceProtectionRequestPrivate;

class QTAWSAUTOSCALING_EXPORT SetInstanceProtectionRequest : public AutoScalingRequest {

public:
    SetInstanceProtectionRequest(const SetInstanceProtectionRequest &other);
    SetInstanceProtectionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetInstanceProtectionRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
