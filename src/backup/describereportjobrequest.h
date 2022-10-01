// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREPORTJOBREQUEST_H
#define QTAWS_DESCRIBEREPORTJOBREQUEST_H

#include "backuprequest.h"

namespace QtAws {
namespace Backup {

class DescribeReportJobRequestPrivate;

class QTAWSBACKUP_EXPORT DescribeReportJobRequest : public BackupRequest {

public:
    DescribeReportJobRequest(const DescribeReportJobRequest &other);
    DescribeReportJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeReportJobRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
