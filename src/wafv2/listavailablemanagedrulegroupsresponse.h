// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAVAILABLEMANAGEDRULEGROUPSRESPONSE_H
#define QTAWS_LISTAVAILABLEMANAGEDRULEGROUPSRESPONSE_H

#include "wafv2response.h"
#include "listavailablemanagedrulegroupsrequest.h"

namespace QtAws {
namespace Wafv2 {

class ListAvailableManagedRuleGroupsResponsePrivate;

class QTAWSWAFV2_EXPORT ListAvailableManagedRuleGroupsResponse : public Wafv2Response {
    Q_OBJECT

public:
    ListAvailableManagedRuleGroupsResponse(const ListAvailableManagedRuleGroupsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAvailableManagedRuleGroupsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAvailableManagedRuleGroupsResponse)
    Q_DISABLE_COPY(ListAvailableManagedRuleGroupsResponse)

};

} // namespace Wafv2
} // namespace QtAws

#endif
