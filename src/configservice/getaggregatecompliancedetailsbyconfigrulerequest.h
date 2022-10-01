// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAGGREGATECOMPLIANCEDETAILSBYCONFIGRULEREQUEST_H
#define QTAWS_GETAGGREGATECOMPLIANCEDETAILSBYCONFIGRULEREQUEST_H

#include "configservicerequest.h"

namespace QtAws {
namespace ConfigService {

class GetAggregateComplianceDetailsByConfigRuleRequestPrivate;

class QTAWSCONFIGSERVICE_EXPORT GetAggregateComplianceDetailsByConfigRuleRequest : public ConfigServiceRequest {

public:
    GetAggregateComplianceDetailsByConfigRuleRequest(const GetAggregateComplianceDetailsByConfigRuleRequest &other);
    GetAggregateComplianceDetailsByConfigRuleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAggregateComplianceDetailsByConfigRuleRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
