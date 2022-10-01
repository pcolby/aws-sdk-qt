// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECOMPLIANCEBYCONFIGRULEREQUEST_H
#define QTAWS_DESCRIBECOMPLIANCEBYCONFIGRULEREQUEST_H

#include "configservicerequest.h"

namespace QtAws {
namespace ConfigService {

class DescribeComplianceByConfigRuleRequestPrivate;

class QTAWSCONFIGSERVICE_EXPORT DescribeComplianceByConfigRuleRequest : public ConfigServiceRequest {

public:
    DescribeComplianceByConfigRuleRequest(const DescribeComplianceByConfigRuleRequest &other);
    DescribeComplianceByConfigRuleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeComplianceByConfigRuleRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
