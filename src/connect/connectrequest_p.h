// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONNECTREQUEST_P_H
#define QTAWS_CONNECTREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class ConnectRequest;

class ConnectRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    ConnectRequest::Action action; ///< Connect action to be performed.
    QString apiVersion;        ///< Connect API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Connect request (query string) parameters. @todo?

    ConnectRequestPrivate(const ConnectRequest::Action action, ConnectRequest * const q);
    ConnectRequestPrivate(const ConnectRequestPrivate &other, ConnectRequest * const q);

    static QString toString(const ConnectRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(ConnectRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
