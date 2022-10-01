// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SSMINCIDENTSREQUEST_P_H
#define QTAWS_SSMINCIDENTSREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "ssmincidentsrequest.h"

namespace QtAws {
namespace SsmIncidents {

class SsmIncidentsRequest;

class SsmIncidentsRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    SsmIncidentsRequest::Action action; ///< SsmIncidents action to be performed.
    QString apiVersion;        ///< SsmIncidents API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< SsmIncidents request (query string) parameters. @todo?

    SsmIncidentsRequestPrivate(const SsmIncidentsRequest::Action action, SsmIncidentsRequest * const q);
    SsmIncidentsRequestPrivate(const SsmIncidentsRequestPrivate &other, SsmIncidentsRequest * const q);

    static QString toString(const SsmIncidentsRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(SsmIncidentsRequest)

};

} // namespace SsmIncidents
} // namespace QtAws

#endif
