// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_AUTOSCALINGPLANSCLIENT_P_H
#define QTAWS_AUTOSCALINGPLANSCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace AutoScalingPlans {

class AutoScalingPlansClient;

class AutoScalingPlansClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit AutoScalingPlansClientPrivate(AutoScalingPlansClient * const q);

private:
    Q_DECLARE_PUBLIC(AutoScalingPlansClient)
    Q_DISABLE_COPY(AutoScalingPlansClientPrivate)

};

} // namespace AutoScalingPlans
} // namespace QtAws

#endif
