// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECOPYJOBRESPONSE_P_H
#define QTAWS_DESCRIBECOPYJOBRESPONSE_P_H

#include "backupresponse_p.h"

namespace QtAws {
namespace Backup {

class DescribeCopyJobResponse;

class DescribeCopyJobResponsePrivate : public BackupResponsePrivate {

public:

    explicit DescribeCopyJobResponsePrivate(DescribeCopyJobResponse * const q);

    void parseDescribeCopyJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeCopyJobResponse)
    Q_DISABLE_COPY(DescribeCopyJobResponsePrivate)

};

} // namespace Backup
} // namespace QtAws

#endif
