// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEVENTRESPONSE_H
#define QTAWS_GETEVENTRESPONSE_H

#include "frauddetectorresponse.h"
#include "geteventrequest.h"

namespace QtAws {
namespace FraudDetector {

class GetEventResponsePrivate;

class QTAWSFRAUDDETECTOR_EXPORT GetEventResponse : public FraudDetectorResponse {
    Q_OBJECT

public:
    GetEventResponse(const GetEventRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetEventRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetEventResponse)
    Q_DISABLE_COPY(GetEventResponse)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
