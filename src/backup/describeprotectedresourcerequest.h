// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPROTECTEDRESOURCEREQUEST_H
#define QTAWS_DESCRIBEPROTECTEDRESOURCEREQUEST_H

#include "backuprequest.h"

namespace QtAws {
namespace Backup {

class DescribeProtectedResourceRequestPrivate;

class QTAWSBACKUP_EXPORT DescribeProtectedResourceRequest : public BackupRequest {

public:
    DescribeProtectedResourceRequest(const DescribeProtectedResourceRequest &other);
    DescribeProtectedResourceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeProtectedResourceRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
