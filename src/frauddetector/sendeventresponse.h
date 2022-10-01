// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDEVENTRESPONSE_H
#define QTAWS_SENDEVENTRESPONSE_H

#include "frauddetectorresponse.h"
#include "sendeventrequest.h"

namespace QtAws {
namespace FraudDetector {

class SendEventResponsePrivate;

class QTAWSFRAUDDETECTOR_EXPORT SendEventResponse : public FraudDetectorResponse {
    Q_OBJECT

public:
    SendEventResponse(const SendEventRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SendEventRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SendEventResponse)
    Q_DISABLE_COPY(SendEventResponse)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
