// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SAGEMAKERA2IRUNTIMECLIENT_P_H
#define QTAWS_SAGEMAKERA2IRUNTIMECLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace SageMakerA2IRuntime {

class SageMakerA2IRuntimeClient;

class SageMakerA2IRuntimeClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit SageMakerA2IRuntimeClientPrivate(SageMakerA2IRuntimeClient * const q);

private:
    Q_DECLARE_PUBLIC(SageMakerA2IRuntimeClient)
    Q_DISABLE_COPY(SageMakerA2IRuntimeClientPrivate)

};

} // namespace SageMakerA2IRuntime
} // namespace QtAws

#endif
