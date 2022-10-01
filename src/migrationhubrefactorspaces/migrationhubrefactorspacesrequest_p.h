// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MIGRATIONHUBREFACTORSPACESREQUEST_P_H
#define QTAWS_MIGRATIONHUBREFACTORSPACESREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "migrationhubrefactorspacesrequest.h"

namespace QtAws {
namespace MigrationHubRefactorSpaces {

class MigrationHubRefactorSpacesRequest;

class MigrationHubRefactorSpacesRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    MigrationHubRefactorSpacesRequest::Action action; ///< MigrationHubRefactorSpaces action to be performed.
    QString apiVersion;        ///< MigrationHubRefactorSpaces API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< MigrationHubRefactorSpaces request (query string) parameters. @todo?

    MigrationHubRefactorSpacesRequestPrivate(const MigrationHubRefactorSpacesRequest::Action action, MigrationHubRefactorSpacesRequest * const q);
    MigrationHubRefactorSpacesRequestPrivate(const MigrationHubRefactorSpacesRequestPrivate &other, MigrationHubRefactorSpacesRequest * const q);

    static QString toString(const MigrationHubRefactorSpacesRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(MigrationHubRefactorSpacesRequest)

};

} // namespace MigrationHubRefactorSpaces
} // namespace QtAws

#endif
