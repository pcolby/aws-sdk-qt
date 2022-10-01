// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENTERSTANDBYREQUEST_H
#define QTAWS_ENTERSTANDBYREQUEST_H

#include "autoscalingrequest.h"

namespace QtAws {
namespace AutoScaling {

class EnterStandbyRequestPrivate;

class QTAWSAUTOSCALING_EXPORT EnterStandbyRequest : public AutoScalingRequest {

public:
    EnterStandbyRequest(const EnterStandbyRequest &other);
    EnterStandbyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EnterStandbyRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
