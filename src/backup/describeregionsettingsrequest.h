// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREGIONSETTINGSREQUEST_H
#define QTAWS_DESCRIBEREGIONSETTINGSREQUEST_H

#include "backuprequest.h"

namespace QtAws {
namespace Backup {

class DescribeRegionSettingsRequestPrivate;

class QTAWSBACKUP_EXPORT DescribeRegionSettingsRequest : public BackupRequest {

public:
    DescribeRegionSettingsRequest(const DescribeRegionSettingsRequest &other);
    DescribeRegionSettingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeRegionSettingsRequest)

};

} // namespace Backup
} // namespace QtAws

#endif
