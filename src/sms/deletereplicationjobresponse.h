// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREPLICATIONJOBRESPONSE_H
#define QTAWS_DELETEREPLICATIONJOBRESPONSE_H

#include "smsresponse.h"
#include "deletereplicationjobrequest.h"

namespace QtAws {
namespace Sms {

class DeleteReplicationJobResponsePrivate;

class QTAWSSMS_EXPORT DeleteReplicationJobResponse : public SmsResponse {
    Q_OBJECT

public:
    DeleteReplicationJobResponse(const DeleteReplicationJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteReplicationJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteReplicationJobResponse)
    Q_DISABLE_COPY(DeleteReplicationJobResponse)

};

} // namespace Sms
} // namespace QtAws

#endif
