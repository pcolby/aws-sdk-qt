// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APPFLOWREQUEST_P_H
#define QTAWS_APPFLOWREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "appflowrequest.h"

namespace QtAws {
namespace Appflow {

class AppflowRequest;

class AppflowRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    AppflowRequest::Action action; ///< Appflow action to be performed.
    QString apiVersion;        ///< Appflow API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Appflow request (query string) parameters. @todo?

    AppflowRequestPrivate(const AppflowRequest::Action action, AppflowRequest * const q);
    AppflowRequestPrivate(const AppflowRequestPrivate &other, AppflowRequest * const q);

    static QString toString(const AppflowRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(AppflowRequest)

};

} // namespace Appflow
} // namespace QtAws

#endif
