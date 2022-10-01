// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEKMSKEYRESPONSE_H
#define QTAWS_DISASSOCIATEKMSKEYRESPONSE_H

#include "cloudwatchlogsresponse.h"
#include "disassociatekmskeyrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class DisassociateKmsKeyResponsePrivate;

class QTAWSCLOUDWATCHLOGS_EXPORT DisassociateKmsKeyResponse : public CloudWatchLogsResponse {
    Q_OBJECT

public:
    DisassociateKmsKeyResponse(const DisassociateKmsKeyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateKmsKeyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateKmsKeyResponse)
    Q_DISABLE_COPY(DisassociateKmsKeyResponse)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
