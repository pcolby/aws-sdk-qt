// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESTOREJOBSRESPONSE_P_H
#define QTAWS_LISTRESTOREJOBSRESPONSE_P_H

#include "backupresponse_p.h"

namespace QtAws {
namespace Backup {

class ListRestoreJobsResponse;

class ListRestoreJobsResponsePrivate : public BackupResponsePrivate {

public:

    explicit ListRestoreJobsResponsePrivate(ListRestoreJobsResponse * const q);

    void parseListRestoreJobsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListRestoreJobsResponse)
    Q_DISABLE_COPY(ListRestoreJobsResponsePrivate)

};

} // namespace Backup
} // namespace QtAws

#endif
