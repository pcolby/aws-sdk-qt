// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHCREATEVARIABLERESPONSE_H
#define QTAWS_BATCHCREATEVARIABLERESPONSE_H

#include "frauddetectorresponse.h"
#include "batchcreatevariablerequest.h"

namespace QtAws {
namespace FraudDetector {

class BatchCreateVariableResponsePrivate;

class QTAWSFRAUDDETECTOR_EXPORT BatchCreateVariableResponse : public FraudDetectorResponse {
    Q_OBJECT

public:
    BatchCreateVariableResponse(const BatchCreateVariableRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchCreateVariableRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchCreateVariableResponse)
    Q_DISABLE_COPY(BatchCreateVariableResponse)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
