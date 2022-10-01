// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOMPLIANCESUMMARYBYCONFIGRULEREQUEST_H
#define QTAWS_GETCOMPLIANCESUMMARYBYCONFIGRULEREQUEST_H

#include "configservicerequest.h"

namespace QtAws {
namespace ConfigService {

class GetComplianceSummaryByConfigRuleRequestPrivate;

class QTAWSCONFIGSERVICE_EXPORT GetComplianceSummaryByConfigRuleRequest : public ConfigServiceRequest {

public:
    GetComplianceSummaryByConfigRuleRequest(const GetComplianceSummaryByConfigRuleRequest &other);
    GetComplianceSummaryByConfigRuleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetComplianceSummaryByConfigRuleRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
