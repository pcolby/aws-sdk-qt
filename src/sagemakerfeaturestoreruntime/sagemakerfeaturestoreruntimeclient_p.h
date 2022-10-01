// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SAGEMAKERFEATURESTORERUNTIMECLIENT_P_H
#define QTAWS_SAGEMAKERFEATURESTORERUNTIMECLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace SageMakerFeatureStoreRuntime {

class SageMakerFeatureStoreRuntimeClient;

class SageMakerFeatureStoreRuntimeClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit SageMakerFeatureStoreRuntimeClientPrivate(SageMakerFeatureStoreRuntimeClient * const q);

private:
    Q_DECLARE_PUBLIC(SageMakerFeatureStoreRuntimeClient)
    Q_DISABLE_COPY(SageMakerFeatureStoreRuntimeClientPrivate)

};

} // namespace SageMakerFeatureStoreRuntime
} // namespace QtAws

#endif
