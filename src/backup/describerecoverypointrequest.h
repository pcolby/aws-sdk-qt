// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERECOVERYPOINTREQUEST_H
#define QTAWS_DESCRIBERECOVERYPOINTREQUEST_H

#include "backuprequest.h"

namespace QtAws {
namespace Backup {

class DescribeRecoveryPointRequestPrivate;

class QTAWSBACKUP_EXPORT DescribeRecoveryPointRequest : public BackupRequest {

public:
    DescribeRecoveryPointRequest(const DescribeRecoveryPointRequest &other);
    DescribeRecoveryPointRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeRecoveryPointRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
