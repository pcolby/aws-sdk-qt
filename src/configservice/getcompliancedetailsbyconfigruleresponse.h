// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOMPLIANCEDETAILSBYCONFIGRULERESPONSE_H
#define QTAWS_GETCOMPLIANCEDETAILSBYCONFIGRULERESPONSE_H

#include "configserviceresponse.h"
#include "getcompliancedetailsbyconfigrulerequest.h"

namespace QtAws {
namespace ConfigService {

class GetComplianceDetailsByConfigRuleResponsePrivate;

class QTAWSCONFIGSERVICE_EXPORT GetComplianceDetailsByConfigRuleResponse : public ConfigServiceResponse {
    Q_OBJECT

public:
    GetComplianceDetailsByConfigRuleResponse(const GetComplianceDetailsByConfigRuleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetComplianceDetailsByConfigRuleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetComplianceDetailsByConfigRuleResponse)
    Q_DISABLE_COPY(GetComplianceDetailsByConfigRuleResponse)

};

} // namespace ConfigService
} // namespace QtAws

#endif
