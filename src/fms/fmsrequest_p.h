// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FMSREQUEST_P_H
#define QTAWS_FMSREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "fmsrequest.h"

namespace QtAws {
namespace Fms {

class FmsRequest;

class FmsRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    FmsRequest::Action action; ///< Fms action to be performed.
    QString apiVersion;        ///< Fms API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Fms request (query string) parameters. @todo?

    FmsRequestPrivate(const FmsRequest::Action action, FmsRequest * const q);
    FmsRequestPrivate(const FmsRequestPrivate &other, FmsRequest * const q);

    static QString toString(const FmsRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(FmsRequest)

};

} // namespace Fms
} // namespace QtAws

#endif
