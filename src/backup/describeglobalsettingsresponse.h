// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEGLOBALSETTINGSRESPONSE_H
#define QTAWS_DESCRIBEGLOBALSETTINGSRESPONSE_H

#include "backupresponse.h"
#include "describeglobalsettingsrequest.h"

namespace QtAws {
namespace Backup {

class DescribeGlobalSettingsResponsePrivate;

class QTAWSBACKUP_EXPORT DescribeGlobalSettingsResponse : public BackupResponse {
    Q_OBJECT

public:
    DescribeGlobalSettingsResponse(const DescribeGlobalSettingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeGlobalSettingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeGlobalSettingsResponse)
    Q_DISABLE_COPY(DescribeGlobalSettingsResponse)

};

} // namespace Backup
} // namespace QtAws

#endif
