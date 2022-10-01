// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEVENTPREDICTIONMETADATARESPONSE_H
#define QTAWS_GETEVENTPREDICTIONMETADATARESPONSE_H

#include "frauddetectorresponse.h"
#include "geteventpredictionmetadatarequest.h"

namespace QtAws {
namespace FraudDetector {

class GetEventPredictionMetadataResponsePrivate;

class QTAWSFRAUDDETECTOR_EXPORT GetEventPredictionMetadataResponse : public FraudDetectorResponse {
    Q_OBJECT

public:
    GetEventPredictionMetadataResponse(const GetEventPredictionMetadataRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetEventPredictionMetadataRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetEventPredictionMetadataResponse)
    Q_DISABLE_COPY(GetEventPredictionMetadataResponse)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
