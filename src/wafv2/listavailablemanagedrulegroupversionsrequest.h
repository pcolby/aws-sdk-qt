// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAVAILABLEMANAGEDRULEGROUPVERSIONSREQUEST_H
#define QTAWS_LISTAVAILABLEMANAGEDRULEGROUPVERSIONSREQUEST_H

#include "wafv2request.h"

namespace QtAws {
namespace Wafv2 {

class ListAvailableManagedRuleGroupVersionsRequestPrivate;

class QTAWSWAFV2_EXPORT ListAvailableManagedRuleGroupVersionsRequest : public Wafv2Request {

public:
    ListAvailableManagedRuleGroupVersionsRequest(const ListAvailableManagedRuleGroupVersionsRequest &other);
    ListAvailableManagedRuleGroupVersionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAvailableManagedRuleGroupVersionsRequest)

};

} // namespace Wafv2
} // namespace QtAws

#endif
