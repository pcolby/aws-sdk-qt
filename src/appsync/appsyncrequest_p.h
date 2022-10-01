// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APPSYNCREQUEST_P_H
#define QTAWS_APPSYNCREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "appsyncrequest.h"

namespace QtAws {
namespace AppSync {

class AppSyncRequest;

class AppSyncRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    AppSyncRequest::Action action; ///< AppSync action to be performed.
    QString apiVersion;        ///< AppSync API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< AppSync request (query string) parameters. @todo?

    AppSyncRequestPrivate(const AppSyncRequest::Action action, AppSyncRequest * const q);
    AppSyncRequestPrivate(const AppSyncRequestPrivate &other, AppSyncRequest * const q);

    static QString toString(const AppSyncRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(AppSyncRequest)

};

} // namespace AppSync
} // namespace QtAws

#endif
