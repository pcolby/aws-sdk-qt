// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERULERESPONSE_H
#define QTAWS_UPDATERULERESPONSE_H

#include "wafregionalresponse.h"
#include "updaterulerequest.h"

namespace QtAws {
namespace WafRegional {

class UpdateRuleResponsePrivate;

class QTAWSWAFREGIONAL_EXPORT UpdateRuleResponse : public WafRegionalResponse {
    Q_OBJECT

public:
    UpdateRuleResponse(const UpdateRuleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateRuleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateRuleResponse)
    Q_DISABLE_COPY(UpdateRuleResponse)

};

} // namespace WafRegional
} // namespace QtAws

#endif
