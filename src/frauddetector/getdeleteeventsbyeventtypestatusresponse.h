// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDELETEEVENTSBYEVENTTYPESTATUSRESPONSE_H
#define QTAWS_GETDELETEEVENTSBYEVENTTYPESTATUSRESPONSE_H

#include "frauddetectorresponse.h"
#include "getdeleteeventsbyeventtypestatusrequest.h"

namespace QtAws {
namespace FraudDetector {

class GetDeleteEventsByEventTypeStatusResponsePrivate;

class QTAWSFRAUDDETECTOR_EXPORT GetDeleteEventsByEventTypeStatusResponse : public FraudDetectorResponse {
    Q_OBJECT

public:
    GetDeleteEventsByEventTypeStatusResponse(const GetDeleteEventsByEventTypeStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDeleteEventsByEventTypeStatusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDeleteEventsByEventTypeStatusResponse)
    Q_DISABLE_COPY(GetDeleteEventsByEventTypeStatusResponse)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
