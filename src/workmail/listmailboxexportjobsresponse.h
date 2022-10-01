// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMAILBOXEXPORTJOBSRESPONSE_H
#define QTAWS_LISTMAILBOXEXPORTJOBSRESPONSE_H

#include "workmailresponse.h"
#include "listmailboxexportjobsrequest.h"

namespace QtAws {
namespace WorkMail {

class ListMailboxExportJobsResponsePrivate;

class QTAWSWORKMAIL_EXPORT ListMailboxExportJobsResponse : public WorkMailResponse {
    Q_OBJECT

public:
    ListMailboxExportJobsResponse(const ListMailboxExportJobsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListMailboxExportJobsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListMailboxExportJobsResponse)
    Q_DISABLE_COPY(ListMailboxExportJobsResponse)

};

} // namespace WorkMail
} // namespace QtAws

#endif
