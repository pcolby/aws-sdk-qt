// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MIGRATIONHUBREQUEST_P_H
#define QTAWS_MIGRATIONHUBREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "migrationhubrequest.h"

namespace QtAws {
namespace MigrationHub {

class MigrationHubRequest;

class MigrationHubRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    MigrationHubRequest::Action action; ///< MigrationHub action to be performed.
    QString apiVersion;        ///< MigrationHub API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< MigrationHub request (query string) parameters. @todo?

    MigrationHubRequestPrivate(const MigrationHubRequest::Action action, MigrationHubRequest * const q);
    MigrationHubRequestPrivate(const MigrationHubRequestPrivate &other, MigrationHubRequest * const q);

    static QString toString(const MigrationHubRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(MigrationHubRequest)

};

} // namespace MigrationHub
} // namespace QtAws

#endif
