// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MACHINELEARNINGREQUEST_P_H
#define QTAWS_MACHINELEARNINGREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "machinelearningrequest.h"

namespace QtAws {
namespace MachineLearning {

class MachineLearningRequest;

class MachineLearningRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    MachineLearningRequest::Action action; ///< MachineLearning action to be performed.
    QString apiVersion;        ///< MachineLearning API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< MachineLearning request (query string) parameters. @todo?

    MachineLearningRequestPrivate(const MachineLearningRequest::Action action, MachineLearningRequest * const q);
    MachineLearningRequestPrivate(const MachineLearningRequestPrivate &other, MachineLearningRequest * const q);

    static QString toString(const MachineLearningRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(MachineLearningRequest)

};

} // namespace MachineLearning
} // namespace QtAws

#endif
