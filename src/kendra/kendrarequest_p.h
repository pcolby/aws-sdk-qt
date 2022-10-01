// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_KENDRAREQUEST_P_H
#define QTAWS_KENDRAREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "kendrarequest.h"

namespace QtAws {
namespace Kendra {

class KendraRequest;

class KendraRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    KendraRequest::Action action; ///< Kendra action to be performed.
    QString apiVersion;        ///< Kendra API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Kendra request (query string) parameters. @todo?

    KendraRequestPrivate(const KendraRequest::Action action, KendraRequest * const q);
    KendraRequestPrivate(const KendraRequestPrivate &other, KendraRequest * const q);

    static QString toString(const KendraRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(KendraRequest)

};

} // namespace Kendra
} // namespace QtAws

#endif
