// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEMETRICSCOLLECTIONREQUEST_H
#define QTAWS_ENABLEMETRICSCOLLECTIONREQUEST_H

#include "autoscalingrequest.h"

namespace QtAws {
namespace AutoScaling {

class EnableMetricsCollectionRequestPrivate;

class QTAWSAUTOSCALING_EXPORT EnableMetricsCollectionRequest : public AutoScalingRequest {

public:
    EnableMetricsCollectionRequest(const EnableMetricsCollectionRequest &other);
    EnableMetricsCollectionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EnableMetricsCollectionRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
