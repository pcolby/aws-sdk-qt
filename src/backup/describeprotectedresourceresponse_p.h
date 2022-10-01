// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPROTECTEDRESOURCERESPONSE_P_H
#define QTAWS_DESCRIBEPROTECTEDRESOURCERESPONSE_P_H

#include "backupresponse_p.h"

namespace QtAws {
namespace Backup {

class DescribeProtectedResourceResponse;

class DescribeProtectedResourceResponsePrivate : public BackupResponsePrivate {

public:

    explicit DescribeProtectedResourceResponsePrivate(DescribeProtectedResourceResponse * const q);

    void parseDescribeProtectedResourceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeProtectedResourceResponse)
    Q_DISABLE_COPY(DescribeProtectedResourceResponsePrivate)

};

} // namespace Backup
} // namespace QtAws

#endif
