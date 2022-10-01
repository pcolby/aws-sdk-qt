// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRATEBASEDRULESREQUEST_H
#define QTAWS_LISTRATEBASEDRULESREQUEST_H

#include "wafregionalrequest.h"

namespace QtAws {
namespace WafRegional {

class ListRateBasedRulesRequestPrivate;

class QTAWSWAFREGIONAL_EXPORT ListRateBasedRulesRequest : public WafRegionalRequest {

public:
    ListRateBasedRulesRequest(const ListRateBasedRulesRequest &other);
    ListRateBasedRulesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRateBasedRulesRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif
