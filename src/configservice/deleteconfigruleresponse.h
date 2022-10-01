// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONFIGRULERESPONSE_H
#define QTAWS_DELETECONFIGRULERESPONSE_H

#include "configserviceresponse.h"
#include "deleteconfigrulerequest.h"

namespace QtAws {
namespace ConfigService {

class DeleteConfigRuleResponsePrivate;

class QTAWSCONFIGSERVICE_EXPORT DeleteConfigRuleResponse : public ConfigServiceResponse {
    Q_OBJECT

public:
    DeleteConfigRuleResponse(const DeleteConfigRuleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteConfigRuleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteConfigRuleResponse)
    Q_DISABLE_COPY(DeleteConfigRuleResponse)

};

} // namespace ConfigService
} // namespace QtAws

#endif
