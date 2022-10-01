// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EFSREQUEST_P_H
#define QTAWS_EFSREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "efsrequest.h"

namespace QtAws {
namespace Efs {

class EfsRequest;

class EfsRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    EfsRequest::Action action; ///< Efs action to be performed.
    QString apiVersion;        ///< Efs API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Efs request (query string) parameters. @todo?

    EfsRequestPrivate(const EfsRequest::Action action, EfsRequest * const q);
    EfsRequestPrivate(const EfsRequestPrivate &other, EfsRequest * const q);

    static QString toString(const EfsRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(EfsRequest)

};

} // namespace Efs
} // namespace QtAws

#endif
