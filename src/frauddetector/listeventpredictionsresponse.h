// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEVENTPREDICTIONSRESPONSE_H
#define QTAWS_LISTEVENTPREDICTIONSRESPONSE_H

#include "frauddetectorresponse.h"
#include "listeventpredictionsrequest.h"

namespace QtAws {
namespace FraudDetector {

class ListEventPredictionsResponsePrivate;

class QTAWSFRAUDDETECTOR_EXPORT ListEventPredictionsResponse : public FraudDetectorResponse {
    Q_OBJECT

public:
    ListEventPredictionsResponse(const ListEventPredictionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListEventPredictionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListEventPredictionsResponse)
    Q_DISABLE_COPY(ListEventPredictionsResponse)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
