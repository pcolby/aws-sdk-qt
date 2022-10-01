// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEHEALTHSERVICESTATUSFORORGANIZATIONREQUEST_H
#define QTAWS_DESCRIBEHEALTHSERVICESTATUSFORORGANIZATIONREQUEST_H

#include "healthrequest.h"

namespace QtAws {
namespace Health {

class DescribeHealthServiceStatusForOrganizationRequestPrivate;

class QTAWSHEALTH_EXPORT DescribeHealthServiceStatusForOrganizationRequest : public HealthRequest {

public:
    DescribeHealthServiceStatusForOrganizationRequest(const DescribeHealthServiceStatusForOrganizationRequest &other);
    DescribeHealthServiceStatusForOrganizationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeHealthServiceStatusForOrganizationRequest)

};

} // namespace Health
} // namespace QtAws

#endif
