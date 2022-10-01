// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APPRUNNERREQUEST_P_H
#define QTAWS_APPRUNNERREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "apprunnerrequest.h"

namespace QtAws {
namespace AppRunner {

class AppRunnerRequest;

class AppRunnerRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    AppRunnerRequest::Action action; ///< AppRunner action to be performed.
    QString apiVersion;        ///< AppRunner API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< AppRunner request (query string) parameters. @todo?

    AppRunnerRequestPrivate(const AppRunnerRequest::Action action, AppRunnerRequest * const q);
    AppRunnerRequestPrivate(const AppRunnerRequestPrivate &other, AppRunnerRequest * const q);

    static QString toString(const AppRunnerRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(AppRunnerRequest)

};

} // namespace AppRunner
} // namespace QtAws

#endif
