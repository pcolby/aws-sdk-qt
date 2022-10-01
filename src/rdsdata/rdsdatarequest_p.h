// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RDSDATAREQUEST_P_H
#define QTAWS_RDSDATAREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "rdsdatarequest.h"

namespace QtAws {
namespace RdsData {

class RdsDataRequest;

class RdsDataRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    RdsDataRequest::Action action; ///< RdsData action to be performed.
    QString apiVersion;        ///< RdsData API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< RdsData request (query string) parameters. @todo?

    RdsDataRequestPrivate(const RdsDataRequest::Action action, RdsDataRequest * const q);
    RdsDataRequestPrivate(const RdsDataRequestPrivate &other, RdsDataRequest * const q);

    static QString toString(const RdsDataRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(RdsDataRequest)

};

} // namespace RdsData
} // namespace QtAws

#endif
