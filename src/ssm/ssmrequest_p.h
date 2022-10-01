// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SSMREQUEST_P_H
#define QTAWS_SSMREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "ssmrequest.h"

namespace QtAws {
namespace Ssm {

class SsmRequest;

class SsmRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    SsmRequest::Action action; ///< Ssm action to be performed.
    QString apiVersion;        ///< Ssm API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Ssm request (query string) parameters. @todo?

    SsmRequestPrivate(const SsmRequest::Action action, SsmRequest * const q);
    SsmRequestPrivate(const SsmRequestPrivate &other, SsmRequest * const q);

    static QString toString(const SsmRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(SsmRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
