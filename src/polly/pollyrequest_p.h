// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_POLLYREQUEST_P_H
#define QTAWS_POLLYREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "pollyrequest.h"

namespace QtAws {
namespace Polly {

class PollyRequest;

class PollyRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    PollyRequest::Action action; ///< Polly action to be performed.
    QString apiVersion;        ///< Polly API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Polly request (query string) parameters. @todo?

    PollyRequestPrivate(const PollyRequest::Action action, PollyRequest * const q);
    PollyRequestPrivate(const PollyRequestPrivate &other, PollyRequest * const q);

    static QString toString(const PollyRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(PollyRequest)

};

} // namespace Polly
} // namespace QtAws

#endif
