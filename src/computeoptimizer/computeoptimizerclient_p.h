// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COMPUTEOPTIMIZERCLIENT_P_H
#define QTAWS_COMPUTEOPTIMIZERCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace ComputeOptimizer {

class ComputeOptimizerClient;

class ComputeOptimizerClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit ComputeOptimizerClientPrivate(ComputeOptimizerClient * const q);

private:
    Q_DECLARE_PUBLIC(ComputeOptimizerClient)
    Q_DISABLE_COPY(ComputeOptimizerClientPrivate)

};

} // namespace ComputeOptimizer
} // namespace QtAws

#endif
