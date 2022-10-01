// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOMPLIANCEDETAILSBYCONFIGRULEREQUEST_H
#define QTAWS_GETCOMPLIANCEDETAILSBYCONFIGRULEREQUEST_H

#include "configservicerequest.h"

namespace QtAws {
namespace ConfigService {

class GetComplianceDetailsByConfigRuleRequestPrivate;

class QTAWSCONFIGSERVICE_EXPORT GetComplianceDetailsByConfigRuleRequest : public ConfigServiceRequest {

public:
    GetComplianceDetailsByConfigRuleRequest(const GetComplianceDetailsByConfigRuleRequest &other);
    GetComplianceDetailsByConfigRuleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetComplianceDetailsByConfigRuleRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
