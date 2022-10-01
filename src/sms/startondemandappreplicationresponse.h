// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTONDEMANDAPPREPLICATIONRESPONSE_H
#define QTAWS_STARTONDEMANDAPPREPLICATIONRESPONSE_H

#include "smsresponse.h"
#include "startondemandappreplicationrequest.h"

namespace QtAws {
namespace Sms {

class StartOnDemandAppReplicationResponsePrivate;

class QTAWSSMS_EXPORT StartOnDemandAppReplicationResponse : public SmsResponse {
    Q_OBJECT

public:
    StartOnDemandAppReplicationResponse(const StartOnDemandAppReplicationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartOnDemandAppReplicationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartOnDemandAppReplicationResponse)
    Q_DISABLE_COPY(StartOnDemandAppReplicationResponse)

};

} // namespace Sms
} // namespace QtAws

#endif
