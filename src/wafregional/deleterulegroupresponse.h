// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERULEGROUPRESPONSE_H
#define QTAWS_DELETERULEGROUPRESPONSE_H

#include "wafregionalresponse.h"
#include "deleterulegrouprequest.h"

namespace QtAws {
namespace WafRegional {

class DeleteRuleGroupResponsePrivate;

class QTAWSWAFREGIONAL_EXPORT DeleteRuleGroupResponse : public WafRegionalResponse {
    Q_OBJECT

public:
    DeleteRuleGroupResponse(const DeleteRuleGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteRuleGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteRuleGroupResponse)
    Q_DISABLE_COPY(DeleteRuleGroupResponse)

};

} // namespace WafRegional
} // namespace QtAws

#endif
