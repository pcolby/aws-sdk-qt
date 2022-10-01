// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SAGEMAKERRUNTIMECLIENT_P_H
#define QTAWS_SAGEMAKERRUNTIMECLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace SageMakerRuntime {

class SageMakerRuntimeClient;

class SageMakerRuntimeClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit SageMakerRuntimeClientPrivate(SageMakerRuntimeClient * const q);

private:
    Q_DECLARE_PUBLIC(SageMakerRuntimeClient)
    Q_DISABLE_COPY(SageMakerRuntimeClientPrivate)

};

} // namespace SageMakerRuntime
} // namespace QtAws

#endif
