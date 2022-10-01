// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTCONFIGRULESEVALUATIONREQUEST_H
#define QTAWS_STARTCONFIGRULESEVALUATIONREQUEST_H

#include "configservicerequest.h"

namespace QtAws {
namespace ConfigService {

class StartConfigRulesEvaluationRequestPrivate;

class QTAWSCONFIGSERVICE_EXPORT StartConfigRulesEvaluationRequest : public ConfigServiceRequest {

public:
    StartConfigRulesEvaluationRequest(const StartConfigRulesEvaluationRequest &other);
    StartConfigRulesEvaluationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartConfigRulesEvaluationRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
