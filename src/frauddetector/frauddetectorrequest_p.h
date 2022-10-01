// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FRAUDDETECTORREQUEST_P_H
#define QTAWS_FRAUDDETECTORREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "frauddetectorrequest.h"

namespace QtAws {
namespace FraudDetector {

class FraudDetectorRequest;

class FraudDetectorRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    FraudDetectorRequest::Action action; ///< FraudDetector action to be performed.
    QString apiVersion;        ///< FraudDetector API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< FraudDetector request (query string) parameters. @todo?

    FraudDetectorRequestPrivate(const FraudDetectorRequest::Action action, FraudDetectorRequest * const q);
    FraudDetectorRequestPrivate(const FraudDetectorRequestPrivate &other, FraudDetectorRequest * const q);

    static QString toString(const FraudDetectorRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(FraudDetectorRequest)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
