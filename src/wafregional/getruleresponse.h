// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRULERESPONSE_H
#define QTAWS_GETRULERESPONSE_H

#include "wafregionalresponse.h"
#include "getrulerequest.h"

namespace QtAws {
namespace WafRegional {

class GetRuleResponsePrivate;

class QTAWSWAFREGIONAL_EXPORT GetRuleResponse : public WafRegionalResponse {
    Q_OBJECT

public:
    GetRuleResponse(const GetRuleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetRuleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRuleResponse)
    Q_DISABLE_COPY(GetRuleResponse)

};

} // namespace WafRegional
} // namespace QtAws

#endif
