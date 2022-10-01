// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEVENTPREDICTIONRESPONSE_H
#define QTAWS_GETEVENTPREDICTIONRESPONSE_H

#include "frauddetectorresponse.h"
#include "geteventpredictionrequest.h"

namespace QtAws {
namespace FraudDetector {

class GetEventPredictionResponsePrivate;

class QTAWSFRAUDDETECTOR_EXPORT GetEventPredictionResponse : public FraudDetectorResponse {
    Q_OBJECT

public:
    GetEventPredictionResponse(const GetEventPredictionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetEventPredictionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetEventPredictionResponse)
    Q_DISABLE_COPY(GetEventPredictionResponse)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
