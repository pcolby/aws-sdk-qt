// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEMETRICSCOLLECTIONREQUEST_H
#define QTAWS_DISABLEMETRICSCOLLECTIONREQUEST_H

#include "autoscalingrequest.h"

namespace QtAws {
namespace AutoScaling {

class DisableMetricsCollectionRequestPrivate;

class QTAWSAUTOSCALING_EXPORT DisableMetricsCollectionRequest : public AutoScalingRequest {

public:
    DisableMetricsCollectionRequest(const DisableMetricsCollectionRequest &other);
    DisableMetricsCollectionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisableMetricsCollectionRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
