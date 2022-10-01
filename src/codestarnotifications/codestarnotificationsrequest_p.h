// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CODESTARNOTIFICATIONSREQUEST_P_H
#define QTAWS_CODESTARNOTIFICATIONSREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "codestarnotificationsrequest.h"

namespace QtAws {
namespace CodestarNotifications {

class CodestarNotificationsRequest;

class CodestarNotificationsRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    CodestarNotificationsRequest::Action action; ///< CodestarNotifications action to be performed.
    QString apiVersion;        ///< CodestarNotifications API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< CodestarNotifications request (query string) parameters. @todo?

    CodestarNotificationsRequestPrivate(const CodestarNotificationsRequest::Action action, CodestarNotificationsRequest * const q);
    CodestarNotificationsRequestPrivate(const CodestarNotificationsRequestPrivate &other, CodestarNotificationsRequest * const q);

    static QString toString(const CodestarNotificationsRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(CodestarNotificationsRequest)

};

} // namespace CodestarNotifications
} // namespace QtAws

#endif
