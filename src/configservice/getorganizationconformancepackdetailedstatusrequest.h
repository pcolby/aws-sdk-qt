// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETORGANIZATIONCONFORMANCEPACKDETAILEDSTATUSREQUEST_H
#define QTAWS_GETORGANIZATIONCONFORMANCEPACKDETAILEDSTATUSREQUEST_H

#include "configservicerequest.h"

namespace QtAws {
namespace ConfigService {

class GetOrganizationConformancePackDetailedStatusRequestPrivate;

class QTAWSCONFIGSERVICE_EXPORT GetOrganizationConformancePackDetailedStatusRequest : public ConfigServiceRequest {

public:
    GetOrganizationConformancePackDetailedStatusRequest(const GetOrganizationConformancePackDetailedStatusRequest &other);
    GetOrganizationConformancePackDetailedStatusRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetOrganizationConformancePackDetailedStatusRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
