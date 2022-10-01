// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRATEBASEDRULESREQUEST_H
#define QTAWS_LISTRATEBASEDRULESREQUEST_H

#include "wafrequest.h"

namespace QtAws {
namespace Waf {

class ListRateBasedRulesRequestPrivate;

class QTAWSWAF_EXPORT ListRateBasedRulesRequest : public WafRequest {

public:
    ListRateBasedRulesRequest(const ListRateBasedRulesRequest &other);
    ListRateBasedRulesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRateBasedRulesRequest)

};

} // namespace Waf
} // namespace QtAws

#endif
