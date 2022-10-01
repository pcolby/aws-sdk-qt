// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTDETECTORRESPONSE_H
#define QTAWS_PUTDETECTORRESPONSE_H

#include "frauddetectorresponse.h"
#include "putdetectorrequest.h"

namespace QtAws {
namespace FraudDetector {

class PutDetectorResponsePrivate;

class QTAWSFRAUDDETECTOR_EXPORT PutDetectorResponse : public FraudDetectorResponse {
    Q_OBJECT

public:
    PutDetectorResponse(const PutDetectorRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutDetectorRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutDetectorResponse)
    Q_DISABLE_COPY(PutDetectorResponse)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
