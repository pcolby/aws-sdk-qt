// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_AUTOSCALINGCLIENT_P_H
#define QTAWS_AUTOSCALINGCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace AutoScaling {

class AutoScalingClient;

class AutoScalingClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit AutoScalingClientPrivate(AutoScalingClient * const q);

private:
    Q_DECLARE_PUBLIC(AutoScalingClient)
    Q_DISABLE_COPY(AutoScalingClientPrivate)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
