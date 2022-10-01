// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELMAILBOXEXPORTJOBRESPONSE_H
#define QTAWS_CANCELMAILBOXEXPORTJOBRESPONSE_H

#include "workmailresponse.h"
#include "cancelmailboxexportjobrequest.h"

namespace QtAws {
namespace WorkMail {

class CancelMailboxExportJobResponsePrivate;

class QTAWSWORKMAIL_EXPORT CancelMailboxExportJobResponse : public WorkMailResponse {
    Q_OBJECT

public:
    CancelMailboxExportJobResponse(const CancelMailboxExportJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CancelMailboxExportJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelMailboxExportJobResponse)
    Q_DISABLE_COPY(CancelMailboxExportJobResponse)

};

} // namespace WorkMail
} // namespace QtAws

#endif
