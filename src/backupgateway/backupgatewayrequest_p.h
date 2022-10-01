// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BACKUPGATEWAYREQUEST_P_H
#define QTAWS_BACKUPGATEWAYREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "backupgatewayrequest.h"

namespace QtAws {
namespace BackupGateway {

class BackupGatewayRequest;

class BackupGatewayRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    BackupGatewayRequest::Action action; ///< BackupGateway action to be performed.
    QString apiVersion;        ///< BackupGateway API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< BackupGateway request (query string) parameters. @todo?

    BackupGatewayRequestPrivate(const BackupGatewayRequest::Action action, BackupGatewayRequest * const q);
    BackupGatewayRequestPrivate(const BackupGatewayRequestPrivate &other, BackupGatewayRequest * const q);

    static QString toString(const BackupGatewayRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(BackupGatewayRequest)

};

} // namespace BackupGateway
} // namespace QtAws

#endif
