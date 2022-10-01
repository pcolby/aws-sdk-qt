// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETORGANIZATIONCUSTOMRULEPOLICYRESPONSE_H
#define QTAWS_GETORGANIZATIONCUSTOMRULEPOLICYRESPONSE_H

#include "configserviceresponse.h"
#include "getorganizationcustomrulepolicyrequest.h"

namespace QtAws {
namespace ConfigService {

class GetOrganizationCustomRulePolicyResponsePrivate;

class QTAWSCONFIGSERVICE_EXPORT GetOrganizationCustomRulePolicyResponse : public ConfigServiceResponse {
    Q_OBJECT

public:
    GetOrganizationCustomRulePolicyResponse(const GetOrganizationCustomRulePolicyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetOrganizationCustomRulePolicyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetOrganizationCustomRulePolicyResponse)
    Q_DISABLE_COPY(GetOrganizationCustomRulePolicyResponse)

};

} // namespace ConfigService
} // namespace QtAws

#endif
