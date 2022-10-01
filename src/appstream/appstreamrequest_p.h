// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APPSTREAMREQUEST_P_H
#define QTAWS_APPSTREAMREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "appstreamrequest.h"

namespace QtAws {
namespace AppStream {

class AppStreamRequest;

class AppStreamRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    AppStreamRequest::Action action; ///< AppStream action to be performed.
    QString apiVersion;        ///< AppStream API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< AppStream request (query string) parameters. @todo?

    AppStreamRequestPrivate(const AppStreamRequest::Action action, AppStreamRequest * const q);
    AppStreamRequestPrivate(const AppStreamRequestPrivate &other, AppStreamRequest * const q);

    static QString toString(const AppStreamRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(AppStreamRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif
