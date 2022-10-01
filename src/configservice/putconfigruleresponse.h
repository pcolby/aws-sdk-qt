// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCONFIGRULERESPONSE_H
#define QTAWS_PUTCONFIGRULERESPONSE_H

#include "configserviceresponse.h"
#include "putconfigrulerequest.h"

namespace QtAws {
namespace ConfigService {

class PutConfigRuleResponsePrivate;

class QTAWSCONFIGSERVICE_EXPORT PutConfigRuleResponse : public ConfigServiceResponse {
    Q_OBJECT

public:
    PutConfigRuleResponse(const PutConfigRuleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutConfigRuleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutConfigRuleResponse)
    Q_DISABLE_COPY(PutConfigRuleResponse)

};

} // namespace ConfigService
} // namespace QtAws

#endif
