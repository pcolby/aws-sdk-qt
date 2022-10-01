// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETDESIREDCAPACITYREQUEST_H
#define QTAWS_SETDESIREDCAPACITYREQUEST_H

#include "autoscalingrequest.h"

namespace QtAws {
namespace AutoScaling {

class SetDesiredCapacityRequestPrivate;

class QTAWSAUTOSCALING_EXPORT SetDesiredCapacityRequest : public AutoScalingRequest {

public:
    SetDesiredCapacityRequest(const SetDesiredCapacityRequest &other);
    SetDesiredCapacityRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetDesiredCapacityRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
