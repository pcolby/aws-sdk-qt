// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REDSHIFTDATAREQUEST_P_H
#define QTAWS_REDSHIFTDATAREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "redshiftdatarequest.h"

namespace QtAws {
namespace RedshiftData {

class RedshiftDataRequest;

class RedshiftDataRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    RedshiftDataRequest::Action action; ///< RedshiftData action to be performed.
    QString apiVersion;        ///< RedshiftData API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< RedshiftData request (query string) parameters. @todo?

    RedshiftDataRequestPrivate(const RedshiftDataRequest::Action action, RedshiftDataRequest * const q);
    RedshiftDataRequestPrivate(const RedshiftDataRequestPrivate &other, RedshiftDataRequest * const q);

    static QString toString(const RedshiftDataRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(RedshiftDataRequest)

};

} // namespace RedshiftData
} // namespace QtAws

#endif
