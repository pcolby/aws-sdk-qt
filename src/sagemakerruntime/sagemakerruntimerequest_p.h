// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SAGEMAKERRUNTIMEREQUEST_P_H
#define QTAWS_SAGEMAKERRUNTIMEREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "sagemakerruntimerequest.h"

namespace QtAws {
namespace SageMakerRuntime {

class SageMakerRuntimeRequest;

class SageMakerRuntimeRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    SageMakerRuntimeRequest::Action action; ///< SageMakerRuntime action to be performed.
    QString apiVersion;        ///< SageMakerRuntime API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< SageMakerRuntime request (query string) parameters. @todo?

    SageMakerRuntimeRequestPrivate(const SageMakerRuntimeRequest::Action action, SageMakerRuntimeRequest * const q);
    SageMakerRuntimeRequestPrivate(const SageMakerRuntimeRequestPrivate &other, SageMakerRuntimeRequest * const q);

    static QString toString(const SageMakerRuntimeRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(SageMakerRuntimeRequest)

};

} // namespace SageMakerRuntime
} // namespace QtAws

#endif
