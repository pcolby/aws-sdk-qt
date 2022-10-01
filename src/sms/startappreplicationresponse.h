// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTAPPREPLICATIONRESPONSE_H
#define QTAWS_STARTAPPREPLICATIONRESPONSE_H

#include "smsresponse.h"
#include "startappreplicationrequest.h"

namespace QtAws {
namespace Sms {

class StartAppReplicationResponsePrivate;

class QTAWSSMS_EXPORT StartAppReplicationResponse : public SmsResponse {
    Q_OBJECT

public:
    StartAppReplicationResponse(const StartAppReplicationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartAppReplicationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartAppReplicationResponse)
    Q_DISABLE_COPY(StartAppReplicationResponse)

};

} // namespace Sms
} // namespace QtAws

#endif
