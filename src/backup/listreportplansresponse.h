// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREPORTPLANSRESPONSE_H
#define QTAWS_LISTREPORTPLANSRESPONSE_H

#include "backupresponse.h"
#include "listreportplansrequest.h"

namespace QtAws {
namespace Backup {

class ListReportPlansResponsePrivate;

class QTAWSBACKUP_EXPORT ListReportPlansResponse : public BackupResponse {
    Q_OBJECT

public:
    ListReportPlansResponse(const ListReportPlansRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListReportPlansRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListReportPlansResponse)
    Q_DISABLE_COPY(ListReportPlansResponse)

};

} // namespace Backup
} // namespace QtAws

#endif
