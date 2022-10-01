// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APPLICATIONAUTOSCALINGCLIENT_P_H
#define QTAWS_APPLICATIONAUTOSCALINGCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace ApplicationAutoScaling {

class ApplicationAutoScalingClient;

class ApplicationAutoScalingClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit ApplicationAutoScalingClientPrivate(ApplicationAutoScalingClient * const q);

private:
    Q_DECLARE_PUBLIC(ApplicationAutoScalingClient)
    Q_DISABLE_COPY(ApplicationAutoScalingClientPrivate)

};

} // namespace ApplicationAutoScaling
} // namespace QtAws

#endif
