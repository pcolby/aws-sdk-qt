// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTOUTCOMERESPONSE_H
#define QTAWS_PUTOUTCOMERESPONSE_H

#include "frauddetectorresponse.h"
#include "putoutcomerequest.h"

namespace QtAws {
namespace FraudDetector {

class PutOutcomeResponsePrivate;

class QTAWSFRAUDDETECTOR_EXPORT PutOutcomeResponse : public FraudDetectorResponse {
    Q_OBJECT

public:
    PutOutcomeResponse(const PutOutcomeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutOutcomeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutOutcomeResponse)
    Q_DISABLE_COPY(PutOutcomeResponse)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
