// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCOPYJOBSRESPONSE_P_H
#define QTAWS_LISTCOPYJOBSRESPONSE_P_H

#include "backupresponse_p.h"

namespace QtAws {
namespace Backup {

class ListCopyJobsResponse;

class ListCopyJobsResponsePrivate : public BackupResponsePrivate {

public:

    explicit ListCopyJobsResponsePrivate(ListCopyJobsResponse * const q);

    void parseListCopyJobsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListCopyJobsResponse)
    Q_DISABLE_COPY(ListCopyJobsResponsePrivate)

};

} // namespace Backup
} // namespace QtAws

#endif
