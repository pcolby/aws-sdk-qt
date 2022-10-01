// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEREPLICATIONJOBRESPONSE_H
#define QTAWS_CREATEREPLICATIONJOBRESPONSE_H

#include "smsresponse.h"
#include "createreplicationjobrequest.h"

namespace QtAws {
namespace Sms {

class CreateReplicationJobResponsePrivate;

class QTAWSSMS_EXPORT CreateReplicationJobResponse : public SmsResponse {
    Q_OBJECT

public:
    CreateReplicationJobResponse(const CreateReplicationJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateReplicationJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateReplicationJobResponse)
    Q_DISABLE_COPY(CreateReplicationJobResponse)

};

} // namespace Sms
} // namespace QtAws

#endif
