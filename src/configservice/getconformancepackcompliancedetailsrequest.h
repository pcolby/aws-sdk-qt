// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONFORMANCEPACKCOMPLIANCEDETAILSREQUEST_H
#define QTAWS_GETCONFORMANCEPACKCOMPLIANCEDETAILSREQUEST_H

#include "configservicerequest.h"

namespace QtAws {
namespace ConfigService {

class GetConformancePackComplianceDetailsRequestPrivate;

class QTAWSCONFIGSERVICE_EXPORT GetConformancePackComplianceDetailsRequest : public ConfigServiceRequest {

public:
    GetConformancePackComplianceDetailsRequest(const GetConformancePackComplianceDetailsRequest &other);
    GetConformancePackComplianceDetailsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetConformancePackComplianceDetailsRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
