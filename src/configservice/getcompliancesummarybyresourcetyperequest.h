// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOMPLIANCESUMMARYBYRESOURCETYPEREQUEST_H
#define QTAWS_GETCOMPLIANCESUMMARYBYRESOURCETYPEREQUEST_H

#include "configservicerequest.h"

namespace QtAws {
namespace ConfigService {

class GetComplianceSummaryByResourceTypeRequestPrivate;

class QTAWSCONFIGSERVICE_EXPORT GetComplianceSummaryByResourceTypeRequest : public ConfigServiceRequest {

public:
    GetComplianceSummaryByResourceTypeRequest(const GetComplianceSummaryByResourceTypeRequest &other);
    GetComplianceSummaryByResourceTypeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetComplianceSummaryByResourceTypeRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
