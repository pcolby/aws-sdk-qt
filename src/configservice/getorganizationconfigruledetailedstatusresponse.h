// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETORGANIZATIONCONFIGRULEDETAILEDSTATUSRESPONSE_H
#define QTAWS_GETORGANIZATIONCONFIGRULEDETAILEDSTATUSRESPONSE_H

#include "configserviceresponse.h"
#include "getorganizationconfigruledetailedstatusrequest.h"

namespace QtAws {
namespace ConfigService {

class GetOrganizationConfigRuleDetailedStatusResponsePrivate;

class QTAWSCONFIGSERVICE_EXPORT GetOrganizationConfigRuleDetailedStatusResponse : public ConfigServiceResponse {
    Q_OBJECT

public:
    GetOrganizationConfigRuleDetailedStatusResponse(const GetOrganizationConfigRuleDetailedStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetOrganizationConfigRuleDetailedStatusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetOrganizationConfigRuleDetailedStatusResponse)
    Q_DISABLE_COPY(GetOrganizationConfigRuleDetailedStatusResponse)

};

} // namespace ConfigService
} // namespace QtAws

#endif
