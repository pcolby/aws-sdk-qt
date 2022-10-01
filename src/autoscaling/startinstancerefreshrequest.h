// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTINSTANCEREFRESHREQUEST_H
#define QTAWS_STARTINSTANCEREFRESHREQUEST_H

#include "autoscalingrequest.h"

namespace QtAws {
namespace AutoScaling {

class StartInstanceRefreshRequestPrivate;

class QTAWSAUTOSCALING_EXPORT StartInstanceRefreshRequest : public AutoScalingRequest {

public:
    StartInstanceRefreshRequest(const StartInstanceRefreshRequest &other);
    StartInstanceRefreshRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartInstanceRefreshRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
