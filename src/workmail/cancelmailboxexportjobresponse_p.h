// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELMAILBOXEXPORTJOBRESPONSE_P_H
#define QTAWS_CANCELMAILBOXEXPORTJOBRESPONSE_P_H

#include "workmailresponse_p.h"

namespace QtAws {
namespace WorkMail {

class CancelMailboxExportJobResponse;

class CancelMailboxExportJobResponsePrivate : public WorkMailResponsePrivate {

public:

    explicit CancelMailboxExportJobResponsePrivate(CancelMailboxExportJobResponse * const q);

    void parseCancelMailboxExportJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CancelMailboxExportJobResponse)
    Q_DISABLE_COPY(CancelMailboxExportJobResponsePrivate)

};

} // namespace WorkMail
} // namespace QtAws

#endif
