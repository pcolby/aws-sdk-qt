// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERULEGROUPRESPONSE_H
#define QTAWS_DELETERULEGROUPRESPONSE_H

#include "wafv2response.h"
#include "deleterulegrouprequest.h"

namespace QtAws {
namespace Wafv2 {

class DeleteRuleGroupResponsePrivate;

class QTAWSWAFV2_EXPORT DeleteRuleGroupResponse : public Wafv2Response {
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

} // namespace Wafv2
} // namespace QtAws

#endif
