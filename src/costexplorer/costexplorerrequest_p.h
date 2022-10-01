// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COSTEXPLORERREQUEST_P_H
#define QTAWS_COSTEXPLORERREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "costexplorerrequest.h"

namespace QtAws {
namespace CostExplorer {

class CostExplorerRequest;

class CostExplorerRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    CostExplorerRequest::Action action; ///< CostExplorer action to be performed.
    QString apiVersion;        ///< CostExplorer API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< CostExplorer request (query string) parameters. @todo?

    CostExplorerRequestPrivate(const CostExplorerRequest::Action action, CostExplorerRequest * const q);
    CostExplorerRequestPrivate(const CostExplorerRequestPrivate &other, CostExplorerRequest * const q);

    static QString toString(const CostExplorerRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(CostExplorerRequest)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
