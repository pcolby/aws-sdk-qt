// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BACKUPREQUEST_P_H
#define QTAWS_BACKUPREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "backuprequest.h"

namespace QtAws {
namespace Backup {

class BackupRequest;

class BackupRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    BackupRequest::Action action; ///< Backup action to be performed.
    QString apiVersion;        ///< Backup API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Backup request (query string) parameters. @todo?

    BackupRequestPrivate(const BackupRequest::Action action, BackupRequest * const q);
    BackupRequestPrivate(const BackupRequestPrivate &other, BackupRequest * const q);

    static QString toString(const BackupRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(BackupRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
