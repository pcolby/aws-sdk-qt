// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REDSHIFTREQUEST_P_H
#define QTAWS_REDSHIFTREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "redshiftrequest.h"

namespace QtAws {
namespace Redshift {

class RedshiftRequest;

class RedshiftRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    RedshiftRequest::Action action; ///< Redshift action to be performed.
    QString apiVersion;        ///< Redshift API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Redshift request (query string) parameters. @todo?

    RedshiftRequestPrivate(const RedshiftRequest::Action action, RedshiftRequest * const q);
    RedshiftRequestPrivate(const RedshiftRequestPrivate &other, RedshiftRequest * const q);

    static QString toString(const RedshiftRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(RedshiftRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
