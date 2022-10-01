// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SAGEMAKERREQUEST_P_H
#define QTAWS_SAGEMAKERREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class SageMakerRequest;

class SageMakerRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    SageMakerRequest::Action action; ///< SageMaker action to be performed.
    QString apiVersion;        ///< SageMaker API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< SageMaker request (query string) parameters. @todo?

    SageMakerRequestPrivate(const SageMakerRequest::Action action, SageMakerRequest * const q);
    SageMakerRequestPrivate(const SageMakerRequestPrivate &other, SageMakerRequest * const q);

    static QString toString(const SageMakerRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(SageMakerRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
