// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEORGANIZATIONCONFIGRULERESPONSE_H
#define QTAWS_DELETEORGANIZATIONCONFIGRULERESPONSE_H

#include "configserviceresponse.h"
#include "deleteorganizationconfigrulerequest.h"

namespace QtAws {
namespace ConfigService {

class DeleteOrganizationConfigRuleResponsePrivate;

class QTAWSCONFIGSERVICE_EXPORT DeleteOrganizationConfigRuleResponse : public ConfigServiceResponse {
    Q_OBJECT

public:
    DeleteOrganizationConfigRuleResponse(const DeleteOrganizationConfigRuleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteOrganizationConfigRuleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteOrganizationConfigRuleResponse)
    Q_DISABLE_COPY(DeleteOrganizationConfigRuleResponse)

};

} // namespace ConfigService
} // namespace QtAws

#endif
