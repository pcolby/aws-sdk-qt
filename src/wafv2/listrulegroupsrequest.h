// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRULEGROUPSREQUEST_H
#define QTAWS_LISTRULEGROUPSREQUEST_H

#include "wafv2request.h"

namespace QtAws {
namespace Wafv2 {

class ListRuleGroupsRequestPrivate;

class QTAWSWAFV2_EXPORT ListRuleGroupsRequest : public Wafv2Request {

public:
    ListRuleGroupsRequest(const ListRuleGroupsRequest &other);
    ListRuleGroupsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRuleGroupsRequest)

};

} // namespace Wafv2
} // namespace QtAws

#endif
