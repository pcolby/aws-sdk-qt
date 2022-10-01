// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTMAILBOXEXPORTJOBRESPONSE_H
#define QTAWS_STARTMAILBOXEXPORTJOBRESPONSE_H

#include "workmailresponse.h"
#include "startmailboxexportjobrequest.h"

namespace QtAws {
namespace WorkMail {

class StartMailboxExportJobResponsePrivate;

class QTAWSWORKMAIL_EXPORT StartMailboxExportJobResponse : public WorkMailResponse {
    Q_OBJECT

public:
    StartMailboxExportJobResponse(const StartMailboxExportJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartMailboxExportJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartMailboxExportJobResponse)
    Q_DISABLE_COPY(StartMailboxExportJobResponse)

};

} // namespace WorkMail
} // namespace QtAws

#endif
