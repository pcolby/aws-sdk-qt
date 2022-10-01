// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOMPLIANCEDETAILSBYRESOURCEREQUEST_H
#define QTAWS_GETCOMPLIANCEDETAILSBYRESOURCEREQUEST_H

#include "configservicerequest.h"

namespace QtAws {
namespace ConfigService {

class GetComplianceDetailsByResourceRequestPrivate;

class QTAWSCONFIGSERVICE_EXPORT GetComplianceDetailsByResourceRequest : public ConfigServiceRequest {

public:
    GetComplianceDetailsByResourceRequest(const GetComplianceDetailsByResourceRequest &other);
    GetComplianceDetailsByResourceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetComplianceDetailsByResourceRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
