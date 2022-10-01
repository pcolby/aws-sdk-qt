// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONFIGRULESREQUEST_H
#define QTAWS_DESCRIBECONFIGRULESREQUEST_H

#include "configservicerequest.h"

namespace QtAws {
namespace ConfigService {

class DescribeConfigRulesRequestPrivate;

class QTAWSCONFIGSERVICE_EXPORT DescribeConfigRulesRequest : public ConfigServiceRequest {

public:
    DescribeConfigRulesRequest(const DescribeConfigRulesRequest &other);
    DescribeConfigRulesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeConfigRulesRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
