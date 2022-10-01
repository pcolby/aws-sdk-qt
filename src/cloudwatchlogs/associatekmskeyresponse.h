// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEKMSKEYRESPONSE_H
#define QTAWS_ASSOCIATEKMSKEYRESPONSE_H

#include "cloudwatchlogsresponse.h"
#include "associatekmskeyrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class AssociateKmsKeyResponsePrivate;

class QTAWSCLOUDWATCHLOGS_EXPORT AssociateKmsKeyResponse : public CloudWatchLogsResponse {
    Q_OBJECT

public:
    AssociateKmsKeyResponse(const AssociateKmsKeyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateKmsKeyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateKmsKeyResponse)
    Q_DISABLE_COPY(AssociateKmsKeyResponse)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
