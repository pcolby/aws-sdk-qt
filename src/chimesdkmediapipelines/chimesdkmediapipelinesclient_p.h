// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CHIMESDKMEDIAPIPELINESCLIENT_P_H
#define QTAWS_CHIMESDKMEDIAPIPELINESCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace ChimeSdkMediaPipelines {

class ChimeSdkMediaPipelinesClient;

class ChimeSdkMediaPipelinesClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit ChimeSdkMediaPipelinesClientPrivate(ChimeSdkMediaPipelinesClient * const q);

private:
    Q_DECLARE_PUBLIC(ChimeSdkMediaPipelinesClient)
    Q_DISABLE_COPY(ChimeSdkMediaPipelinesClientPrivate)

};

} // namespace ChimeSdkMediaPipelines
} // namespace QtAws

#endif
