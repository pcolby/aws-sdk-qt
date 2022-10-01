// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MIGRATIONHUBSTRATEGYREQUEST_P_H
#define QTAWS_MIGRATIONHUBSTRATEGYREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "migrationhubstrategyrequest.h"

namespace QtAws {
namespace MigrationHubStrategy {

class MigrationHubStrategyRequest;

class MigrationHubStrategyRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    MigrationHubStrategyRequest::Action action; ///< MigrationHubStrategy action to be performed.
    QString apiVersion;        ///< MigrationHubStrategy API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< MigrationHubStrategy request (query string) parameters. @todo?

    MigrationHubStrategyRequestPrivate(const MigrationHubStrategyRequest::Action action, MigrationHubStrategyRequest * const q);
    MigrationHubStrategyRequestPrivate(const MigrationHubStrategyRequestPrivate &other, MigrationHubStrategyRequest * const q);

    static QString toString(const MigrationHubStrategyRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(MigrationHubStrategyRequest)

};

} // namespace MigrationHubStrategy
} // namespace QtAws

#endif
