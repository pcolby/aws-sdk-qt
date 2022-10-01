// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REDSHIFTSERVERLESSREQUEST_P_H
#define QTAWS_REDSHIFTSERVERLESSREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "redshiftserverlessrequest.h"

namespace QtAws {
namespace RedshiftServerless {

class RedshiftServerlessRequest;

class RedshiftServerlessRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    RedshiftServerlessRequest::Action action; ///< RedshiftServerless action to be performed.
    QString apiVersion;        ///< RedshiftServerless API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< RedshiftServerless request (query string) parameters. @todo?

    RedshiftServerlessRequestPrivate(const RedshiftServerlessRequest::Action action, RedshiftServerlessRequest * const q);
    RedshiftServerlessRequestPrivate(const RedshiftServerlessRequestPrivate &other, RedshiftServerlessRequest * const q);

    static QString toString(const RedshiftServerlessRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(RedshiftServerlessRequest)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif
