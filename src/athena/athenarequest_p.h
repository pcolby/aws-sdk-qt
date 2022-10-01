// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATHENAREQUEST_P_H
#define QTAWS_ATHENAREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "athenarequest.h"

namespace QtAws {
namespace Athena {

class AthenaRequest;

class AthenaRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    AthenaRequest::Action action; ///< Athena action to be performed.
    QString apiVersion;        ///< Athena API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Athena request (query string) parameters. @todo?

    AthenaRequestPrivate(const AthenaRequest::Action action, AthenaRequest * const q);
    AthenaRequestPrivate(const AthenaRequestPrivate &other, AthenaRequest * const q);

    static QString toString(const AthenaRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(AthenaRequest)

};

} // namespace Athena
} // namespace QtAws

#endif
