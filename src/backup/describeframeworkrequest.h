// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFRAMEWORKREQUEST_H
#define QTAWS_DESCRIBEFRAMEWORKREQUEST_H

#include "backuprequest.h"

namespace QtAws {
namespace Backup {

class DescribeFrameworkRequestPrivate;

class QTAWSBACKUP_EXPORT DescribeFrameworkRequest : public BackupRequest {

public:
    DescribeFrameworkRequest(const DescribeFrameworkRequest &other);
    DescribeFrameworkRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeFrameworkRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
