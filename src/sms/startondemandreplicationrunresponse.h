// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTONDEMANDREPLICATIONRUNRESPONSE_H
#define QTAWS_STARTONDEMANDREPLICATIONRUNRESPONSE_H

#include "smsresponse.h"
#include "startondemandreplicationrunrequest.h"

namespace QtAws {
namespace Sms {

class StartOnDemandReplicationRunResponsePrivate;

class QTAWSSMS_EXPORT StartOnDemandReplicationRunResponse : public SmsResponse {
    Q_OBJECT

public:
    StartOnDemandReplicationRunResponse(const StartOnDemandReplicationRunRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartOnDemandReplicationRunRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartOnDemandReplicationRunResponse)
    Q_DISABLE_COPY(StartOnDemandReplicationRunResponse)

};

} // namespace Sms
} // namespace QtAws

#endif
