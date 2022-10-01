// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COMPUTEOPTIMIZERREQUEST_P_H
#define QTAWS_COMPUTEOPTIMIZERREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "computeoptimizerrequest.h"

namespace QtAws {
namespace ComputeOptimizer {

class ComputeOptimizerRequest;

class ComputeOptimizerRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    ComputeOptimizerRequest::Action action; ///< ComputeOptimizer action to be performed.
    QString apiVersion;        ///< ComputeOptimizer API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< ComputeOptimizer request (query string) parameters. @todo?

    ComputeOptimizerRequestPrivate(const ComputeOptimizerRequest::Action action, ComputeOptimizerRequest * const q);
    ComputeOptimizerRequestPrivate(const ComputeOptimizerRequestPrivate &other, ComputeOptimizerRequest * const q);

    static QString toString(const ComputeOptimizerRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(ComputeOptimizerRequest)

};

} // namespace ComputeOptimizer
} // namespace QtAws

#endif
