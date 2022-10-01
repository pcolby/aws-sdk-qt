// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTEXTERNALEVALUATIONRESPONSE_H
#define QTAWS_PUTEXTERNALEVALUATIONRESPONSE_H

#include "configserviceresponse.h"
#include "putexternalevaluationrequest.h"

namespace QtAws {
namespace ConfigService {

class PutExternalEvaluationResponsePrivate;

class QTAWSCONFIGSERVICE_EXPORT PutExternalEvaluationResponse : public ConfigServiceResponse {
    Q_OBJECT

public:
    PutExternalEvaluationResponse(const PutExternalEvaluationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutExternalEvaluationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutExternalEvaluationResponse)
    Q_DISABLE_COPY(PutExternalEvaluationResponse)

};

} // namespace ConfigService
} // namespace QtAws

#endif
