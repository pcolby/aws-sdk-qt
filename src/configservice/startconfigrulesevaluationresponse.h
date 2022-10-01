// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTCONFIGRULESEVALUATIONRESPONSE_H
#define QTAWS_STARTCONFIGRULESEVALUATIONRESPONSE_H

#include "configserviceresponse.h"
#include "startconfigrulesevaluationrequest.h"

namespace QtAws {
namespace ConfigService {

class StartConfigRulesEvaluationResponsePrivate;

class QTAWSCONFIGSERVICE_EXPORT StartConfigRulesEvaluationResponse : public ConfigServiceResponse {
    Q_OBJECT

public:
    StartConfigRulesEvaluationResponse(const StartConfigRulesEvaluationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartConfigRulesEvaluationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartConfigRulesEvaluationResponse)
    Q_DISABLE_COPY(StartConfigRulesEvaluationResponse)

};

} // namespace ConfigService
} // namespace QtAws

#endif
