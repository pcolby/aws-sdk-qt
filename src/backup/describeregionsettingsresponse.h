// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREGIONSETTINGSRESPONSE_H
#define QTAWS_DESCRIBEREGIONSETTINGSRESPONSE_H

#include "backupresponse.h"
#include "describeregionsettingsrequest.h"

namespace QtAws {
namespace Backup {

class DescribeRegionSettingsResponsePrivate;

class QTAWSBACKUP_EXPORT DescribeRegionSettingsResponse : public BackupResponse {
    Q_OBJECT

public:
    DescribeRegionSettingsResponse(const DescribeRegionSettingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeRegionSettingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeRegionSettingsResponse)
    Q_DISABLE_COPY(DescribeRegionSettingsResponse)

};

} // namespace Backup
} // namespace QtAws

#endif
