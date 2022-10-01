// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BACKUPSTORAGEREQUEST_P_H
#define QTAWS_BACKUPSTORAGEREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "backupstoragerequest.h"

namespace QtAws {
namespace BackupStorage {

class BackupStorageRequest;

class BackupStorageRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    BackupStorageRequest::Action action; ///< BackupStorage action to be performed.
    QString apiVersion;        ///< BackupStorage API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< BackupStorage request (query string) parameters. @todo?

    BackupStorageRequestPrivate(const BackupStorageRequest::Action action, BackupStorageRequest * const q);
    BackupStorageRequestPrivate(const BackupStorageRequestPrivate &other, BackupStorageRequest * const q);

    static QString toString(const BackupStorageRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(BackupStorageRequest)

};

} // namespace BackupStorage
} // namespace QtAws

#endif
