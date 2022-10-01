// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETINSTANCEHEALTHREQUEST_H
#define QTAWS_SETINSTANCEHEALTHREQUEST_H

#include "autoscalingrequest.h"

namespace QtAws {
namespace AutoScaling {

class SetInstanceHealthRequestPrivate;

class QTAWSAUTOSCALING_EXPORT SetInstanceHealthRequest : public AutoScalingRequest {

public:
    SetInstanceHealthRequest(const SetInstanceHealthRequest &other);
    SetInstanceHealthRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetInstanceHealthRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
