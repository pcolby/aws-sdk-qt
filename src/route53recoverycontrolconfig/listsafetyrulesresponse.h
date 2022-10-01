// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSAFETYRULESRESPONSE_H
#define QTAWS_LISTSAFETYRULESRESPONSE_H

#include "route53recoverycontrolconfigresponse.h"
#include "listsafetyrulesrequest.h"

namespace QtAws {
namespace Route53RecoveryControlConfig {

class ListSafetyRulesResponsePrivate;

class QTAWSROUTE53RECOVERYCONTROLCONFIG_EXPORT ListSafetyRulesResponse : public Route53RecoveryControlConfigResponse {
    Q_OBJECT

public:
    ListSafetyRulesResponse(const ListSafetyRulesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListSafetyRulesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSafetyRulesResponse)
    Q_DISABLE_COPY(ListSafetyRulesResponse)

};

} // namespace Route53RecoveryControlConfig
} // namespace QtAws

#endif
