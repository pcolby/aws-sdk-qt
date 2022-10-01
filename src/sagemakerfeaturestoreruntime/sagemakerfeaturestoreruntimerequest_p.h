// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SAGEMAKERFEATURESTORERUNTIMEREQUEST_P_H
#define QTAWS_SAGEMAKERFEATURESTORERUNTIMEREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "sagemakerfeaturestoreruntimerequest.h"

namespace QtAws {
namespace SageMakerFeatureStoreRuntime {

class SageMakerFeatureStoreRuntimeRequest;

class SageMakerFeatureStoreRuntimeRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    SageMakerFeatureStoreRuntimeRequest::Action action; ///< SageMakerFeatureStoreRuntime action to be performed.
    QString apiVersion;        ///< SageMakerFeatureStoreRuntime API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< SageMakerFeatureStoreRuntime request (query string) parameters. @todo?

    SageMakerFeatureStoreRuntimeRequestPrivate(const SageMakerFeatureStoreRuntimeRequest::Action action, SageMakerFeatureStoreRuntimeRequest * const q);
    SageMakerFeatureStoreRuntimeRequestPrivate(const SageMakerFeatureStoreRuntimeRequestPrivate &other, SageMakerFeatureStoreRuntimeRequest * const q);

    static QString toString(const SageMakerFeatureStoreRuntimeRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(SageMakerFeatureStoreRuntimeRequest)

};

} // namespace SageMakerFeatureStoreRuntime
} // namespace QtAws

#endif
