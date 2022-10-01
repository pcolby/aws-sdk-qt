// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SAGEMAKERA2IRUNTIMEREQUEST_P_H
#define QTAWS_SAGEMAKERA2IRUNTIMEREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "sagemakera2iruntimerequest.h"

namespace QtAws {
namespace SageMakerA2IRuntime {

class SageMakerA2IRuntimeRequest;

class SageMakerA2IRuntimeRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    SageMakerA2IRuntimeRequest::Action action; ///< SageMakerA2IRuntime action to be performed.
    QString apiVersion;        ///< SageMakerA2IRuntime API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< SageMakerA2IRuntime request (query string) parameters. @todo?

    SageMakerA2IRuntimeRequestPrivate(const SageMakerA2IRuntimeRequest::Action action, SageMakerA2IRuntimeRequest * const q);
    SageMakerA2IRuntimeRequestPrivate(const SageMakerA2IRuntimeRequestPrivate &other, SageMakerA2IRuntimeRequest * const q);

    static QString toString(const SageMakerA2IRuntimeRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(SageMakerA2IRuntimeRequest)

};

} // namespace SageMakerA2IRuntime
} // namespace QtAws

#endif
