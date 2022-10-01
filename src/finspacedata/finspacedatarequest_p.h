// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FINSPACEDATAREQUEST_P_H
#define QTAWS_FINSPACEDATAREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "finspacedatarequest.h"

namespace QtAws {
namespace FinspaceData {

class FinspaceDataRequest;

class FinspaceDataRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    FinspaceDataRequest::Action action; ///< FinspaceData action to be performed.
    QString apiVersion;        ///< FinspaceData API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< FinspaceData request (query string) parameters. @todo?

    FinspaceDataRequestPrivate(const FinspaceDataRequest::Action action, FinspaceDataRequest * const q);
    FinspaceDataRequestPrivate(const FinspaceDataRequestPrivate &other, FinspaceDataRequest * const q);

    static QString toString(const FinspaceDataRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(FinspaceDataRequest)

};

} // namespace FinspaceData
} // namespace QtAws

#endif
