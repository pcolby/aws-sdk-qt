// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHINSTANCESREQUEST_H
#define QTAWS_DETACHINSTANCESREQUEST_H

#include "autoscalingrequest.h"

namespace QtAws {
namespace AutoScaling {

class DetachInstancesRequestPrivate;

class QTAWSAUTOSCALING_EXPORT DetachInstancesRequest : public AutoScalingRequest {

public:
    DetachInstancesRequest(const DetachInstancesRequest &other);
    DetachInstancesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DetachInstancesRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
