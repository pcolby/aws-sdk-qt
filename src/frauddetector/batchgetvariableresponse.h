// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETVARIABLERESPONSE_H
#define QTAWS_BATCHGETVARIABLERESPONSE_H

#include "frauddetectorresponse.h"
#include "batchgetvariablerequest.h"

namespace QtAws {
namespace FraudDetector {

class BatchGetVariableResponsePrivate;

class QTAWSFRAUDDETECTOR_EXPORT BatchGetVariableResponse : public FraudDetectorResponse {
    Q_OBJECT

public:
    BatchGetVariableResponse(const BatchGetVariableRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchGetVariableRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchGetVariableResponse)
    Q_DISABLE_COPY(BatchGetVariableResponse)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
