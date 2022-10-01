// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_QLDBREQUEST_P_H
#define QTAWS_QLDBREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "qldbrequest.h"

namespace QtAws {
namespace Qldb {

class QldbRequest;

class QldbRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    QldbRequest::Action action; ///< Qldb action to be performed.
    QString apiVersion;        ///< Qldb API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Qldb request (query string) parameters. @todo?

    QldbRequestPrivate(const QldbRequest::Action action, QldbRequest * const q);
    QldbRequestPrivate(const QldbRequestPrivate &other, QldbRequest * const q);

    static QString toString(const QldbRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(QldbRequest)

};

} // namespace Qldb
} // namespace QtAws

#endif
