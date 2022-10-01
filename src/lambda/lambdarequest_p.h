// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LAMBDAREQUEST_P_H
#define QTAWS_LAMBDAREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "lambdarequest.h"

namespace QtAws {
namespace Lambda {

class LambdaRequest;

class LambdaRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    LambdaRequest::Action action; ///< Lambda action to be performed.
    QString apiVersion;        ///< Lambda API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Lambda request (query string) parameters. @todo?

    LambdaRequestPrivate(const LambdaRequest::Action action, LambdaRequest * const q);
    LambdaRequestPrivate(const LambdaRequestPrivate &other, LambdaRequest * const q);

    static QString toString(const LambdaRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(LambdaRequest)

};

} // namespace Lambda
} // namespace QtAws

#endif
