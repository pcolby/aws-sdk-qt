// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTEXTERNALMODELRESPONSE_H
#define QTAWS_PUTEXTERNALMODELRESPONSE_H

#include "frauddetectorresponse.h"
#include "putexternalmodelrequest.h"

namespace QtAws {
namespace FraudDetector {

class PutExternalModelResponsePrivate;

class QTAWSFRAUDDETECTOR_EXPORT PutExternalModelResponse : public FraudDetectorResponse {
    Q_OBJECT

public:
    PutExternalModelResponse(const PutExternalModelRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutExternalModelRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutExternalModelResponse)
    Q_DISABLE_COPY(PutExternalModelResponse)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
