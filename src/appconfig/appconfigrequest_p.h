// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APPCONFIGREQUEST_P_H
#define QTAWS_APPCONFIGREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "appconfigrequest.h"

namespace QtAws {
namespace AppConfig {

class AppConfigRequest;

class AppConfigRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    AppConfigRequest::Action action; ///< AppConfig action to be performed.
    QString apiVersion;        ///< AppConfig API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< AppConfig request (query string) parameters. @todo?

    AppConfigRequestPrivate(const AppConfigRequest::Action action, AppConfigRequest * const q);
    AppConfigRequestPrivate(const AppConfigRequestPrivate &other, AppConfigRequest * const q);

    static QString toString(const AppConfigRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(AppConfigRequest)

};

} // namespace AppConfig
} // namespace QtAws

#endif
