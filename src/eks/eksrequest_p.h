// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EKSREQUEST_P_H
#define QTAWS_EKSREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "eksrequest.h"

namespace QtAws {
namespace Eks {

class EksRequest;

class EksRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    EksRequest::Action action; ///< Eks action to be performed.
    QString apiVersion;        ///< Eks API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Eks request (query string) parameters. @todo?

    EksRequestPrivate(const EksRequest::Action action, EksRequest * const q);
    EksRequestPrivate(const EksRequestPrivate &other, EksRequest * const q);

    static QString toString(const EksRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(EksRequest)

};

} // namespace Eks
} // namespace QtAws

#endif
