// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREPORTPLANSRESPONSE_P_H
#define QTAWS_LISTREPORTPLANSRESPONSE_P_H

#include "backupresponse_p.h"

namespace QtAws {
namespace Backup {

class ListReportPlansResponse;

class ListReportPlansResponsePrivate : public BackupResponsePrivate {

public:

    explicit ListReportPlansResponsePrivate(ListReportPlansResponse * const q);

    void parseListReportPlansResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListReportPlansResponse)
    Q_DISABLE_COPY(ListReportPlansResponsePrivate)

};

} // namespace Backup
} // namespace QtAws

#endif
