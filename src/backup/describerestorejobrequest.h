// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESTOREJOBREQUEST_H
#define QTAWS_DESCRIBERESTOREJOBREQUEST_H

#include "backuprequest.h"

namespace QtAws {
namespace Backup {

class DescribeRestoreJobRequestPrivate;

class QTAWSBACKUP_EXPORT DescribeRestoreJobRequest : public BackupRequest {

public:
    DescribeRestoreJobRequest(const DescribeRestoreJobRequest &other);
    DescribeRestoreJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeRestoreJobRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
