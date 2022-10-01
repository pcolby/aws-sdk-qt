// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONFORMANCEPACKCOMPLIANCESUMMARYREQUEST_H
#define QTAWS_GETCONFORMANCEPACKCOMPLIANCESUMMARYREQUEST_H

#include "configservicerequest.h"

namespace QtAws {
namespace ConfigService {

class GetConformancePackComplianceSummaryRequestPrivate;

class QTAWSCONFIGSERVICE_EXPORT GetConformancePackComplianceSummaryRequest : public ConfigServiceRequest {

public:
    GetConformancePackComplianceSummaryRequest(const GetConformancePackComplianceSummaryRequest &other);
    GetConformancePackComplianceSummaryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetConformancePackComplianceSummaryRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
