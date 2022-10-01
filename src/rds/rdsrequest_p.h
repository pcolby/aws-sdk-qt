// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RDSREQUEST_P_H
#define QTAWS_RDSREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "rdsrequest.h"

namespace QtAws {
namespace Rds {

class RdsRequest;

class RdsRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    RdsRequest::Action action; ///< Rds action to be performed.
    QString apiVersion;        ///< Rds API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Rds request (query string) parameters. @todo?

    RdsRequestPrivate(const RdsRequest::Action action, RdsRequest * const q);
    RdsRequestPrivate(const RdsRequestPrivate &other, RdsRequest * const q);

    static QString toString(const RdsRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(RdsRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
