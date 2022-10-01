// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHINSTANCESREQUEST_H
#define QTAWS_ATTACHINSTANCESREQUEST_H

#include "autoscalingrequest.h"

namespace QtAws {
namespace AutoScaling {

class AttachInstancesRequestPrivate;

class QTAWSAUTOSCALING_EXPORT AttachInstancesRequest : public AutoScalingRequest {

public:
    AttachInstancesRequest(const AttachInstancesRequest &other);
    AttachInstancesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AttachInstancesRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
