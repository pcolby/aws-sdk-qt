// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRECOVERYPOINTSBYRESOURCEREQUEST_H
#define QTAWS_LISTRECOVERYPOINTSBYRESOURCEREQUEST_H

#include "backuprequest.h"

namespace QtAws {
namespace Backup {

class ListRecoveryPointsByResourceRequestPrivate;

class QTAWSBACKUP_EXPORT ListRecoveryPointsByResourceRequest : public BackupRequest {

public:
    ListRecoveryPointsByResourceRequest(const ListRecoveryPointsByResourceRequest &other);
    ListRecoveryPointsByResourceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRecoveryPointsByResourceRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
