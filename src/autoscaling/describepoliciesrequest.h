// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPOLICIESREQUEST_H
#define QTAWS_DESCRIBEPOLICIESREQUEST_H

#include "autoscalingrequest.h"

namespace QtAws {
namespace AutoScaling {

class DescribePoliciesRequestPrivate;

class QTAWSAUTOSCALING_EXPORT DescribePoliciesRequest : public AutoScalingRequest {

public:
    DescribePoliciesRequest(const DescribePoliciesRequest &other);
    DescribePoliciesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribePoliciesRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
