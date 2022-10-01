// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FINSPACEREQUEST_P_H
#define QTAWS_FINSPACEREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "finspacerequest.h"

namespace QtAws {
namespace Finspace {

class FinspaceRequest;

class FinspaceRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    FinspaceRequest::Action action; ///< Finspace action to be performed.
    QString apiVersion;        ///< Finspace API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Finspace request (query string) parameters. @todo?

    FinspaceRequestPrivate(const FinspaceRequest::Action action, FinspaceRequest * const q);
    FinspaceRequestPrivate(const FinspaceRequestPrivate &other, FinspaceRequest * const q);

    static QString toString(const FinspaceRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(FinspaceRequest)

};

} // namespace Finspace
} // namespace QtAws

#endif
