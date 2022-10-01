// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_QLDBSESSIONREQUEST_P_H
#define QTAWS_QLDBSESSIONREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "qldbsessionrequest.h"

namespace QtAws {
namespace QldbSession {

class QldbSessionRequest;

class QldbSessionRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    QldbSessionRequest::Action action; ///< QldbSession action to be performed.
    QString apiVersion;        ///< QldbSession API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< QldbSession request (query string) parameters. @todo?

    QldbSessionRequestPrivate(const QldbSessionRequest::Action action, QldbSessionRequest * const q);
    QldbSessionRequestPrivate(const QldbSessionRequestPrivate &other, QldbSessionRequest * const q);

    static QString toString(const QldbSessionRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(QldbSessionRequest)

};

} // namespace QldbSession
} // namespace QtAws

#endif
