// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMAILBOXEXPORTJOBRESPONSE_H
#define QTAWS_DESCRIBEMAILBOXEXPORTJOBRESPONSE_H

#include "workmailresponse.h"
#include "describemailboxexportjobrequest.h"

namespace QtAws {
namespace WorkMail {

class DescribeMailboxExportJobResponsePrivate;

class QTAWSWORKMAIL_EXPORT DescribeMailboxExportJobResponse : public WorkMailResponse {
    Q_OBJECT

public:
    DescribeMailboxExportJobResponse(const DescribeMailboxExportJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeMailboxExportJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeMailboxExportJobResponse)
    Q_DISABLE_COPY(DescribeMailboxExportJobResponse)

};

} // namespace WorkMail
} // namespace QtAws

#endif
