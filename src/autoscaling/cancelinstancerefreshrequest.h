// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELINSTANCEREFRESHREQUEST_H
#define QTAWS_CANCELINSTANCEREFRESHREQUEST_H

#include "autoscalingrequest.h"

namespace QtAws {
namespace AutoScaling {

class CancelInstanceRefreshRequestPrivate;

class QTAWSAUTOSCALING_EXPORT CancelInstanceRefreshRequest : public AutoScalingRequest {

public:
    CancelInstanceRefreshRequest(const CancelInstanceRefreshRequest &other);
    CancelInstanceRefreshRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelInstanceRefreshRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
