// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESTOREJOBSREQUEST_H
#define QTAWS_LISTRESTOREJOBSREQUEST_H

#include "backuprequest.h"

namespace QtAws {
namespace Backup {

class ListRestoreJobsRequestPrivate;

class QTAWSBACKUP_EXPORT ListRestoreJobsRequest : public BackupRequest {

public:
    ListRestoreJobsRequest(const ListRestoreJobsRequest &other);
    ListRestoreJobsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRestoreJobsRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
