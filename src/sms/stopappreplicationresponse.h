// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPAPPREPLICATIONRESPONSE_H
#define QTAWS_STOPAPPREPLICATIONRESPONSE_H

#include "smsresponse.h"
#include "stopappreplicationrequest.h"

namespace QtAws {
namespace Sms {

class StopAppReplicationResponsePrivate;

class QTAWSSMS_EXPORT StopAppReplicationResponse : public SmsResponse {
    Q_OBJECT

public:
    StopAppReplicationResponse(const StopAppReplicationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopAppReplicationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopAppReplicationResponse)
    Q_DISABLE_COPY(StopAppReplicationResponse)

};

} // namespace Sms
} // namespace QtAws

#endif
