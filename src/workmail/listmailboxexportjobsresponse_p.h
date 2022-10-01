// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMAILBOXEXPORTJOBSRESPONSE_P_H
#define QTAWS_LISTMAILBOXEXPORTJOBSRESPONSE_P_H

#include "workmailresponse_p.h"

namespace QtAws {
namespace WorkMail {

class ListMailboxExportJobsResponse;

class ListMailboxExportJobsResponsePrivate : public WorkMailResponsePrivate {

public:

    explicit ListMailboxExportJobsResponsePrivate(ListMailboxExportJobsResponse * const q);

    void parseListMailboxExportJobsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListMailboxExportJobsResponse)
    Q_DISABLE_COPY(ListMailboxExportJobsResponsePrivate)

};

} // namespace WorkMail
} // namespace QtAws

#endif
