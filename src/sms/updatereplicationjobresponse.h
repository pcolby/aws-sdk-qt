// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEREPLICATIONJOBRESPONSE_H
#define QTAWS_UPDATEREPLICATIONJOBRESPONSE_H

#include "smsresponse.h"
#include "updatereplicationjobrequest.h"

namespace QtAws {
namespace Sms {

class UpdateReplicationJobResponsePrivate;

class QTAWSSMS_EXPORT UpdateReplicationJobResponse : public SmsResponse {
    Q_OBJECT

public:
    UpdateReplicationJobResponse(const UpdateReplicationJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateReplicationJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateReplicationJobResponse)
    Q_DISABLE_COPY(UpdateReplicationJobResponse)

};

} // namespace Sms
} // namespace QtAws

#endif
