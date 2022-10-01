// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREPORTJOBSREQUEST_H
#define QTAWS_LISTREPORTJOBSREQUEST_H

#include "backuprequest.h"

namespace QtAws {
namespace Backup {

class ListReportJobsRequestPrivate;

class QTAWSBACKUP_EXPORT ListReportJobsRequest : public BackupRequest {

public:
    ListReportJobsRequest(const ListReportJobsRequest &other);
    ListReportJobsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListReportJobsRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
