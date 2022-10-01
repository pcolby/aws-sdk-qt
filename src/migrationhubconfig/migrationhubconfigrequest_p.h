// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MIGRATIONHUBCONFIGREQUEST_P_H
#define QTAWS_MIGRATIONHUBCONFIGREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "migrationhubconfigrequest.h"

namespace QtAws {
namespace MigrationHubConfig {

class MigrationHubConfigRequest;

class MigrationHubConfigRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    MigrationHubConfigRequest::Action action; ///< MigrationHubConfig action to be performed.
    QString apiVersion;        ///< MigrationHubConfig API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< MigrationHubConfig request (query string) parameters. @todo?

    MigrationHubConfigRequestPrivate(const MigrationHubConfigRequest::Action action, MigrationHubConfigRequest * const q);
    MigrationHubConfigRequestPrivate(const MigrationHubConfigRequestPrivate &other, MigrationHubConfigRequest * const q);

    static QString toString(const MigrationHubConfigRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(MigrationHubConfigRequest)

};

} // namespace MigrationHubConfig
} // namespace QtAws

#endif
