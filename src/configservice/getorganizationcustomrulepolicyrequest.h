// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETORGANIZATIONCUSTOMRULEPOLICYREQUEST_H
#define QTAWS_GETORGANIZATIONCUSTOMRULEPOLICYREQUEST_H

#include "configservicerequest.h"

namespace QtAws {
namespace ConfigService {

class GetOrganizationCustomRulePolicyRequestPrivate;

class QTAWSCONFIGSERVICE_EXPORT GetOrganizationCustomRulePolicyRequest : public ConfigServiceRequest {

public:
    GetOrganizationCustomRulePolicyRequest(const GetOrganizationCustomRulePolicyRequest &other);
    GetOrganizationCustomRulePolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetOrganizationCustomRulePolicyRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
